#include <iostream>
using namespace std;

int main()

{
	setlocale(LC_ALL, "Russian");
	int a = 3;
	int b = 20;
	int n = 0; //  количество программ

	if (n%2 != 0)
	{
		n = (b - a) / 1; //так как су­ще­ству­ет един­ствен­ный спо­соб по­лу­че­ния при­бав­ле­ни­ем единиц.
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