#include <stdio.h>
#include <math.h>

int main() {
    double degrees, radians;
    
    printf("Въведете ъгъл в градуси: ");
    scanf("%lf", &degrees);
    
    radians = degrees * (3.14159265358979323846 / 180.0);
    
    printf("cos(%.2f) = %.6f\n", degrees, cos(radians));
    printf("sin(%.2f) = %.6f\n", degrees, sin(radians));
    printf("tg(%.2f) = ", degrees);
    if (cos(radians) != 0)
        printf("%.6f\n", tan(radians));
    else
        printf("не е определен\n");
    
    printf("cotg(%.2f) = ", degrees);
    if (sin(radians) != 0)
        printf("%.6f\n", 1 / tan(radians));
    else
        printf("не е определен\n");
    
    return 0;
}
