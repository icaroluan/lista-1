#include<stdio.h>
float nota (float a,float b, float c, float t){
t = ((a*2) + (b*3) + (c*5))/10;
if ((8 <= t) &&  ( t <= 10)){
	printf("%.2f A\n", t);}
else if ((7 <= t) &&  ( t <= 8)){
	printf("%.2f B\n", t);}
else if ((6 <= t) &&  ( t <= 7)){
	printf("%.2f C\n", t);}
else if	((5 <= t) &&  ( t <= 6)){
	printf("%.2f D\n", t);}
else if ((0 <= t) &&  ( t <= 5)){
	printf("%.2f E\n", t);}	
}

int main(){
float a,b,c,t;
scanf("%f%f%f", &a, &b, &c);
nota(a,b,c,t);
return 0;}
