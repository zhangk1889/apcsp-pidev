#include <stdio.h>
#include <string.h>

struct Student {
  char fname[50];
  char lname[50];
  int age;
  int id;
};

int enterStudent (struct Student* student)
{
	char first[50], last[50];
	char studentAge[50], studentId[50];
	int yearsOld;
	int studentNumber;

while (1)
{
	printf("First name?\n");
	fgets(first, 50, stdin);
	if (sscanf(first, "%s", student->fname) == 1) break;
		printf("Choose a better name.\n");
}

while (1)
{
	printf("Last name?\n");
	fgets(last, 50, stdin);
	if (sscanf(last, "%s", student->lname) == 1) break;
		printf("Choose a better surname.\n");
}

while (1)
{
	printf("Age?\n");
	fgets(studentAge, 50, stdin);
	if (sscanf(studentAge, "%d", &yearsOld) == 1) break;
		printf("Inappropriate age.\n");
}
student->age = yearsOld;

while (1)
{
	printf("Id?\n");
	fgets(studentId, 50, stdin);
	if (sscanf(studentId, "%d", &studentNumber) == 1) break;
		printf("Inappropriate Id number.\n");
}
student->id = studentNumber;
}

int printStudent (struct Student* student)
{
	printf("First name: %s\nLast name: %s\nAge: %d\nId: %d\n\n", student->fname, student->lname, student->age, student->id);
}

int main ()
{
	char cont[50];
	int i = 0;
	int n = 0;

	struct Student myStudent[25];
	do {
enterStudent(&myStudent[i]);
} while (i < 25 && (cont[0] == 'Y'));

printf("\n");

	printStudent(&myStudent[n]);
}
