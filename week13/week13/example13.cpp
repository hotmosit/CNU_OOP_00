#include <iostream>

struct Functor {
	
	void operator()(int x) {
			std::cout << "functor executed: " << x <<std::endl;
		
	}
};

int main() {
	Functor funcrot;
	funcrot(44);
}