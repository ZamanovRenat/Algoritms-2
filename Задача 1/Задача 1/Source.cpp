#include <iostream>
#include <string>

using namespace std;
void Bin(int x, string &cc)
{
	if (x > 0)
	{
		if (x % 2 == 0)
		{
			x = x / 2;
			Bin(x, cc);
			cc += '0';
		}
		else {
			x = x / 2;
			Bin(x, cc);
			cc += '1';
		}
	}
}
void main()
{
	setlocale(LC_ALL, "rus");
	int b;
	string c;
	cout << "Введите число : ";
	cin >> b;
	Bin(b, c);
	cout << "Число в двоичной системе: " << c << endl;
	system("pause");

}