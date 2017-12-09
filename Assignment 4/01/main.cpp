/*
Come up with several examples of using Range template. Demonstrate the use of
the functionality. Provide readable output.
*/
#include <iostream>
#include "Range.h"

using namespace std;

int main(){

    Range < int, 0, 10 > r1(2);
    Range < int, 0, 10 > r2(5);
    Range < int, 0, 10 > r3 = r1 + r2;
    Range < int, 0, 10 > r4 = r2 - r1;
    cout << "r3 value after r3 = r1 + r2 is: " << r3.getVal() << endl;
    cout << "r4 value after r4 = r2 - r1 is: " << r4.getVal() << endl;
    r1 += 3;
    cout << "r1 value after r1 += 3 is: " << r1.getVal() << endl;
    r2 -= r1;
    cout << "r2 value after r2 -= r1 is: " << r2.getVal() << endl;
    r1--;
    cout << "r1 value after r1-- is: " << r1.getVal() << endl;
    r2++;
    cout << "r2 value after r2++ is: " << r2.getVal() << endl;
    r2 -= 1;
    cout << "r2 value after r2 -= 1 is: " << r2.getVal() << endl;
    r1 = r2++;
    cout << "r1 value after r1 = r2++ is: " << r1.getVal() << endl;
    cout << "r2 value after r1 = r2++ is: " << r2.getVal() << endl;
    if(r2 > r1){
        cout << "operator > works" << endl;
    }
    long l = r1;
    cout << "value of long variable l after long l = r1 is: " << l << endl;

    Range < char, 'c', 'z' > rangeForChars('d');
    rangeForChars++;
    cout << "value of rangeForChars after rangeForChars++ is: " << rangeForChars.getVal();

    return 0;
}