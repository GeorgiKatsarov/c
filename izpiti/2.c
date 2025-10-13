#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Picture{
    int code;
    char painterName[31];
    char title[31];
    float price;
} Picture;

int zadacha1(){
    int n;
    scanf("%d", &n);
    if (n<30&&n>3){
        Picture *pictures = calloc(n, sizeof(Picture));
        if (pictures==NULL)
        {
            printf("Nz brat, preeba se");
            return 1;
        }
        for (int i = 0; i < n; i++)
        {
            int code;
            char painterName[31];
            char title[31];
            float price;
            scanf("%d %s %s %f", &code, &painterName, &title, &price);
            Picture p1 = {code, painterName, title, price};
            pictures[i] = p1;
        }
        return 0;
        
    }
}
float zadacha2(Picture *pictures, int n, float price){
    float sum = 0.00;
    int count = 0;
    float avg=0;
    for (int i = 0; i<n; i++){
        if (pictures[i].price > price)
        {
            sum+=pictures[i].price;
            count++;
        }
        
    }
    if (count>0)
    {
        avg = sum/count;
    }
    
    return avg ;
}
int zadacha3(Picture *pictures, int n, char letter){
  int num = 0;
  FILE *fp = fopen("info.txt", "w");
  if (fp==NULL)
  {
    printf("Failed to open file");
    exit(1);
  }
  for (int i = 0; i<n; i++)
    {
        char firstLetterName = pictures[i].painterName[0];
        if (firstLetterName==letter)
        {
            fprintf(fp, "%d;%s;%.2fleva\n", pictures[i].code, pictures[i].title, pictures[i].price);
            num++;
        }
         
    }
    return num;
}
void zadacha4(char *artistName){
    FILE *file = fopen("picture.bin", "rb");
    if (file==NULL)
    {
        printf("Nz brat, preeba se.\n");
        exit(1);
    }
    Picture pic;
    int found = 0;
    while (fread(&pic, sizeof(Picture), 1, file)){
        if (strcmp(pic.painterName,artistName)==0)
        {
            printf("Title %s\n", pic.title);
            printf("Price %.f \n", pic.price);
            found = 1;
        }
        
    }
    if (!found){
        printf("Ne stana brat sori");
    }
    fclose(file);
}
int main(){
    printf("Gello world");
};

