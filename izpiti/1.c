#include<stdio.h>
#include<stdlib.h>

typedef  struct Course {
    char name[51];
    char startDate[11];
    int numberLec;
    float price;
} Course;
int main(){
    FILE *f = fopen("courses.bin", "rb");
    if (f == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    int n;
    fread(&n, sizeof(int), 1, f);
    Course *courses = malloc(n * sizeof(Course));
    fread(courses, sizeof(Course), n, f);
    fclose(f);
    return 0;
}
void promotion(Course *courses, int n){
    if(n< sizeof(courses)/sizeof(Course)){
        courses[n].price *= 0.9;
        printf("%.2f lv - %s - %s", courses[n].price, courses[n].name, courses[n].startDate);
    }
    else{
        printf("Inxex outside of range");
    }
}
int oferta(Course *courses, int n, float minPrice, float maxPrice){
    int num = 0;
    FILE *f = fopen("offer.txt", "w");
    if (f == NULL){
        printf("Couldent open file");
        return 0;
    }
    for (int i = 0; i<n; i++){
        float price = courses[i].price;
        if (price<maxPrice && price>minPrice)
        {
            num++;
            fprintf(f, "%s \n %s \n %d lekcii \n %f lv", courses[i].name, courses[i].startDate, courses[i].numberLec, price);
        }
        
    }
    fclose(f);
    return num;
}
Course* delete(Course *courses, int n, char name[51], char date[11]){
    for (int i = 0; i < n; i++)
    {
        if (strcmp(courses[i].name, name)==0 && strcmp(courses[i].startDate, date)==0)
        {
            for (int j = i; j < n-1; j++){
                courses[j]=courses[j+1];
            }
            n--;
            Course *new = realloc(courses, n*sizeof(Course));
            return new;
        }
        
    }
    
}
