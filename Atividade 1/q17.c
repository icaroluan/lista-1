#include<stdio.h>
float nov_ba (float a,float b, float t, float ts){
t = a + 50;
b =((a/100)*10);
ts = t - b; 
printf("%.2f\n", ts);
} 

int main(){
float a,b,t,ts;
scanf("%f", &a);
nov_ba(a,b,t,ts);
return 0;}
