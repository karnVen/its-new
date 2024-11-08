#include <stdio.h>
int main(){
int age=22;
int pAge=&age;
printf("%p\n",&age);
printf("%p \n",pAge);
    
    return 0;
}