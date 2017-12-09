#include <iostream>
#include <string>

using namespace std;

template < typename T >
void align_array(T* array, int size, int barrier){
	for(int i = 0; i < size; i++){
		if (array[i] < barrier) array[i] += 2;
		else if (array[i] > barrier) array[i] -= 2;
	}
}

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
	
	Product apple_products[4] = {Product(1500, 1000, "macbook"), Product(100, 800, "iPhone"), 
									Product(250, 600, "iPad"), Product(200, 300, "apple TV")};
	for(int i = 0; i < 4; i++){
		apple_products[i].print_info();
	}
	cout << endl;
	align_array(apple_products, 4, 500);
	for(int i = 0; i < 4; i++){
		apple_products[i].print_info();
	}
	return 0;
}