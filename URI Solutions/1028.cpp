#include <stdio.h>

int mdc(int x, int y)
{
    int s = 0;
    while(y%x != 0)
            {
                s = x;
                x = y%x;
                y = s;
            }
    return x;
}

int main()
{

    int n, x, y, aux;

    scanf("%d",&n);

    for(int i = 0; i < n; i++){
            scanf("%d",&x);
            scanf("%d",&y);

            if(x > y){
                aux = x;
                x = y;
                y = aux;
            }

            printf("%d\n", mdc(x,y));
    }

    return 0;
}
