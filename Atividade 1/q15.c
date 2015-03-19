#include<stdio.h>
int nov_ps (int a,int b, int c,int t){
c = ((a/100)*b);
t = a + c;
printf("%d\n", t);
} 

int main(){
int a,b,c,t;
scanf("%d%d", &a, &b);
nov_ps(a,b,c,t);
return 0;}
