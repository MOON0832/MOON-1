#include <stdio.h>
#include <string.h>

int main(){
	int i,result;
	char s[7][10]={"������", "�̷ο�","������","������","������","������","��ȿ��"};
	char sname[10];

	printf("�л� �̸��� �Է��Ͻÿ�:");
	scanf("%s",sname);

	for(i=0;i<7;i++){
		result = strcmp(s[i],sname);
	if (result==0){
		printf("%s�� �츮�� �л��Դϴ�.",sname);
		break;}

	}

	if(result!=0)
		printf("%s�� �츮�� �л��� �ƴմϴ�.",sname);
	







}