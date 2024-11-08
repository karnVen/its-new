 #include <stdio.h>
 
 int main(){
    int product =1 ; 
    int a;
    scanf("%d",a);
    for (int i = 1; i <= a; i++ )
    {
        product *=i;
    }
    
    
    printf("%d",product);
    
    return 0;
 }