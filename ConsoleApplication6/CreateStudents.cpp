#include<iostream>
#include<time.h>
#include "Student.h"


void generateDate(Age * age)
{
	age->dd = 1 + rand() % 21;
	age->mm = 1 + rand() % 12;
	age->yy = 1950 + rand() % 50;
}

void generateName(char *name)
{
	for (int i = 0; i < 15; i++)
		name[i] = 97 + rand() % 25;
}

void generateSubj(Subjects *subj)
{
	for (int i = 0; i < 10; i++)
      	subj->name[i] = 97 + rand() % 25;

    subj->bal = rand() % 1 + rand() % 5;
}

gender genGender()
{
	return (gender)(0 + rand() + 2);
}

//Student * generateStudents(int * count)
//{
//	*count = 1 + rand() % 63;
//	Student * std = new Student[*count];
//
//
//	return std;
//}
void createStudent(Student*Student)
{
	generateName(Student->name);
	generateName(Student->sname);
	generateName(Student->lname);
	Student->gender=genGender();
	Student->age=generateDate();
	


}


