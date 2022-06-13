#include<stdio.h>
#include<stdlib.h>

void main()

{

    long long int amount,h,f,tw,t,b,th,fv;
    th=amount/1000;
    fv=(amount%1000)/500;
    h=((amount%1000)%500)/100;
    f=(((amount%1000)%500)%100)/50;
    tw=((((amount%1000)%500)%100)%50)/20;
    t=(((((amount%1000)%500)%100)%50)%20)/10;
    b=(((((amount%1000)%500)%100)%50)%20)%10;

    do
    {
        printf("\n\tEnter Your Rupees:$");
        scanf("%d",&amount);

        printf("\n\tThousand     : %lld*1000",th);
        printf("\n\tFiveHundred  : %lld*500",fv);
        printf("\n\tHundred      : %lld*100",h);
        printf("\n\tFifty        : %lld*50",f);
        printf("\n\tTwenty       : %lld*20",tw);
        printf("\n\tTens         : %lld*10",t);
        printf("\n\tBalance      : %lld",b);
        printf("\n\t\n\tThank You Come Again");
        printf("\n");
        printf("\n------------------------------------");
        printf("\n------------------------------------");


        printf("\n************************************");
        printf("\n\tFUCK YOU BITCH ! ");
        printf("\n************************************");
        printf("\n------------------------------------");
        printf("\n------------------------------------");
        printf("\n\n\n\n\n\n\n");
    }
    while(1);


}
