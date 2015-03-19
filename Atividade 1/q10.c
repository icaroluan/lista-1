#include<stdio.h>
int sal (int a, int b, int c){
c = a*b;
printf("%d\n", c);
} 


int main(){
int a, b, c;
scanf("%d%d", &a, &b);
sal(a,b,c);
return 0;}
