# include <iostream>

class SetValue {

	int x, y;
public:
	void setX(int xi);
	void setY(int yi);
	int getX();
	int getY();
};

void SetValue::setX(int xi) {
	x = xi;
}

void SetValue::setY(int yi) {
	y = yi;
}

int SetValue::getX() {
	return x;
}

int SetValue::getY() {
	return y;
}

int main() {
	SetValue obj;
	obj.setX(33);
	obj.setY(44);

	std::cout << "x = " << obj.getX() << " ,Y = " << obj.getY() << std::endl;
	return 0;
}