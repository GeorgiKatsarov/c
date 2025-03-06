int OddOrEven(int a){
    if (a%2==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main(){
    int a;
    scanf("%d", &a);
    if (OddOrEven(a))
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    
    return 0;
}