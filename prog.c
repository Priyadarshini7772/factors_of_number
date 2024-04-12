#include<stdio.h>
int main(){
    int n,i,fact[50];
    printf("Enter a Number: ");
    scanf("%d",&n);
    for (i=1;i*i<=n;i++){  //Eliminates most of looping
        if (n%i==0){
            printf("%d\n",i);
            if (i!=n/i){
                printf("%d\n",n/i);
            }
        }
    }
}