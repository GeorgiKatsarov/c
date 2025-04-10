#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct students{
    char name[100];
    int age;
    int class;
    double grade;
} Student;
typedef struct school{
    char name[100];
    int yearFounded;
    int numberOfStudents;
    Student students[100];
} School;
int main(){
    School s1;
    strcpy(s1.name, "Mathematical High School");
    s1.yearFounded = 1990;
    s1.numberOfStudents = 2;
    strcpy(s1.students[0].name, "Ivan Andreev");
    s1.students[0].age = 17;
    s1.students[0].class = 12;
    s1.students[0].grade = 5.50;
    
    strcpy(s1.students[1].name, "Krasimir Georgiev");
    s1.students[1].age = 18;
    s1.students[1].class = 12;
    s1.students[1].grade = 6.00;
    
    printf("School name: %s\n", s1.name);
    printf("Year founded: %d\n", s1.yearFounded);
    printf("Number of students: %d\n", s1.numberOfStudents);
    
    for (int i = 0; i < s1.numberOfStudents; i++)
    {
        printf("Student name: %s, Age: %d, Class: %d, Grade: %.2f\n", s1.students[i].name, s1.students[i].age, s1.students[i].class, s1.students[i].grade);
    }
    printf("Average grade: %.2f\n", (s1.students[0].grade + s1.students[1].grade) / s1.numberOfStudents);
    
    return 0;
}