#include<stdio.h>
double conversion = 7.331378299120235;
double convertWeight(double weightBarel){
    return weightBarel/conversion;
}
int main(){
    double weightBarel;
    scanf("%lf", &weightBarel);
    printf("%.2lf", convertWeight(weightBarel));
    return 0;
}