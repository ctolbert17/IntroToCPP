#include "Student.h"
#include <iostream>
#include <cmath>
using namespace std;
void printStudent(Student student)
{
	cout << "Id: " << student.Id << endl;
	cout << "Course: " << student.course << endl;
	cout << "Exam: " << student.exam << endl;
}

int average(Student num[], int size)
{
	int value;
	for(int i = 0; i < size; i++)
	{
		value =+ num[i];
	}
	return value / size; 
}

int median(Student num[], int size)
{
	int flag = 1;
	Student temp;
	for (int i = 0; i < size - 1 && flag == 1; ++i)
	{
		for (int j = 0; j < size - 1; ++j)
		{
			if (num[j].exam > num[j + 1].exam)
			{
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
				flag = 1;
			}
		}
	}

	int median = 0;
	for(int i = 0; i < size / 2; i++)
	{
		if (i == size / 2 - 1);
		{
			median = num[i].exam;
		}
	}
	return median;

}

//how many students in an array are in a course
