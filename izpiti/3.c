#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Product{
    char name[21];
    int code;
    char expiration[11];
    float price;
}Product;

int main(){
    int n = 0;
    scanf("%d", &n);
    if (n<10 || n >30){
        exit(1);
    }
    Product *products = malloc(n*sizeof(Product));
    if(products == NULL){
        exit(1);
    }
    for (int i = 0; i<n; i++){
        char name[21];
        int code;
        char expiration[11];
        float price;
        scanf("%s", name);
        scanf("%d", code);
        scanf("%s", expiration);
        scanf("%.2f", price);
        Product p1 = {name, code, expiration, price};
        products[i] = p1;
    }
    return 0;
}
float avrg_by_price(Product *products, int n, float price){
    int count = 0;
    float sum = 0.00;
    for (int i = 0; i<n ; i++){
        if (products[i].price<price){
            sum+=products[i].price;
            count++;
        }
    }
    if (count == 0)
    {
        return 0;
    }
    return sum/count;
}

int write_text_file(Product *products, int n, char date[11], float price){
    FILE *f = fopen("products.txt", "w");
    int count = 0;
    for (int i = 0; i<n; i++){
    if(strcmp(products[i].expiration,date)<0 && products[i].price<price){
        fprintf(f,"saofdnsefs\n");
        count++;
    }
    }
    return count;
}
int print_info(char name[21], int code){
    FILE *f = fopen("product.bin", "r");
    if (f==NULL){
        pritnf("Eba mu se mamata");
    }
    do{
        int n = 0;
        fread(&n, sizeof(int), 1, f);
        char *name1 = malloc(n+1);
        fread(&name1, n+1, 1, f);
        int code1;
        fread(&code1, sizeof(int), 1, f);
        char expDate[11];
        fread(&expDate, 11, 1, f);
        float price;
        freat(&price, sizeof(float), 1, f);
        if (code1==code && strcmp(name,name1)==1)
        {
            printf("Otkrihme go");
        }
        
    }while(EOF);
}