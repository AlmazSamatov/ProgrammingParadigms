#include <fstream>
#include <string>
#include "Stack.hpp"
#include "Array.hpp"

using namespace std;

ifstream cin("input.txt");
ofstream cout("output.txt");

class Product {
	private:
		string name;
		int weight, price; // weight in gramms, price in $
	public:
		Product(int default_weight, int default_price, string default_name){
			set_weight(default_weight);
			set_price(default_price);
			set_name(default_name);
		}
		Product(){
			set_name("default_product");
			set_weight(0);
			set_price(0);
		}
		bool operator > (int& i){
			return price > i;
		}
		bool operator < (int& i){
			return price < i;
		}
		Product operator += (int d){
			price += d;
			return *this;
		}
		Product operator -= (int d){
			price -= d;
			return *this;
		}
		void set_weight(int new_weight){
			weight = new_weight;
		}
		void set_price(int new_price){
			price = new_price;
		}
		void set_name(string new_name){
			name = new_name;
		}
		int get_weight(){
			return weight;
		}
		int get_price(){
			return price;
		}
		string get_name(){
			return name;
		}
		void print_info(){
			cout << "name: " << name << ", weight: " << weight << ", price: " << price << "; ";
		}
};

int main(){
	
	/*Array <Product> a(2);
	a[0] = Product(1500, 1000, "macbook");
	a[1] = Product(100, 800, "iPhone");

	a.resize(5);
	
	for(int i = 0; i < 5; i++){
		a[i].print_info();
		cout << endl;
	}*/

	Stack < int > s;
	cout << s.empty() << endl;
	s.push(5);
	s.push(6);
	s.push(57);
	Stack < int > p(s);
	while(p.numberOfElements() >= 1){
		cout << p.pop() << endl;	
	}
	cout << p.empty() << endl;
	cout << s.empty() << endl;
	while(s.numberOfElements() >= 1){
		cout << s.pop() << endl;	
	}

	/*cout << s.pop() << endl;
	s.push(1);
	cout << s.numberOfElements() << endl;
	cout << s.pop() << endl;
	cout << s.numberOfElements() << endl;
	cout << s.pop() << endl;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	while(s.numberOfElements() >= 1){
		cout << s.pop() << endl;	
	}
	cout << s.pop() << endl;*/


	/*Stack < Product > s;
	s.pop().print_info();
	s.push(Product(1500, 1000, "macbook"));
	s.push(Product(250, 600, "iPad"));
	s.push(Product(100, 800, "iPhone"));
	s.push(Product(200, 300, "apple TV"));
	cout << s.numberOfElements() << endl;
	s.pop().print_info();
	s.pop().print_info();
	s.pop().print_info();
	s.pop().print_info();
	cout << s.numberOfElements() << endl;*/

	return 0;
}