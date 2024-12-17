#include <stdio.h>
int main()
{
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    if (b > a)
    {
        printf("%d greater than %d\n", b, a);
        printf("greater than %d",(b-a));
    }
    else
    {
        printf("%d greater than %d\n", a, b);
        printf("greater than %d",(a-b));
    }
    return 0;
}