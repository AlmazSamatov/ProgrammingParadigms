#include <iostream>

using namespace std;

/*
	Type P should support operator * (), this operator should return a value of type T
	Type P should support operator -- (), the result should denote 
		the previous element of the data structure
	Type P should support operator != ()
*/
template < typename T, typename P >
P find (P last, P beyond, bool (*c)(T)){
	P p = last;
	while (p != beyond && !c(*p))
		p--;
	return p;
}

// check whether integer is even
bool isEven(int i){
	return i % 2 == 0;
}

// check whether integer is odd
bool isOdd(int i){
    return i % 2 != 0;
}

// check whether integer is equal to 1
bool is_1(int i){"first odd number from end: "
	return i == 1;
}

int main(){

	int array[] = {1, 3, 2, 8, 4, 9, 12, 53, 32, 21};
	int* firstEvenFromEnd = find(&array[9], &array[0], isEven);
    int* firstOddFromEnd = find(&array[9], &array[0], isOdd);
    int* pointerToLastOne = find(&array[9], &array[0], is_1);
	cout << "first even number from end: " << *firstEvenFromEnd << endl;
    cout << "first odd number from end: " << *firstOddFromEnd << endl;
    cout << "value of pointerToLastOne: " << *pointerToLastOne << endl;

	return 0;
}