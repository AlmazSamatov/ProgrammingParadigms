#include <algorithm>
#include "Array.hpp"
using namespace std;
template < typename T >
class Stack {
	int pointer;
	Array <T> stack;
public:
	Stack(){ 
		pointer = -1; 
		stack[0] = T(); 
	}
	Stack(int n): pointer(-1), stack(n) {}
	Stack(const Stack& other){
		pointer = other.pointer;
		stack = other.stack;
	}
	void push(T newElement){ 
		if(numberOfElements() < stack.getSize()) 
			stack[++pointer] = newElement; 
	}
	T& pop(){ 
		return pointer >= 0 ? stack[pointer--] : stack[0];
    }
	int numberOfElements(){ 
		return pointer + 1; 
	}	
	bool empty(){
		return pointer == -1;
	}
};