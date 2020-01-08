/*#include <stdio.h>

int main(){

	int a,b,i,j;
	int rb,cb;

	printf("블록의 크기:");
	scanf("%d", &a);

	printf("블록의 개수:");
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
	int rb, cb;  // 행블록, 열블록 번호

	printf("블록의 크기: ");
	scanf("%d", &bSize);
	printf("블록의 개수: ");
	scanf("%d", &bCount);

	n = bSize * bCount;  // 전체 크기

	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			rb = i / bSize;  // 행 블록 번호
			cb = j / bSize;  // 열 블록 번호
			if ((rb + cb) % 2 == 0)
				printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}