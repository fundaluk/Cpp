#include <iostream>
using namespace std;
//na wskaünikach
int max_ptr(int* tab, int tab_size)
{
	int temp = *(tab);

	for (int i = 0; i < tab_size; i++)
	{
		if (temp < *(tab + i))
		{

			temp = *(tab + i);
		}

	}

	return temp;
}

int max(int tab[], int tab_size)
{
	int temp = tab[0];

	for (int i = 0; i < tab_size; i++)
	{
		if (temp < tab[i])
		{

			temp = tab[i];
		}

	}

	return temp;
}

int main()
{
	int const size = 8;
	int tab[size] = { 6,2,5,6,8,1,0,6, };

	cout << max_ptr(tab, size)<<endl;

	return 0;
}