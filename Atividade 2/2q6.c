#include<stdio.h>
int primo (int a){
if (a%2 == 0){
	printf("par\n");}
else{
	printf("impar\n");}
}

int main(){
int a;
scanf("%d", &a);
primo(a);
return 0;}
