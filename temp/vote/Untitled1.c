#include<stdio.h>
#include<string.h>
int main(){

    char vote[6];
    printf("\n Make your vote : ");
    scanf("%s",&vote);

    switch (vote)
    {

    case (strcmp(vote,"@")==0||strcmp(strupr(vote),"MA3251")==0):
                printf(" you voted to %s","@");
                printf("\n\n");


    }


}
