/*
Write an implementation of class Array2D that uses the idea of the class Range to
allow for arbitrary indexing ranges. The template for class Array2D should accept
the following parameters:
1. Type of objects in Array2D
2. Lower bound for the index, i.e. the minimum valid value of index of the
    first dimension
3. Upper bound for the index, i.e. the maximum valid value of index of the
    first dimension
4. Lower bound for the index, i.e. the minimum valid value of index of the
    second dimension
5. Upper bound for the index, i.e. the maximum valid value of index of the
    second dimension

The values of upper and lower bounds are assumed to be valid and no
additional checks are required.

Similarly to the problem 2, you need to overload the operator []. The overloading
process is different. Look for information on how to implement multidimensional
arrays in C++. Should any of indexes be out of boundary, throw the
std::runtime_error exception.

Additional methods to be implemented:
1. size() returns the total number of elements in the Array2D
2. getLB() returns the pointer to the array of lower bounds for each dimension
3. getUB() returns the pointer to the array of upper bounds for each dimension

For testing purposes try:
  Array<int,-5,5,0,10> a;
  a[-4][2] = 48;
*/

template < typename T, int LB1, int UB1, int LB2, int UB2 >
class Array2D {
    int size1, size2;
    T ** array2d;
public:
    Array2D(){
        size1 = UB1 - LB1 + 1;
        size2 = UB2 - LB2 + 1;
        array2d = new T*[size1];
        for(int i = 0; i < size1; i++){
            array2d[i] = new T[size2];
        }
    }

    ~Array2D(){
        delete[] array2d;
    }

    int size(){
        return size1 * size2;
    }

    int * getLB(){
        int * a = new int[2];
        a[0] = LB1;
        a[1] = LB2;
        return a;
    }

    int * getUB(){
        int * a = new int[2];
        a[0] = UB1;
        a[1] = UB2;
        return a;
    }

    class Array {
        T * internalArray;
        int size;
    public:
        Array(T * array, int sizeOfInternal) {
            internalArray = array;
            size = sizeOfInternal;
        }

        ~Array(){
            delete[] internalArray;
        }

        T& operator [] (int index){
            index += UB2;
            if(index < 0 || index >= size)
                throw std::runtime_error("index out of boundary exception");
            return internalArray[index];
        }
    };

    Array operator [] (int index){
        index += UB1;
        if(index < 0 || index >= size1)
            throw std::runtime_error("index out of boundary exception");
        return Array(array2d[index], size2);
    }
};