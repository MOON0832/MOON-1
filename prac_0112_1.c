#include <stdio.h>

//����ڰ� ���� ������ �Է��ϸ� �� ���� prime number���� �Ǻ��Ͽ� ����� ����ϴ� ���α׷�


int main(){


int i,n;
int flag=0;

printf("���� �Է�:\n");
scanf("%d",&n);

for(i=2;i<n;i++){
        if(n%i==0)
        flag = 1;
}

if(flag==1)printf("�� ���ڴ� �Ҽ��� �ƴմϴ�.");
else printf("�� ���ڴ� �Ҽ��Դϴ�.");





}
