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
	cout << "������� ����� : ";
	cin >> a;
	cout << "������� ������� � ������� �������� ����� : ";
	cin >> b;
	cout << "�����: "<< pow(a, b) << endl;


	system("pause");
	return 0;
}
