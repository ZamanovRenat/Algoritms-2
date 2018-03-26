#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a;
	int n;
	cout << "¬ведите число : ";
	cin >> a; 
	cout << "¬ведите степень в которую необходимо возвести число : ";
	cin >> n;

	int power(int a, int n);
	{
		if (n == 0)
			return 1;
		int p = power(a, n / 2);
		if (n % 2 == 0)
			return p * p;
		else
			return a * p * p;

	}
	cout << "„исло в степени: " << power << endl;
	system("pause");

}