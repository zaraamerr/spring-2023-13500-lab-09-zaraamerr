//A separate file for Task D since Zamansky doesn't want us to incorporate
//this particular task in our main, makefile, or tests.

//Task D: All is good in the program below, and the memory is allocated dynamically, 
//but it crashes your computer, because it runs out of memory really quickly. Fix it.
//It should still keep creating poems, but all dynamically allocated memory should get deleted when
//it is not needed. (The program can be stopped with Ctrl+C in the terminal.)

//Things to note:
//  1. You can compile this program, run the executable, then use Task Manager to monitor the memory usage.

#include <iostream>
using namespace std;

string * createAPoemDynamically() {
    string *p = new string;
    *p = "Roses are red, violets are blue";
    return p;
}

int main() {
    while(true) {
        string *p;
        p = createAPoemDynamically();

        // assume that the poem p is not needed at this point

        delete p; //delete dynamically allocated memory

    }
}