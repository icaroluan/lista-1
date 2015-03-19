#include<stdio.h>
int med_p (int a, int b, int c,int d,int e, int f, int t){
t =((a*b)+(c*d)+(e*f))/3;
printf("%d\n", t);
} 

int main(){
int a, b, c, d, e, f, t;
scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
med_p(a,b,c,d,e,f,t);
return 0;}
