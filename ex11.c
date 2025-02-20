#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, width, height, area;

    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    width = fabs(x2 - x1);
    height = fabs(y2 - y1);
    area = width * height;

    printf("Rectangle area: %.2f\n", area);

    return 0;
}
