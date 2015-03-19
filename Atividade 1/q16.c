#include<stdio.h>
float nov_b (float a,float b, float c, float t, float ts){
c = ((a/100)*5);
t = a + c;
b =((t/100)*7);
ts = t - b; 
printf("%.2f\n", ts);
} 

int main(){
float a,b,c,t,ts;
scanf("%f", &a);
nov_b(a,b,c,t,ts);
return 0;}
