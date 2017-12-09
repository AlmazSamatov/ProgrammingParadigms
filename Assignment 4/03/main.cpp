/*
Come up with several examples of using Array2D template. Demonstrate the use of
the functionality. Provide readable output.
*/
#include <iostream>
#include "Array2D.h"

using namespace std;

int main(){

    Array2D <int, -5, 5, 0, 10 > a;
    a[-4][0] = 1;
    cout << "size of array is: " << a.size() << endl;
    cout << "element a[-4][0] has value: " << a[-4][0] << endl;
    int * lowerBounds = a.getLB();
    cout << "lower bounds: " << lowerBounds[0] << ' ' << lowerBounds[1] << endl;

    return 0;
}