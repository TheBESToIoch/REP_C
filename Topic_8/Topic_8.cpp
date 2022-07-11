
#include <iostream>

using namespace ::std;

void a_multiply_b() {
	int a=0, b=0, k=0;
	cout << "a,b: ";
	cin >> a >> b;
	for (int i = 0 ; i < b; i++) {
		k = k + a;
	}
	cout << a << "*" << b << "=" << k << endl;
}

void from_1_to_n() {
	int n = 0, k=0, l=1;
	cout << "n: ";
	cin >> n;
	cout << "1";
	for (int i = 2; i <= n; i++) {
		k = k + i;
		cout << "+" << k;
		l = l + k;
		k = 0;
	}
	cout << "=" << l << endl;
}

void factorial() {
	int n = 0, k = 1;
	cout << "n: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		k = k * i;
	}
	cout << n << "!=" << k << endl;
}

void a_power_b() {
	int a = 0, b = 0, k=1;
	cout << "a,b: ";
	cin >> a >> b;
	for (int i = 1; i <= b; i++) {
		k *= a;
	}
	cout << a << "^" << b << "=" << k << endl;
}

void pupils() {
	int m = 0, k = 0;
	for (int i = 1; i <= 10; i++) {
		cin >> m;
		k += m;
	}
	cout << k << endl;
}

void annual_income() {
	 int arr[12] = {};
	 int sum = 0;
	 for (int i = 0; i <= 11; i++) {
		 cin >> arr[i];
	 }
	 for (int i = 0; i <= 11; i++) {
		 sum += arr[i];
	 }
	 cout << sum << endl;
}

void tilli_Milli_Tryamdiya() {
	int arr[14] = {};
	int sum = 0;
	for (int i = 0; i <= 13; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	cout << sum << endl;
}

void championship_Problem() {
	int num = 0, s = 0; 
	cin >> num;
	int *arr = new int[num];
	for (int i = 0; i < num; i++) {
		cin >> arr[i];
		s += arr[i];
	}
	cout << s << endl;
}

void fishing() {
	int m = 0, k = 0;
	for (int i = 1; i <=7; i++) {
		cin >> m;
		k += m;
	}
	cout << k << endl;
}

void apple() {
	long long  m = 0, k = 0;
	for (int i = 1; i <= 10; i++) {
		cin >> m;
		k += m;
	}
	cout << k << endl;
}

void shop() {
	int num = 0, s = 0, k = 0;
	cin >> num;
	int *arr = new int[num];
	int *array = new int[num];
	for (int i = 0; i < num; i++) {
		cin >> arr[i];
		cin >> array[i];
		k = arr[i] * array[i];
		s += k;
		k = 0;
	}
	cout << s << endl;
}

void garden() {
	int n = 0, s = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		s += i * i;
	}
	cout << s << endl;
}

void sum_k() {
	int num = 0, s = 0, k = 0;
	cin >> num >> k;
	int *arr = new int[num];
	for (int i = 0; i < num; i++) {
		cin >> arr[i];	
	}
	for (int i = 0; i < k; i++) {
		s += arr[i];
	}
	cout << s << endl;
}

int main()
{
	sum_k();
}


