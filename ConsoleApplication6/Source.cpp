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
		cout << "��� ������ �������?" << endl;
		cout << "�������� ���� ��������" << endl;
		cin >> x;
		switch (x)
		{
		case 1:
			break;
		}
	} while (x>0);
	system("pause");
}