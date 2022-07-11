// Topic12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>
using namespace std;

void pow()  {
    int x;
    cout << "x: ";
    cin >> x;
    cout << "sqr(" << x << ")=" << pow(x,2) << endl;
}

void sqrt() {
    float x;
    cout << "x: ";
    cin >> x;
    cout << "sqrt(" << fixed << setprecision(2) << x << ")=" << sqrt(x) << endl;
}

void taxOffice() {
    float a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12;
    cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6>> a7 >> a8 >> a9 >> a10 >> a11 >> a12;
    float sum = a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9 + a10 + a11 + a12;
    float n = 0.13 * sum;
    cout << fixed << setprecision(2) << n << endl;
}

void tableSqrt() {
    float n;
    cout << "n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << fixed << setprecision(2) << sqrt(i*j) << " ";
        }
        cout << endl;
    }
}



void top_1() {
    int arr[] = {10,17, 2, 5, 12, 99, 1};
    int n = 7;
    int m = arr[0];
    int k = 0;
    int t = 0;
    int top = 0;
    for (int i = 0; i < n; i++) {
        if (m < arr[i]) {
            m = arr[i];
            k = i;
        }
    }
    t = arr[0];
    arr[0] = arr[k];
    arr[k] = t;
    int top_2 = arr[1];
    for (int j = 1; j < n; j++) {
        if (top_2 < arr[j]) {
            top_2 = arr[j];
        }
    }
    cout << m << "  " << top_2 << "  " << k  << " " << top << endl;
}

void from_n_1_n() {
    int n;
    cout << "n: ";
    cin >> n;
    for (int i = -n; i < n - 1; i++) {
        cout << abs(i + 1) + 1 << " ";
    }
    cout << endl;
}

void from_0_n_0() {
    int n;
    cout << "n: ";
    cin >> n;
    for (int i = -n; i <= n; i++) {
        cout << abs(abs(i)-n) << " ";
    }
    cout << endl;
}

void from_1_n_1() {
    int n;
    cout << "n: ";
    cin >> n;
    for (int i = -n+1; i <= n-1; i++) {
        cout << abs(abs(i) - n) << " ";
    }
    cout << endl;
}

void stars_1() {
    int n;
    cout << "n: ";
    cin >> n;
    int m = 0, j = -n;
    for (int i = 0; i < 2*n-1; i++) {
        m = abs(j + 1) + 1;
        for ( int k = 0; k < m; k++) {
            cout << "*";
        }
        j++;
        cout << endl;
    }
}

void stars_2() {
    int n;
    cout << "n: ";
    cin >> n;
    int m = 0, k = -n/2;
    for (int i = 0; i < n; i++) {
        m = abs(abs(k) - n/2-1);
        for (int j = 0; j < m; j++) {
            cout << "*";
        }
        k++;
        cout << endl;
    }
}

void apples() {
    int n, a;
    float sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        sum += a;
    }
    cout << fixed << setprecision(2) << sum / n << endl;
}

void orphanage() {
    int n, k;
    float sum = 0, weight;
    cin >> k >> n;
    for (int i = 0; i < n; i++) {
        cin >> weight;
        sum += weight;
    }
    cout << fixed << setprecision(2) << sum / k << endl;
}

void radicals() {
    float x, sum, answer;
    int n;
    cin >> x;
    cin >> n;
    sum = 0;
    for (int i = 0; i < n; i++) {
       sum = sqrt(sum+x);
    }
    cout <<  fixed << setprecision(5) << sum << endl;
}

void fish_in_the_pond() {
    float n, k, m, l, sum = 0.0;
    cin >> n >> k >> m >> l;
    for (int i = 0; i < l; i++) {
        n = n * k;
        sum += m;
    }
    cout << fixed << setprecision(2) << n - sum << endl;
}

void equation() {
    int n, m, a;
    float ans = 0.0, sum = 0.0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a;
        sum += a;
    }
    ans = m / sum;
    cout << fixed << setprecision(5) << ans << endl;
}

int main()
{
    equation();
}


