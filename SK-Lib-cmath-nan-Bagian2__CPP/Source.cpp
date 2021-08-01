
#include <iostream>
#include <cmath> // for sqrt()
#include <conio.h>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

int main() {
	float a = sqrt(2);
	float b = sqrt(-2);


	a == a ? cout << "Its a real number" << endl : 
		cout << "Its NaN" << endl;

	b == b ? cout << "Its a real number" << endl :
		cout << "Its NaN" << endl;

	_getch();
	return 0;
}
