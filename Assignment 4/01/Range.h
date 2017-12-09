/*
Write your implementation of Range class template, with the following template
parameters:
1. The type of range {int,char,...}
2. Range lower bound (LB), i.e. LB<=range_value
3. Range upper bound (UB), i.e. range_value<=UB

The class Range should include the following constructors:
1. Constructor that initializes range from the variable of type T
2. Copy constructor

In both cases verify that the value lies within the specified range

The class Range should overload the following operators:
1. = (for variables of base types, such as {int,char,...}, and other Range
      objects with the same boundaries)
2. + (for variables of base types, such as {int,char,...}, and other Range
      objects with the same boundaries. This should create a new Range object)
3. - (for variables of base types, such as {int,char,...}, and other Range
      objects with the same boundaries. This should create a new Range object)
4. += (for variables of base types, such as {int,char,...}, and other Range
      objects with the same boundaries. Call an exception in case of going out
      of range)
5. -= (for variables of base types, such as {int,char,...}, and other Range
      objects with the same boundaries. Call an exception in case of going out
      of range)
6. ++ (increment Range variable by one. Call an exception in case of going out
      of range)
7. -- (decrement Range variable by one. Call an exception in case of going out
      of range)
8. < (for comparing two objects of type Range)
9. > (for comparing two objects of type Range)
10. Casting to long, int, double

The class Range should implement the following methods:
1. bool valid(): indicates that the value is within the specified range
2. T getVal(): returns the value of the Range

In the case when the value is out of range during the instantiation process
or after arithmetical operations, throw std::runtime_error("Relevant message")

Testing of your implementation will be done by calling the variations of the
following expressions:
      Range<int,L,U> a(value)
      a+b
      a-b
      a++
      b--
      a+=b
      b-=4
      a<b
      (long)b
*/
#include <stdexcept>
#include <cstdlib>

// class for keeping value with some range
template < typename T, T LB, T UB >
class Range{
	T value;
	void check(void){
		if (!valid()){
            throw std::runtime_error("value is out of range exception");
		}
	}
    Range() {};
public:
	// constructor
	Range (T v){
		value = v;
		check();
	}
	// copy constructor
	Range (Range& r){
		value = r.value;
	}
	Range& operator = (Range& r){
		value = r.value;
		return *this;
	}
	Range& operator = (T v){
		value = v;
		check();
		return *this;
	}
	Range operator + (Range& r){
		Range range = Range(value + r.value);
		return range;
	}
	Range operator + (T v){
		Range range = Range(value + v);
		return range;
	}
	Range operator - (Range& r){
		Range range = Range(value - r.value);
		return range;
	}
	Range operator - (T v){
		Range range = Range(value - v);
		return range;
	}
	Range& operator += (Range& r){
		value += r.value;
		check();
		return *this;
	}
	Range& operator += (T v){
		value += v;
		check();
		return *this;
	}
	Range& operator -= (Range& r){
		value -= r.value;
		check();
		return *this;
	}
	Range& operator -= (T v){
		value -= v;
		check();
		return *this;
	}
	Range operator ++ (int){
		Range range = *this;
		value += 1;
		check();
		return range;
	}
	Range operator -- (int){
		Range range = *this;
		value -= 1;
		check();
		return range;
	}
	bool operator < (Range& r){
		return value < r.value;
	}
	bool operator > (Range& r){
		return value > r.value;
	}
	T getVal(){
		return value;
	}
	bool valid(){
		return value >= LB && value <= UB;
	}
	operator int() const{
		return (int) value;
	}
	operator long() const{
		return (long) value;
	}
	operator double() const{
		return (double) value;
	}
};

