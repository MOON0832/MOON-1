#include <stdio.h>

//사용자가 양의 정수를 입력하면 그 수가 prime number인지 판별하여 결과를 출력하는 프로그램


int main(){


int i,n;
int flag=0;

printf("숫자 입력:\n");
scanf("%d",&n);

for(i=2;i<n;i++){
        if(n%i==0)
        flag = 1;
}

if(flag==1)printf("그 숫자는 소수가 아닙니다.");
else printf("그 숫자는 소수입니다.");





}
