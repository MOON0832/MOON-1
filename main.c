/*#include <stdio.h>

int main(){

	int a,b,i,j;
	int rb,cb;

	printf("����� ũ��:");
	scanf("%d", &a);

	printf("����� ����:");
	scanf("%d",&b);

	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
		if((rb+cb)%2==0){
			printf("*");}
		else{
			printf(" ");}}


	}








}*/

#include <stdio.h>
int main(void) {
	int i, j, n, bSize, bCount;
	int rb, cb;  // ����, ����� ��ȣ

	printf("����� ũ��: ");
	scanf("%d", &bSize);
	printf("����� ����: ");
	scanf("%d", &bCount);

	n = bSize * bCount;  // ��ü ũ��

	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			rb = i / bSize;  // �� ��� ��ȣ
			cb = j / bSize;  // �� ��� ��ȣ
			if ((rb + cb) % 2 == 0)
				printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}