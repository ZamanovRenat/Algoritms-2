#include <iostream>
using namespace std;

int pow(int a, int b)
{
	if (b != 0)
	return a*pow(a, b - 1);
	else return 1;
}
int main()
{
	setlocale(LC_ALL, "rus");
	int a, b;
	cout << "¬ведите число : ";
	cin >> a;
	cout << "¬ведите степень в которую возвести число : ";
	cin >> b;
	cout << "ќтвет: "<< pow(a, b) << endl;


	system("pause");
	return 0;
}
