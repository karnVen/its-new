#include <stdio.h>

int main(){
    char ch1= 'a', ch2='i', ch3= 'o', ch4= 'u',ch5= 'e';
    printf("enter the letter:");
    if (ch1=='a'||ch2=='i'||ch3=='o'||ch4=='u'||ch5=='e')
    {
        printf("its a vowel");
    scanf("%c",&ch1,&ch2,&ch3,&ch4,&ch5);

    }
    else
    {
        printf(" its a consonant");
    }
    
    return 0;
}