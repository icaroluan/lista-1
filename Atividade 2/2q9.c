#include<stdio.h> 
#include<stdlib.h> 
#include<locale.h>

int data(){
int d, m, a, ih;	
float min,h; 
scanf("%d",&d); 
system("cls"); 
scanf("%d",&m); 
system("cls"); 
scanf("%d",&a); 
system("cls"); 
scanf("%f",&h); 
system("cls");
printf("%d/%d/%d.\n", d, m, a);

switch(m) { 											
    case 1: 
    printf("janeiro.\n"); 
    break;
    case 2: 
    printf("fevereiro.\n"); 
    break;
    case 3: 
    printf("março.\n"); 
    break;
    case 4: 
    printf("abril.\n"); 
    break;
    case 5: 
    printf("maio.\n"); 
    break;
    case 6: 
    printf("junho.\n"); 
    break;
    case 7: 
    printf("julho.\n"); 
    break;
    case 8: 
    printf("agosto.\n"); 
    break;
    case 9: 
    printf("setembro.\n"); 
    break;
    case 10: 
    printf("outubro.\n"); 
    break;
    case 11: 
    printf("novembro.\n"); 
    break;
    case 12: 
    printf("dezembro.\n"); 
    break;
    default: 
    printf("O mes informado nao confere.\n");

}
ih=(int)h; 
m=(h-ih)*100;
printf("O horário informado é %.2d:%.0f.\n", ih, m);

system("pause"); 
}
int main(){
data();
return 0;}

