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
    scanf("%s", s1.name);
    scanf("%d", &s1.yearFounded);
    scanf("%d", &s1.numberOfStudents);
    for (int i = 0; i < s1.numberOfStudents; i++)
    {
        scanf("%s", s1.students[i].name);
        scanf("%d", &s1.students[i].age);
        scanf("%d", &s1.students[i].class);
        scanf("%lf", &s1.students[i].grade);
    }
    
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