/*
Come up with several examples of using Array template. Demonstrate the use of
the functionality. Provide readable output.
*/
#include <iostream>
#include "Array.h"

using namespace std;

int main(){

    Array < int, -5, 5 > a;
    a[-4] = 4;
    a[-5] = 1;
    a[5] = 6;
    a[0] = -1;
    a[4] = 2;
    cout << "Elements of array: ";
    for(int i = -5; i <= 5; i++){
        cout << a[i] << ' ';
    }

    return 0;
}