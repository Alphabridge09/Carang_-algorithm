#include <stdio.h>
#include <math.h>

int fact(a,b)
{
    int sum[30][30];

    if(sum[a][b] > 0)
    {
        return sum[a][b];
    }

    return sum[a][b] = fact(a-1,b-1) + fact(a-1,b);
}

int main(void)
{
    int east,west;
    int num;

    scanf("%d",&num);

    for(int i=0;i<num;i++)
    {
        scanf("%d %d",&east,&west);
        printf("%d",fact(east,west));
    }


    return 0;
}