#include <stdio.h>

int main() {
    double bgn, usd, eur, gbp;
    
    printf("Въведете сума в лева: ");
    scanf("%lf", &bgn);
    
    usd = bgn * 0.55;
    eur = bgn * 0.51;
    gbp = bgn * 0.44;
    
    printf("%.2f BGN = %.2f USD\n", bgn, usd);
    printf("%.2f BGN = %.2f EUR\n", bgn, eur);
    printf("%.2f BGN = %.2f GBP\n", bgn, gbp);
    
    return 0;
}
