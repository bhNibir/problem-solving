#include <stdio.h>
#include <math.h>

int main() {
    
    int array_size ;
    scanf("%d", &array_size);
    
    long long int array[array_size]={};
    unsigned long long int result ;
    
    int i = 1;
    int j = 1;
    
    
    for(i; i<=array_size; i++){
        scanf("%lld", &array[i]);
    }
   

    for(j; j<=array_size; j++){
        
        result = pow(array[j]+1,2) + 1;
        
        if(j == array_size ){
             printf("%llu", result);
        } 
        else {
            printf("%llu\n", result);
        }
    }

    return 0;
}