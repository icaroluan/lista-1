#include<stdio.h> 

int data_c(int di, int m, int a, int dp, int mp, int ap){
	if ( a > ap){
		printf("primeira data\n");}
	else if(ap > a){
		printf("segunda data\n");}
	else if ((a == ap) && (m > mp)){
		printf("primeiro data\n");}
	else if ((a == ap) && (mp > m)){
		printf("segunda data\n");}
	else if ((a == ap) && (m == mp) && ( di > dp)){
		printf("primeira data\n");}
	else if ((a == ap) && (m == mp) && ( dp > di)){
		printf("segunda data\n");}				
}

int main(){
	int di, m, a, dp, mp, ap;
	printf("data 1\n");
	scanf("%d%d%d", &di, &m, &a);
	printf("data 2\n");
	scanf("%d%d%d", &dp, &mp, &ap);
    data_c(di, m, a, dp,mp, ap);
    return 0;
}

