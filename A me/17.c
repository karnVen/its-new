#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int tabel[10];
    for (int i = 0; i < 10; i++)
    {
        tabel[i]= n*(1+i);
    }
    for(int i=0;i<10;i++){
        printf("%dx%d=%d \n",n,1+i,tabel[i]);
    }
    return 0;
}