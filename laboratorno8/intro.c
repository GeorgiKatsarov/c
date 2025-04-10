//dnes shte uchim structuri

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct myStruct{
    char name[100];
    int age;
    int height;
};
int main() {
    struct myStruct s1;
    s1.age = 12;
    s1.height = 178;
    strcpy(s1.name, "Ivan Andreev");

    struct myStruct s2 = {"Krasimir Georgiev", 12,179};
    struct myStruct listOfStructs[2];
    listOfStructs[0] = s1;
    listOfStructs[1] = s2;
    for (int i = 0; i < 2; i++)
    {
        printf("Name: %s, Age: %d, Height: %d \n", listOfStructs[i].name, listOfStructs[i].age, listOfStructs[i].height);
    }
    
}