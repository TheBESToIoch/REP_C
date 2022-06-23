

#include <iostream>

using namespace ::std;


void from_1_to_5() {
    for (int i = 1; i < 6; i++) {
        cout << i << endl;
    }
}


void n_number() {
    int n = 0;
    cout << "n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << i;
    }
    cout << endl;
}

void n_numbers_n() {
    int n = 0;
    cout << "n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << i;
    }
    for (int i = n-1; i >= 1; i--) {
        cout << i;
    }
    cout << endl;
}

void numbers_from_1_to_n() {
    int n = 0;
    cout << "n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
}

void one_plus_one() {
    int n = 0;
    cout << "n: ";
    cin >> n;
    for (int i = 1; i < n; i++) {
        cout  << "1+";
    }
    cout << "1=" << n << endl;
}

void a_and_b() {
    int a = 0,b = 0;
    cout << "a,b: ";
    cin >> a >> b;
    cout << a << "*" << b << "=";
    for (int i = 1; i < b; i++) {
        cout << a << "+";
    }  
    cout << a << endl; 
}

void down_up() {
    int n = 0;
    cout << "n: ";
    cin >> n;
    for (int i = 1, k = n; i <= n; i++,k--) {
        cout << i << " : " << k << endl;
    }
    cout << endl;
}

void aliquot_5() {
    int n = 0 ;
    cout << "n: ";
    cin >> n;
    for (int i = 0, k = 0; i < n; i++) {
        cout << k << " ";
        k += 5;
    }
    cout << endl;
}

void oddness() {
    int n = 0;
    cout << "n: ";
    cin >> n;
    for (int i = 0, a = 0; i < n; i++) {
        cout << a << " ";
        a = a + 2 * i + 1;
    }
    cout << endl;
}

void plus_7() {
    int n = 0;
    cout << "n: ";
    cin >> n;
    for (int i = 0, k = 4; i < n; i++) {
        cout << k << " ";
        k += 7;
    }
    cout << endl;
}

int main()
{
    plus_7();
}

