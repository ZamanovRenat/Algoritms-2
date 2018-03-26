#include <iostream>
using namespace std;

int main()
{
	for (int i = 3, a[20]; i <= 20; ++i)
	{
		i++;
		i*2;
		cout << (a[i] = i) << endl;
		std::cout << sizeof(a) / sizeof(*a) << std::endl;

	}

	system("PAUSE");
	return 0;
}