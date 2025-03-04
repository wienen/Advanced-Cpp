/********************************************************
 * Name: Standard Exceptions.cpp
 * ******************************************************
 */

#include <iostream>
#include <new>
using namespace std;

class CanGoWrong {
    public:
        CanGoWrong() {
            char *pMemory = new char[999999999999999999];
            delete [] pMemory;
    }
};


int main() {


    try {
        CanGoWrong wrong;
    }
    catch(bad_alloc &e) {
        cout << "Caught exception " << e.what() << endl;
    }

    cout << "Still running" << endl;
    return 0;
}
