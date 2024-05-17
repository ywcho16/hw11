#include <iostream>
using namespace std;
class a {
public:
	a() {
		aa = 123; n++;
		cout << n << " eung ae\n";
	}
	float aa;
	static int n;
	~a() { cout << n << "is dying\n"; n--; }
};
int a::n = 0;
int main() {
	a* cc;
	cc = new a[123];
	for (int i = 0; i < 123; i++)
		cc[i].~a();
		cout << cc[2].aa << endl;
		return 123;
}