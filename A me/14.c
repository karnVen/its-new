#include <stdio.h>
float f(int m,float g){
    return m*g;
}

int main(){
    int m=5.0;
    float g =9.8;
    printf("f is %f", f);
    
    return 0;
}