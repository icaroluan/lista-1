#include<stdio.h>
int cel (int a, int b){
b =(5*(a-32)/9);
printf("%d\n", b);
} 

int main(){
int a, b;
scanf("%d", &a);
cel(a,b);
return 0;}
