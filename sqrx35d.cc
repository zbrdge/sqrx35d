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

    // day 0
    // ---
//
//
// You can see below that today I'm working through chapter one or
// so of "The C++ Programming Language," by Bjarne Stroustrup.
// Which is funny because I never wanted to learn C++. In fact,
// I would say I come from the "C++ is stupid" school of thought.

// But lately, I've realized that's just the attitude of lazy people
// toward most languages they don't want to have to learn. Which is
// actually understandable and I agree that many languages should
// be freely discarded, perhaps especially languages that allow
// us to so freely shoot ourselves in the feet.

// But there's a large body of C++ code that is worth understanding,
// and C++ has some interesting high level constructs, and indeed
// one could probably come up with a very long list of pros and cons here.
// Or perhaps just a long list of cons.

// Strangely enough though, one of the main reasons I like going through
// this book is the author's writing style -- I truly enjoy
// reading Stroustrup! Maybe I'll change my mind by the end of the
// book, but so far, I have to say he's a great author.

#include <iostream>
#include <algorithm> // http://stackoverflow.com/a/7875721
using namespace std;

double square(double x) {
        return x*x;    
}

int getposition(int *array, size_t size, char c) {
  // Note that here I use two spaces, and in other
  // places I may use 3, four, 5 or even a tab.
  // Also, I might place a brace on the same line as a function name
  // or on the following line. Free form slop is the name of
  // the game on this CLOG today. If you don't like it, get your own!

  int* end = array+size;
  int* match = std::find(array, end, c);
  return (end == match)? -1 : (match-array);

}

int main() {
    int v1[10] = {0,1,2,3,4,5,6,7,8,9};
    int v2[]   = {'a','b','c','d','e','f','g','h','i','j'};

    //std::cout << "Hello, World!\n";
    cout << "Hello, World!\n";

    for (auto i=0; i!=10; ++i) {
        char *a = (char *)&v2[i];
        cout << "v2 at " << i << " is " << *a << '\n';
    }

    // Similar to the previous loop, except nice and slow;, except nice and slow;
    for (auto a : v2) {
        cout << "v2 at " << getposition(v2, 10, a) << " is " << a << '\n';
    }
}   

