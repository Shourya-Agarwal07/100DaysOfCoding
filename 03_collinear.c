#include <stdio.h>

int main()
{
    int x1, x2, x3, y1, y2, y3, area;
    printf("Enter first coordinate:");
    scanf("%d %d", &x1, &y1);
    printf("Enter Second coordinate:");
    scanf("%d %d", &x2, &y2);
    printf("Enter third coordinate:");
    scanf("%d %d", &x3, &y3);
    area = 0.5 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
    printf("Area of triangle is %d\n", area);
    if (area == 0)
    {
        printf("Points are collinear");
    }
    else
    {
        printf("Points are non collinear");
    }

    return 0;
}
