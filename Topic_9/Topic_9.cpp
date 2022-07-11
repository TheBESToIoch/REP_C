

#include <iostream>

using namespace ::std;


void matrix_n() {
	int n = 0;
	cout << "n: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			cout << "*";
		}
		cout << endl;
	}
}

void square_number() {
	int n = 0;
	cout << "n: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			cout << i+1;
		}
		cout << endl;
	}
}

void square_number_2() {
	int n = 0;
	cout << "n: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			cout << k + 1;
		}
		cout << endl;
	}
}

void triangle_number() {
	int n = 0, m = 1;
	cout << "n: ";
	cin >> n;
	for (int i = 0; i < n; i++) {

		for (int k = 0; k < m; k++) {
			cout << i + 1;
		}
		m += 1;
		cout << endl;
	}
}

void triangle_number_2() {
	int n = 0;
	cout << "n: ";
	cin >> n;
	int m = n;
	for (int i = 0; i < n; i++) {

		for (int k = 0; k < m; k++) {
			cout << m ;
		}
		m -= 1;
		cout << endl;
	}
}

void triangle_number_3() {
	int n = 0;
	cout << "n: ";
	cin >> n;
	int m = 1;
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < m; k++) {
			cout << m;
		}
		m += 1;
		cout << endl;
	}
	int j = n-1;
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < j; k++) {
			cout << j;
		}
		j -= 1;
		cout << endl;
	}
}

void triangle_star() {
	int n = 0;
	cout << "n: ";
	cin >> n;
	int m = n;
	for (int i = 0; i < n; i++) {

		for (int k = 0; k < m; k++) {
			cout << "*";
		}
		m -= 1;
		cout << endl;
	}
}

void triangle_star_2() {
	int n = 0;
	cout << "n: ";
	cin >> n;
	int m = n, j = 0;
	for (int i = 0; i < n; i++) {
		for (int i = 0; i < j; i++) {
			cout << " ";
		}
		for (int k = 0; k < m; k++) {
			cout << "*";
		}
		m -= 1;
		j++;
		cout << endl;
	}
}

void triangle_star_3() {
	int n = 0;
	cout << "n: ";
	cin >> n;
	int m = 1, j = n-1;
	for (int i = 0; i < n; i++) {
		for (int i = 0; i < j; i++) {
			cout << " ";
		}
		for (int k = 0; k < m; k++) {
			cout << "*";
		}
		m += 1;
		j--;
		cout << endl;
	}
}

int main()
{
	triangle_star_3();
}


