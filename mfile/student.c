#include <stdio.h>

struct Student {
  char fname[100];
  char lname[100];
  int age;
  int id;
};

  void printstudents(struct Student student)
{
  printf("The name of this student is %s %s and their age is %d. Their student ID is %d", student.fname, student.lname, student.age, student.id);
}

  void studentMain(int argc, char* argv[])
{
 char input[100];
 struct Student student1;

 if (argc < 4) {

    printf("Please enter your first name");

    fgets(input, 100, stdin);

    sscanf(input, "%s", student1.fname);

    printf("Please enter your last name");

    fgets(input, 100, stdin);

    sscanf(input, "%s", student1.lname);

    printf("Please enter your age");

    fgets(input, 100, stdin);

    sscanf(input, "%d", &student1.age);

    printf("Please enter your student ID");

    fgets(input, 100, stdin);

    sscanf(input, "%d", &student1.id);
}
  else {
    sscanf(argv[1], "%s", student1.fname);

    sscanf(argv[2], "%s", student1.lname);

    sscanf(argv[3], "%d", &student1.age);

    sscanf(argv[4], "%d", &student1.id);

}
printstudents(student1);

}
