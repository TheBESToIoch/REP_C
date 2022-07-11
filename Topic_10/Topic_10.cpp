#include <iostream>

using namespace ::std;

void towel_a_and_roll_n() {
	int n = 0, a = 0;
	cout << "n,a: ";
	cin >> n >> a;
	cout << n / a << endl;
}

void apple() {
	int n = 0, k = 0;
	cin >> n >> k;
	cout << k / n << endl;
}

void apple_2() {
	int n = 0, k = 0;
	cin >> n >> k;
	cout << k % n << endl;
}

void n_m() {
	int n = 0, m = 0;
	cout << "n,m: ";
	cin >> n >> m;
	cout << n << "=" << m << "*a+b" << endl;
	cout << "a=" << 13 / 3 << endl;
	cout << "b=" << 13 % 3 << endl;
}

void n_m_2() {
	int n = 0, m = 0, j = 0;
	cout << "n,m: ";
	cin >> n >> m;
	j = n / m;
	cout << n << "=";
	for (int i = 0; i < j; i++) {
		cout << m << "+";
	}
	cout  << n % m << endl;
}

void containers() {
	int n = 0, m = 0, a = 0, b = 0, kol=0, dlina=0, shirina=0;
	cout << "n,m,a,b: ";
	cin >> n >> m >> a >> b;
	dlina = n / a;
	shirina = m / b;
	kol = dlina * shirina;
	cout << kol << endl;
}

void air_balls() {
	int n = 0, x = 0;
	cin >> n >> x;
	cout << x / (n - 1) << endl;
}

void system_of_the_equation() {
	int x = 0, y = 0, z = 0;
	cin >> x >> y >> z;
	cout << x + z - y << endl;
}

void alien() {
	int h = 0, f = 0, n1 = 0, n2 = 0;
	cin >> h >> f;
	n1 = f / 2 - h;
	n2 = h - n1;
	cout << n1 << endl << n2 << endl;
}

void school() {
	int m = 0, k = 0, n = 0, l = 0;
	cin >> m >> k >> n >> l;
	cout << (m - l) / (l + k) << endl;
}

void triangle_of_symbol() {
	int n = 0,  j = 0, k = 0;
	cout << "n: ";
	cin >> n;
	j = n;
	for (int i = 0; i < (n+1)/2; i++) {
		for (int i = 0; i < k; i++) {
			cout << " ";
		}

		for (int i = 0; i < j; i++) {
			cout << "*";
		}
		j -= 2;
		k++;
		cout << endl;
	}
}

void triangle_of_symbol_2() {
	int n = 0, j = 0;
	cout << "n: ";
	cin >> n;
	int k = 1;
	int m = n / 2;
	for (int i = 0; i < (n + 1) / 2; i++) {

		for (int i = 0; i < k; i++) {
			cout << "*";
		}
		k++;
		cout << endl;
	}

	for (int i = 0; i < n - (n + 1) / 2; i++) {
		for (int i = 0; i < m; i++) {
			cout << "*";
		}
		m--;
		cout << endl;
	}
}

void triangle_of_symbol_3() {
	int n = 0, j = 0, k = 0, l = 0, c = 0;
	cout << "n: ";
	cin >> n;
	j = n;
	l = n - ((n + 1) / 2) - 1;
	c = n%2;
	for (int i = 0; i < (n + 1) / 2 - 1 + c ; i++) {
		for (int i = 0; i < k; i++) {
			cout << " ";
		}

		for (int i = 0; i < j; i++) {
			cout << "*";
		}
		j -= 2;
		k++;
		cout << endl;
	}
	for (int i = 0; i < n - ((n + 1) / 2); i++) {
		for (int i = 0; i < l; i++) {
			cout << " ";
		}
		c += 2;
		for (int i = 0; i < c; i++) {
			cout << "*";
		}
		l--;
		cout << endl;
	}
}

int main()
{
	triangle_of_symbol_3();
}

