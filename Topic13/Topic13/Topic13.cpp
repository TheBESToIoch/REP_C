// Topic13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>

using namespace std;


void more_less() {
    cout << "a: ";
    int a;
    cin >> a;
    cout << (a > 0) << endl;
}

void multiply() {
    cout << "a,b: ";
    int a, b, c;
    cin >> a >> b;
    cout << "a*b: ";
    cin >> c;
    cout << (a * b == c) << endl;
}


void multiply_plus() {
    cout << "a,b: ";
    int a, b, c, m;
    cin >> a >> b;
    cout << "a*b: ";
    cin >> c;
    cout << "a+b: ";
    cin >> m;
    cout << ((a+b == m) && (a * b == c)) << endl;
}

void n_multiply_plus_n() {
    int a, b, c, m, n, k;
    cout << "n: ";
    cin >> n;
    cout << "a,b: ";
    cin >> a >> b;
    cout << "a*b: ";
    cin >> c;
    cout << "a+b: ";
    cin >> m;
    k = (a + b == m) + (a * b == c);
    n += k;
    cout << (n > 1) << endl;
}

void leap_year() {
    int a, n, k;
    cout << "n: ";
    cin >> n;
    k = (n % 4 == 0) && (n % 100 == 0) && (n % 400 == 0);
    cout << k << endl;
    //cout << ((n % 4 == 0 ) && (n % 100 == 0) && (n % 400 == 0));
    //cout << (n % 4 == 0);
    // cout << (n % 100 == 0);
    // cout << (n % 400 == 0);
}

int main()
{
    leap_year();
}

