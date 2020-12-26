#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

#define N 8

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int arr[N]{};

	for (int i = 0; i < N; i++)
	{
		arr[i] = 0;
		cout << arr[i] << endl;
	}
	_getch();
	system("cls");

			for (int i = 0; i < N; i++)
			{
				arr[i] = rand() % 100;
				  cout << arr[i] << endl;
			}

	


}