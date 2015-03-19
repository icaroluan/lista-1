#include<stdio.h>
int dec(int a, int b, int c, int d){
	
if ( d > c){
  printf("%d%d%d%d", d, c, b, a);}
else if((d > b) && (d < c)){
  printf("%d%d%d%d",c, d, b, a);}	
else if((d > a) && (d < b)){
  printf("%d%d%d%d",c, b, d, a);}
else if(d < a){
  printf("%d%d%d%d",c, b, a, d);}}
	
int main(){
int a, b, c, d;
scanf("%d%d%d", &a, &b, &c);
scanf("%d", &d);	
dec(a,b,c,d);
return 0;
}
