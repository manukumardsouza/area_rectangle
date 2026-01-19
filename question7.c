#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter side of triangle: ");
    scanf("%d %d", &a, &b);
    int area=a*b;
    printf("Area is: %d", area);
    return 0;
}