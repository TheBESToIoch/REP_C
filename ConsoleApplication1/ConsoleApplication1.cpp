
#include <iostream>

using namespace ::std;


void square() {
	int a = 0;
	cin >> a;
	cout << a << "*" << a << "=" << a * a << endl;
}


void square_A() {
	int a = 0;
	cout << "A: ";
	cin >> a;
	cout << a << "*" << a << "=" << a * a << endl;
}

void multiplication_AB() {
	int a = 0, b = 0;
	cout << "A:";
	cin >> a;
	cout << "B:";
	cin >> b;
	cout << a << "*" << b << "=" << a * b << endl;
}

void abc() {
	int a = 0, b = 0, c = 0;
	cout << "a,b,c: ";
	cin >> a >> b >> c;
	cout << a * b + c << "=" << a << "*" << b << "+" << c << endl;
}

void Next_and_Previous() {
	int a = 0;
	cin >> a;
	cout << "The next number for the number " << a << " is " << a + 1 << endl;
	cout << "The previous number for the number " << a << " is " << a - 1 << endl;
}


int main()
{
	Next_and_Previous();
}


