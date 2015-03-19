#include<stdio.h>
int nov_s (int a, int c,int t){
c = ((a/100)*25);
t = a + c;
printf("%d\n", t);
} 

int main(){
int a,c,t;
scanf("%d", &a);
nov_s(a,c,t);
return 0;}
