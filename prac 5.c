#include <stdio.h>

int main(){

char c='A';
int i,j;
for(i=0;i<=10;i++){
    for(j=0;j<=7;j++){
        if(j%2==0){
            printf("%C",c+i);

        }
        else{
            printf("%d",j);
        }
    }
    printf("\n");
}





}
