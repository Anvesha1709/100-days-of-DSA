#include <stdio.h>
#include <stdlib.h>
int main() {
    int n = 5 ;
    int a ;
    int*p = (int*)malloc( n , sizeof(int));
    printf("enter  %d elements of an array" , a );

    for ( int i = 0; i < n ; i ++){
        scanf("%d" , &p[i]);
    }
    printf("elements of array are"):
    for ( int i = 0; i < n ; i ++){
        
    
    printf("%d", p[i]);
    }
}
