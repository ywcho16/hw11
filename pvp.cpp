#include <iostream>
using namespace std;
class a {
public:
	float x = 100;
	void showx() {
		cout << "x " << x << endl;
		cout << "y " << y << endl;
		cout << "yy " << gety() << endl;
	}
	void sety() { y = gety(); }
	float showy() { return y; }
private:
	float y = 200;
	float gety() { return y; }
};
void main() {
	a b;
	b.showx();
	b.sety();
	b.showx();
	cout << b.showy() << endl;
}