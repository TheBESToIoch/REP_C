

#include <iostream>
#include <iomanip>

using namespace ::std;

void for_1_to_n() {
    int xn, yn;
    cout << "xn, yn: ";
    cin >> xn >> yn;
    int j = 1, m = 1;
    for (int i = 1; i <= yn/2; i++) {
        for (j = 1; j <= xn; j++) {
            cout << setw(3) << m << " ";
            m++;
        }
        cout << endl;
        for (int k = 1; k <= xn; k++) {
            cout << setw(3) << "  . ";
        }
        m += xn;
        cout << endl;
    }
    cout << endl;
}

void zigzag() {
    int xn, yn;
    cout << "xn, yn: ";
    cin >> xn >> yn;
    int j = 1, m = 1;
    for (int i = 1; i <= yn / 2; i++) {
        for (j = 1; j <= xn; j++) {
            cout << setw(3) << m;
            m++;
        }
        cout << endl;
        int l = m+xn;
        for (int k = 1; k <= xn; k++) {
            l--;
            cout << setw(3) << l;
        }
        m += xn;
        cout << endl;
    }
}


int main()
{
    zigzag();
}

