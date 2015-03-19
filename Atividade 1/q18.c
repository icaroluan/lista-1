#include<stdio.h>
int t_b (int a,int b, int t){
t = (a * b)/2;	
printf("%d\n", t);
} 

int main(){
int a,b,t;
scanf("%d%d", &a, &b);
t_b(a,b,t);
return 0;}
