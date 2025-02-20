#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, x3, y3, a, b, c, s, area;

    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    printf("Enter coordinates of third point (x3 y3): ");
    scanf("%lf %lf", &x3, &y3);

    a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

    s = (a + b + c) / 2.0;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Triangle area: %.2f\n", area);

    return 0;
}
