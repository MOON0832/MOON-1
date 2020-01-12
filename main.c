#include <stdio.h>
#include <string.h>

int main(){
	int i,result;
	char s[7][10]={"김정민", "이로운","정문정","지현숙","최지민","윤가영","주효정"};
	char sname[10];

	printf("학생 이름을 입력하시오:");
	scanf("%s",sname);

	for(i=0;i<7;i++){
		result = strcmp(s[i],sname);
	if (result==0){
		printf("%s는 우리반 학생입니다.",sname);
		break;}

	}

	if(result!=0)
		printf("%s는 우리반 학생이 아닙니다.",sname);
	







}