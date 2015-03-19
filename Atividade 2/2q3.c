#include<stdio.h>
int nota (int a,int b){
if (a > b){
	printf("%d\n", a);}
else{
	printf("%d\n", b);}
}

int main(){
int a,b;
scanf("%d%d", &a, &b);
nota(a,b);
return 0;}
