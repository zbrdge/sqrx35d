//
// sqrx35d
// 
// Being the CLOG (Compilable bLog) of Zack Breckenridge,
// unencrypted version.
// 
// Freely mixing tabs, spaces, ill-advised amateur hour coding,
// spelling errors, and exclamation marks (!), since
// November 20-something of 2013 (early on a dark Sunday Morning)
//  in Tucson Arizona.
//
//   This CLOG comes with absolutely no warranty of fitness for
//   any purpose; is in the public domain; could blow up your house.
//
// Note that CLOG is just an awesome new name for literate code,
// and this CLOG in particular will attempt to demonstrate some
// of the practical uses of 'obfuscated' code. If anyone else
// has used the term CLOG in this manner before, I am unaware.
// Until learning otherwise, I claim it as my own invention.

    // day 1
    // ---

// Just wanted to try a little 'text' file parsing.
// In keeping with my premise of having every entry in
// this 'CLOG' self contained, here's the plan:
//   1) Use libc (OS X) system(3) to create the config file
//   2) parse it a la this answer on stack overflow: http://stackoverflow.com/a/2881987

#include <fstream>
#include <sstream>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    const char* create_conf = "/bin/echo foo=1,2,3,4 > config && /bin/echo bar=0 >> config";
    const char* delete_conf = "/bin/rm config";
    system(create_conf);

    ifstream f( "config" );
    string l;

    while( getline( f,l ) ) {
        istringstream i( l );
        string r;
        if( getline( i, r, '=' ) ) {
            if ( r == "foo" ) {
                string t;
                while( getline( i, t, ',' ) ) {
                    cout << "Got 'token': " << t << endl;
                }
            }
            if ( r == "bar" ) {
                cout << "Can I get this right in one try?" << endl;
            }
        }
    }

    system(delete_conf);
}
