#include <iostream>
#include <string>

using namespace std;

template < typename T >
T Max(T a, T b){
	return a > b ? a : b;
}

class Product {
	private:
		string name;
		double weight, price; // weight in kg, price in $
	public:
		Product(double default_weight, double default_price, string default_name){
			set_weight(default_weight);
			set_price(default_price);
			set_name(default_name);
		}
		bool operator > (Product& product){
			return weight > product.weight && price > product.price;
		}
		void set_weight(double new_weight){
			weight = new_weight;
		}
		void set_price(double new_price){
			price = new_price;
		}
		void set_name(string new_name){
			name = new_name;
		}
		double get_weight(){
			return weight;
		}
		double get_price(){
			return price;
		}
		string get_name(){
			return name;
		}
		void print_info(){
			cout << "name: " << name << ", weight: " << weight << ", price: " << price << ' ';
		}
};

int main(){
	
	int temp1 = Max(1, 2);
	cout << "1 2 Max is " << temp1 << endl;
	double temp2 = Max(3.0, 5.5);
	cout << "3.0 5.5 Max is " << temp2 << endl;
	Product laptop (1.5, 1000, "macbook");
	Product smartphone (0.1, 800, "iPhone");
	Product temp3 = Max(laptop, smartphone);
	laptop.print_info(); 
	smartphone.print_info();
	cout << "Max is ";
	temp3.print_info();

	return 0;
}