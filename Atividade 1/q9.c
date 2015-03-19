#include<stdio.h>
int qua (int a, int b, int c){
b = a * a;
c = 2 * b;
printf("%d\n", c);
} 

int main(){
int a, b, c;
scanf("%d", &a);
qua(a,b,c);
return (0);}
