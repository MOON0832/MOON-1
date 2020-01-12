#include <stdio.h>
#include <string.h>

int main(){
int i,j;
char s[7][10];
printf("학생 7명의 이름을 입력하시오:\n");

for(i=0;i<7;i++){
printf("학생[%d]=\n",i);
scanf("%s",s[i]);

}

for(j=0;j<7;j++){
printf("%s",s[j]);
}




}


