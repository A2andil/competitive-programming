#include <stdio.h>
#include <string.h>
#include<cmath>
int main()
{
    int a, b, c, x, y;

    scanf("%d", &a);

    while(a!=0)
    {
        scanf("%d %d", &b, &c);
        y=a*b*100/c;
        x=sqrt(y);
        printf("%d\n", x);
        scanf("%d", &a);
    }


    return 0;
}
