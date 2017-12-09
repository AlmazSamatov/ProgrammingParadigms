/*
Write a template for the function fib() that accepts no arguments. Template
parameter takes an integer value N that is used to start calculating the
Fibonacci number. The function returns the integer value: the sum of values
returned by two templates instantiated using N-1 and N-2. See lecture
slides for reference.

1. The name of the function must be precisely fib().
2. Do template specialization for N=1 that returns 1
3. Do template specialization for N=2 that returns 1
4. Write a template for the class Fib that has the single public method fib().
    The functionality for this method is the same as for fib() in step 1.
5. Do full class template specialization for N=1 where the public method fib()
    returns 1
6. Do full class template specialization for N=2 where the public method fib()
    returns 1
7. Do not include additional libraries here

We may test your implementation by calling:
  fib<10>();
  Fib<10> a; a.fib();

Make sure that the names for the function template, the class template and
for the class method match the requirements. Failure to comply with these
requirements will result in failure during compilation and the assignment
receiving the score of 0.
*/
// Primary template 
template<int N>
int fib(){
	return fib<N - 1>() + fib<N - 2>();
}
// Explicit specialization for N = 1
template<>
int fib<1>(){
	return 1; 
}
// Explicit specialization for N = 2
template<>
int fib<2>(){
	return 1; 
}

template<int N>
class Fib{
public:
	int fib(){
		Fib<N-1> f1;
		Fib<N-2> f2;
		return f1.fib() + f2.fib();
	}
};

template<>
class Fib<1>{
public:
	int fib(){
		return 1;
	}
};

template<>
class Fib<2>{
public:
	int fib(){
		return 1;
	}
};