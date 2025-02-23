#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	unsigned int start_time = clock();
	
	setlocale(LC_ALL, "rus");
    	int S = 0;
	int n = 20;
	int f = 1;
	int a = 20;
	int lenght = 0;
	
	
	

	for (int i = 1; i <= n; i++)
	{
		f *= i;
	}
	cout << "Факториал " << n << " = " << f << endl;
	
	

	for (int i = 0; i <= a; i++)
	{
		
		if (i % 2 == 0)
		{
			continue;
		}
		else
		{
			int f2 = 1;
			for (int j = 1; j <= i; j++)
			{
				
				f2 *= j;
			}
			S += f2;
		}
	}
	cout << S << endl;
	unsigned int end_time = clock();
	unsigned int search_time = end_time - start_time;
	cout << search_time;
}


