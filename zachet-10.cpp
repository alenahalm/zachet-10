#include <iostream>

using namespace std;

int main()
{
	char a[4] = { 'A','B','C','D' };
	int n;
	cout << "Enter a number" << endl;
	cin >> n;
	while (n < 1) {
		cout << "Wrong input" << endl;
		cin >> n;
	}
	int sum = 0;
	int counter = 0;
	while (n > 0) {
		sum += (n % 4) * (pow(10, counter));
		counter++;
		n /= 4;
	}
	n = sum;
	string str = "";
	while (sum > 0) {
		if (sum % 10 != 0) {
			str += a[sum % 10 - 1];
		}
		else {
			sum -= 10;
			str += "D";
		}
		sum /= 10;
	}
	for (int i = str.length() - 1; i >= 0; i--) {
		cout << str[i];
	}
	system("pause");
}