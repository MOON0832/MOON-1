#include <stdio.h>

int main(){
int n1, n2;
int n;
int i;

printf("���� ���� 2�� �Է�:");
scanf("%d%d", &n1, &n2);


n=(n1<n2)?n1:n2;

for(i=n;i>0;i--){
    if(n1%i==0&&n2%i==0)
        break;
}

printf("%d�� %d�� �ִ����� = %d", n1, n2,i);


}
