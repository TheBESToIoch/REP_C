
#include <iostream>

using namespace ::std;

int main()
{
	int num = 0, s = 0;
	cin >> num;
	int* arr = new int[num];
	for (int i = 0; i < num; i++) {
		cin >> arr[i];
		s += arr[i];
	}
	cout << s << endl;
}
