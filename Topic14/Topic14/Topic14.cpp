 // Topic14.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>

using namespace std;


void number_to_zero() {
    int x = 1, sum = 0;
    while (x > 0) {
        cout << "x=";
        cin >> x;
        sum += x;
    }
    cout << "Summa: " << sum << endl;
}


void number_from_9_to_1() {
    int n = 9;
    while (n > 0) {
        cout << n << " ";
        n--;
    }
    cout << endl;
}

void from_2_to_1() {
    float n = -2;
    while (n <= 1) {
        cout << fixed << setprecision(2) << n << endl;
        cout.width(5);
        n+=0.5;
    }
    cout << endl;
}

void integer_division() {
    int a = 0, b = 0;
    cout << "a,b: ";
    cin >> a >> b;
    cout << a << " div " << b << "=" << a / b << endl;
}

void integer_division_with_remainder() {
    int a = 0, b = 0;
    cout << "a,b: ";
    cin >> a >> b;
    cout << a << " div " << b << "=" << a / b << endl;
    cout << a << " mod " << b << "=" << a % b << endl;
}

void odd_natural() {
    int a = 1, p = 0, sum = 1, k = 0;
    cout << "p: ";
    cin >> p;
    while (sum <= p) {
        sum *= a;
        a += 2;
        k++;
    }
    cout << k-1 << endl;
}

int main() {
    odd_natural();
}
    

