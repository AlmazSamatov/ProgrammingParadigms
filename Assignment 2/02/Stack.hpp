/*
In this exercice, you need to write a class that implements a Stack
for generic types. The requirements for the class template are as follows:
  0. This file should not contain main()
  1. There are two parameters given to the template as an argument
  2. The first parameter is the type of Stack
  3. The second parameter is optional and determines the stack size
  4. The name of the class should be precisely "Stack"
  5. The current filename should remain "Stack.hpp"
  6. The entire code for the template should be in the current file

The following methods should be implemented to interact with the Stack
object from outside:
1. push(type value)
    Pushes the value into the stack. This method does not return anything.
2. pop()
    Pop the value out of the stack. Returns the reference to the
    latest pushed object
3. numberOfElements()
    Return the integer number of elements currently in the stack.
    When the stack is empty returns 0.

!!!!IMPORTANT!!!!
Failure to follow any of these requirements will lead to the
compilation failure by the grader and this problem receiving 0 points.
*/
template < typename T, int N = 10 >
class Stack {
    int pointer;
    T stack[N];
public:
    Stack(){ 
        pointer = -1; 
        stack[0] = T(); 
    }
    void push(T newElement){ 
        if(numberOfElements() < N) 
            stack[++pointer] = newElement; 
    }
    T& pop(){ 
        return pointer >= 0 ? stack[pointer--] : stack[0];
    }
    int numberOfElements(){ 
        return pointer + 1; 
    }   
};