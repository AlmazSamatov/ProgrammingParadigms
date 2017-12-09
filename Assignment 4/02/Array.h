/*
Write an implementation of class Array that uses the idea of the class Range to
allow for arbitrary indexing ranges. The template for class Array should accept
the following parameters:
1. Type of objects in Array
2. Lower bound for the index, i.e. the minimum valid value of index
3. Upper bound for the index, i.e. the maximum valid value of index

The values of upper and lower bounds are assumed to be valid and no
additional checks are required.

You need to overload the operator [], so that it accepts any integer value as
an index and performs boundary checks. Should the index be out of boundary,
throw the std::runtime_error exception.

Additional methods to be implemented:
1. size() returns number of elements
2. getLB() returns lower bound
3. getUB() returns upper bound

For testing purposes try:
  Array<int,-5,5> a;
  a[-4] = 3;
*/
#include <iostream>
#include <stdexcept>
#include <cstring>

template < typename T, int LB, int UB >
class Array{
    int size;
    T * array;
public:
    Array(){
        size = UB - LB + 1;
        array = new T[size];
    }
    ~Array(){
        delete[] array;
    }
    Array(const Array& other){
        for(int i = 0; i < size && i < other.size; i++){
            array[i] = other.array[i];
        }
    }
    Array& operator = (const Array& other){
        for(int i = 0; i < size && i < other.size; i++){
            array[i] = other.array[i];
        }
        return *this;
    }
    T& operator [] (int index){
        index += UB;
        if(index < 0 || index >= size)
            throw std::runtime_error("index out of boundary exception");
        return array[index];
    }
    void resize(int new_size){
        T * new_array = new T[new_size];
        std::memset(new_array, 0x00, new_size * sizeof(T));
        for(int i = 0; i < size && i < new_size; i++){
            new_array[i] = array[i];
        }
        delete[] array;
        array = new_array;
        size = new_size;
    }
    int getLB(){
        return LB;
    }
    int getUB(){
        return UB;
    }
    int getSize(){
        return size;
    }
};






















