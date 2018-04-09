#include<iostream>
#include<time.h>
#include"Student.h"
#include"CreateStudents.h"
using namespace std;

void main()
{
	int x;
	srand(time(0));
	rand();
	do
	{
		cout << "Что хотите сделать?" << endl;
		cout << "Показать всех учеников" << endl;
		cin >> x;
		switch (x)
		{
		case 1:
			break;
		}
	} while (x>0);
	system("pause");
}