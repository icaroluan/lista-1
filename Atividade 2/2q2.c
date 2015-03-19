#include<stdio.h>
float nota (float a,float b, float c, float t){
t = (a + b + c)/3;
if ((0 <= t) &&  ( t <= 3)){
	printf("%.2f Reprovado\n", t);}
else if ((3 <= t) &&  ( t <= 8)){
	printf("%.2f Exame\n", t);}
else if ((7 <= t) &&  ( t <= 10)){
	printf("%.2f Aprovado\n", t);}
}

int main(){
float a,b,c,t;
scanf("%f%f%f", &a, &b, &c);
nota(a,b,c,t);
return 0;}
