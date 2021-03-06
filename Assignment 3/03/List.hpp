/*
In this excersize you need to write a class that implements a List
for generic types. The requirements for the class template are as follows:
  0. This file should not contain main()
  1. There is a single parameter given to the template as an argument -
      the type of List
  2. The name of the class should be precisely "List"
  3. The current filename should remain "List.hpp"
  4. The entire code for the template should be in the current file

The following methods should be implemented to interact with the Stack
object from outside:
1. Constructor that initializes the List object. This
    constructor does not accept any argument.
2. Destructor for the object. Free allocated memory in this destructor.
3. resize(int value) resizes the List to the size of type*value. The
    resonable way to resize the List is to allocate new part of memory,
    copy the data, and free the old memory
4. getSize() return the integer number of elements type that the List
    can store
5. The elements of your List should be accessible using [], i.e. a[0].
    Overload the operator that is needed for that. Out of boundary check
    should be performed. If the index is out of bounds, throw out_of_range
    exception.
6. Use only standard C++ libraries.
7. It is a good idea to reuse your code from the previous assignment.

!!!!IMPORTANT!!!!
Failure to follow any of these requirements will lead to the
compilation failure by the grader, and this excersize will receive 0 score.
*/
#include <iostream>
#include <stdexcept>
#include <cstring>
#define DEFAULT_SIZE 10

template < typename T >
class List{
    int size;
    T * array;
public:
    List(int size){
        this->size = size;
        array = new T[size];
    }
    List(){
        size = DEFAULT_SIZE; // default size of array
        array = new T[size];
    }
    ~List(){
        delete[] array;
    }
    List(const List& other){
        for(int i = 0; i < size && i < other.size; i++){
            array[i] = other.array[i];
        }
    }
    List& operator = (const List& other){
        for(int i = 0; i < size && i < other.size; i++){
            array[i] = other.array[i];
        }
        return *this;
    }
    T& operator [] (int index){
        if(index < 0 || index >= size)
            throw std::out_of_range("out of range exception");
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
    int getSize(){
        return size;
    }
};