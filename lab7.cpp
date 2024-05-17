#include <iostream>
#include "health.h"
using namespace std;
int main() {
	CHealth VIP(65), * mario;  // need for CHealth() to be public 
	mario = new CHealth(70);
	CHealth VIP2(50), * mickey;
	mickey = new CHealth(55);

	cout << "  " << VIP.age << "  " << mario->age << endl;
	cout << "  " << VIP2.age << "  " << mickey->age << endl;

	VIP.measureCel();
	mario->measureCel();
	VIP2.measureCel();
	mickey->measureCel();

	cout << "  " << VIP.cel << "C  " << mario->faren << "F \n";
	cout << "  " << VIP2.cel << "C  " << mickey->faren << "F \n";
	cout << "  size " << sizeof(CHealth) << "\n";
	getchar();
	return 1;
}