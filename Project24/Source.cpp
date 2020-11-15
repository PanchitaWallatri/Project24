#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int grade(int mid, int final)
{
	int grade;
	if (mid >= 0 && final >= 0)
	{
		if (mid + final >= 80)
		{
			grade = 4;
		}
		else if (mid + final >= 75)
		{
			grade = 3.5;
		}
		else  if (mid + final >= 70)
		{
			grade = 3;
		}
		else if (mid + final >= 65)
		{
			grade = 2.5;
		}
		else  if (mid + final >= 60)
		{
			grade = 2;
		}
		else if (mid + final >= 55)
		{
			grade = 1.5;
		}
		else if (mid + final >= 50)
		{
			grade = 1;
		}
		else (grade = 0);

	}
	else { grade = 5; }

	return grade;
}
int main()
{
	struct stdInfo
	{
		char name[100];
		int scoreMidterm;
		int scoreFinal;
	}std1, std2;

	int std1grade, std2grade;

	printf("Student1 Name: ");
	scanf("%s", &std1.name);
	printf("\nStudent1 Midterm score: ");
	scanf("%d", &std1.scoreMidterm);
	printf("\nStudent1 Final score: ");
	scanf("%d", &std1.scoreFinal);


	printf("\n\nStudent 2 Name: ");
	scanf("%s", &std2.name);
	printf("\nStudent2 Midterm score: ");
	scanf("%d", &std2.scoreMidterm);
	printf("\nStudent2 Final score: ");
	scanf("%d", &std2.scoreFinal);

	std1grade = grade(std1.scoreMidterm, std1.scoreFinal);
	std2grade = grade(std2.scoreMidterm, std2.scoreFinal);

	if (std1grade == 5 || std2grade == 5)
	{
		printf("ERROR!");
	}
	else
	{
		printf("\n Student1\n Name: %s\n Grade = %d ",  std1.name, std1grade);
		printf("\n\n Student2\n Name: %s\n Grade = %d ",  std2.name, std2grade);
	}
}