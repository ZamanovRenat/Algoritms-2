#include <iostream>
using namespace std;

int main()

{
	setlocale(LC_ALL, "Russian");
	int a = 3;
	int b = 20;
	int n = 0; //  ���������� ��������

	if (n%2 != 0)
	{
		n = (b - a) / 1; //��� ��� ���������� ������������ ������ ��������� ������������ ������.
	}

	else
	{
		while ((b-a)>n)
		{
			n = n*2 + n+1;
		}
	}
	cout << n << endl;
	system("PAUSE");
	return 0;
}