#include <stdio.h>

int main(){
int n1, n2;
int n;
int i;

printf("양의 정수 2개 입력:");
scanf("%d%d", &n1, &n2);


n=(n1<n2)?n1:n2;

for(i=n;i>0;i--){
    if(n1%i==0&&n2%i==0)
        break;
}

printf("%d와 %d의 최대공약수 = %d", n1, n2,i);


}
