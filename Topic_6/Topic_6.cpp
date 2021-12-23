
#include <iostream>

using namespace ::std;




void six_simbol() {
    for (int i = 0; i < 6; i++) {
        cout << "#" << endl;
    }
}

void ABCD() {
    int n = 0;
    cout << "n: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "ABCD" << endl;
    }
}

void string_plus_minus() {
    int n = 0;
    cout << "n: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "-+";
    }
    cout << endl;
}

void string_simbol() {
    int n = 0;
    cout << "n: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "-=#=";
    }
    cout << "-";
    cout << endl;
}

void single_slash() {
    int n = 0;
    cout << "n: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "\\";
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << " ";
    }
    for (int i = 0; i < n; i++) {
        cout << "\\";
    }
    cout << endl;
}

void double_slash() {
    int n = 0;
    cout << "n: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << " ";
    }
    for (int i = 0; i < n; i++) {
        cout << "/";
    }
    for (int i = 0; i < n; i++) {
        cout << "\\";
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << "/";
    }
    for (int i = 0; i < n*2; i++) {
        cout << " ";
    }
    for (int i = 0; i < n; i++) {
        cout << "\\";
    }
    cout << endl;
}

void horizontal_rectangle() {
    int n = 0;
    cout << "n: ";
    cin >> n;
    cout << " ";
    for (int i = 0; i < n - 1; i++) {
         cout << "_ ";
    }
    cout << "_";
    cout << endl;
    cout << "|";
    for (int i = 0; i < n - 1; i++) {
         cout << "_ ";
    }
    cout << "_";
    cout << "|";
    cout << endl;
}

void plus_minus_plus() {
    int n = 0;
    cout << "n: ";
    cin >> n;
    cout << "+ ";
    for (int i = 0; i < n; i++) {
        cout << "- ";
    }
    cout << "+" << endl;
    for (int i = 0; i < n; i++) {
        cout << "|" << endl;
    }
    cout << "+" << endl;
}

void three_rectangle() {
    int n = 0;
    cout << "n: ";
    cin >> n;
    cout << " _  _  _" << endl;
    for (int i = 0; i < n-1; i++) {
        cout << "| || || |" << endl;
    }
    cout << "|_||_||_|" << endl;
}

void two_battery() {
    int n = 0;
    cout << "n: ";
    cin >> n;
    cout << " _  _" << endl;
    cout << "| || |" << endl;
    cout << "|+||-|" << endl;
    for (int i = 0; i < n - 4; i++) {
        cout << "| || |" << endl;
    }
    cout << "|-||+|" << endl;
    cout << "|_||_|" << endl;
}

void hills() {
    int a = 0, b = 0;
    cout << "a,b: ";
    cin >> a >> b;
    for (int i = 0; i < a*2; i++) {
        cout << " ";
    }
    for (int i = 0; i < b; i++) {
        cout << "||   ";
    }
    cout << endl;
    for (int i = 0; i < a-1; i++) {
        cout << "_ ";
    }
    for (int i = 0; i < b; i++) {
        cout << "_/  \\";
    }
    for (int i = 0; i < a; i++) {
        cout << "_ ";
    }
    cout << endl;
}

int main()
{
    hills();
}