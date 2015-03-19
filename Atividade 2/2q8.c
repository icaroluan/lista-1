#include<stdio.h>
int menu (int a, int b, int c, int t){
if (a == 1){
	scanf("%d%d", &b, &c);
	t = b + c;
	printf("%d", t);
}
else if (a == 2){
	scanf("%d%d", &b, &c);
	t = b - c;
	printf("%d", t);
}
else if (a == 3){
	scanf("%d%d", &b, &c);
	t = b * c;
	printf("%d", t);
}
else if (a == 4){
	scanf("%d%d", &b, &c);
	t = b/c;
	printf("%d", t);
}
else if (a == 5){
	scanf("%d", &b);
	t = sqrt(b);
	printf("%d", t);
}
	
}

int main(){
int a, b, c, t;
	printf("1-Somar de dois numeros\n");
	printf("2-Sutrair dois numeros\n");
	printf("3-Multiplicaçao de dois numeros \n");
	printf("4-Dividir dois numeros\n");
	printf("5-raiz quadrada de um numero\n");
	printf("Digite a opçao desejada\n");
scanf("%d", &a);
menu(a, b, c, t);
return 0;}
