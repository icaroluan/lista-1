#include<stdio.h>
int ord(){
float A, B, C;
int I;
scanf("%f%f%f", &A, &B, &C);
scanf("%d", &I);
switch(I){
	
	case 1:
	 if ((A > B) && (A > C) && (B > C)){
	   printf("%d%d%d", C, B ,A);}
	 else if((A > B) && (A > C) & (C >B)){
	   printf("%d%d%d", B, C, A);}
	 else if((B > A) && (B > C) && (A > C)){
	   printf("%d%d%d",C, A, B);}
	 else if ((B > A) && (B > C) && (C > A)){
	   printf("%d%d%d",A , C, B);}
	 else if ((C > A) && (C > B) && (A > B)){
	   printf("%d%d%d",B, A, C);}
	 else if((C > A) && (C > B) && (B > A)){
	   printf("%d%d%d",A , B, C);}
	break;

    case 2:
	 if ((A > B) && (A > C) && (B > C)){
	   printf("%d%d%d",A, B, C);}
	 else if((A > B) && (A > C) & (C >B)){
	   printf("%d%d%d",A, C, B);}
	 else if((B > A) && (B > C) && (A > C)){
	   printf("%d%d%d",B, A, C);}
	 else if((B > A) && (B > C) && (C > A)){
	   printf("%d%d%d",B , C, A);}
	 else if((C > A) && (C > B) && (A > B)){
	   printf("%d%d%d",C, A, B);}
	 else if((C > A) && (C > B) && (B > A)){
	   printf("%d%d%d",C, B, A);}                  
    break;
    case 3:
	 if ((A > B) && (A > C) && (B > C)){
	   printf("%d%d%d",B, A, C);}
	 else if((A > B) && (A > C) & (C >B)){
	   printf("%d%d%d",C, A, B);}
	 else if((B > A) && (B > C) && (A > C)){
	   printf("%d%d%d",A, B, C);}
	 else if((B > A) && (B > C) && (C > A)){
	   printf("%d%d%d",C, B, A);}
	 else if((C > A) && (C > B) && (A > B)){
	   printf("%d%d%d",A, C, B);}
	 else if((C > A) && (C > B) && (B > A)){
	   printf("%d%d%d",A, C, A);}
    break;
}
}


int main(){
ord();
return 0;}


