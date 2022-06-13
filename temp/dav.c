#include<stdio.h>

int main(){
        int a,b,sum=0;
        printf("enter : ");
        scanf("%d,",&a);
        int asci[1000];
        for(int i=1;i<a+10;i++){
        asci[i]=i;}
        for (int i=0;i<a+1;i++){
            if(a%asci[i]==0){
                sum=sum+1;
            }

        }
        if(sum>2){
            printf("\nit is composite number ");
        }
        else{
            printf("\nit is prime number");
        }
}
