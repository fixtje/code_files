#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n,a,sum=0;
    scanf("%d", &n);
    while(n>0)
    {
        a=n%10;
        n=n/10;
        sum=sum+a;
    }
    printf("%d",sum);



}

