#include "date_.h"

void main() {
	date_ d1(12, 2, 2000);
	date_ d2(15, 4, 2000);
	d2.print();
	cout << endl;
	d2 += 500;
	d2.print();
	cout << endl;
	d2 -= 500;
	d2.print();
	cout << endl;
	system("pause");
}