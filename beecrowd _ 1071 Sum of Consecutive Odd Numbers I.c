#include<stdio.h>
int main()
{
    int a,i,b,max,min,sum=0;
    scanf("%d%d", &a,&b);

    for (i=(b+1); i<a; ++i)
    {
        if (i%2 !=0 )
        {
            sum+=i;
        }
    }
    printf("%d\n", sum);

    return 0;
}
