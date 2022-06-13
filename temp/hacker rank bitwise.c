#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k)
{
    int a[10]={1,2,3,4,5},b;
        for (int i=1;i<=5;i++){
            for (int j=i+1;j<=n;j++){
                printf("\ni:%d",a[i]);
                printf("\tj:%d",j);

        }
    }
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}

