#include<stdio.h>
int med (int a, int b, int c, int t){
t = (a+b+c)/3;
printf("%d\n", t);
} 

int main(){
int a, b, c, t;
scanf("%d%d%d", &a, &b, &c);
med(a,b,c,t);
return 0;}
