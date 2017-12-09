#include <stdexcept>
#include <cstring>
#define DEFAULT_SIZE 10
template < typename T >
class Array{
    int size;
    T * array;
public:
    Array(int size){
        this->size = size;
        array = new T[size];
    }
    Array(){
        size = DEFAULT_SIZE; // default size of array
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