#include <iostream>

bool funcA() {
	int c;
	std::cin >> c;
	if (c < 10) //Let's assume this is exception
		return false;
	return true;
}
int main() {

	try {
		if (!funcA()) {
			throw 0;
		}
		else {}
	}
	catch (int exception) {
		std::cout << "Exception : Invalid Input!!" << std::endl;
	}
	return 0;
}
