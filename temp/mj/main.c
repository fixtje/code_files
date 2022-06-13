#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);

    char ch[100][100] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    if(b>=a)
    {
        for (int i=a; i<=b; i++)
        {

            if(i>=1&&i<=9)
            {
                printf("%s\n",ch[i]);
            }
            else if(i>9)
            {
                if(i%2==0)
                {
                    printf("even\n");
                }
                else
                {
                    printf("odd\n");
                }
            }

        }

    }
    else if (b<=a)
    {
        for (int i=a; i>=b; i--)
        {

            if(i>=1&&i<=9)
            {
                printf("%s\n",ch[i]);

            }
            else if(i>9)
            {
                if(i%2==0)
                {
                    printf("even\n");
                }
                else
                {
                    printf("odd\n");
                }
            }

        }


    }


}
