#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct point{
    int x;
    int y;
} Point;
typedef struct triangle{
    Point p1;
    Point p2;
    Point p3;
} Triangle;


int main(){
    Point p1, p2, p3;
    p1.x = 5;
    p1.y = 10;
    p2.x = 15;
    p2.y = 20;
    p3.x = 25;
    p3.y = 30;

    printf("Point 1: (%d, %d)\n", p1.x, p1.y);
    printf("Point 2: (%d, %d)\n", p2.x, p2.y);
    printf("Point 3: (%d, %d)\n", p3.x, p3.y);
    Triangle t1;
    t1.p1 = p1;
    t1.p2 = p2;
    t1.p3 = p3;
    printf("Triangle vertices:\n");
    printf("Vertex 1: (%d, %d)\n", t1.p1.x, t1.p1.y);
    printf("Vertex 2: (%d, %d)\n", t1.p2.x, t1.p2.y);
    printf("Vertex 3: (%d, %d)\n", t1.p3.x, t1.p3.y);
    printf("Triangle area: %f\n", 0.5 * abs((t1.p1.x * (t1.p2.y - t1.p3.y) + t1.p2.x * (t1.p3.y - t1.p1.y) + t1.p3.x * (t1.p1.y - t1.p2.y))));
    printf("Triangle perimeter: %f\n", sqrt(pow(t1.p1.x - t1.p2.x, 2) + pow(t1.p1.y - t1.p2.y, 2)) + sqrt(pow(t1.p2.x - t1.p3.x, 2) + pow(t1.p2.y - t1.p3.y, 2)) + sqrt(pow(t1.p3.x - t1.p1.x, 2) + pow(t1.p3.y - t1.p1.y, 2)));
    return 0;
}