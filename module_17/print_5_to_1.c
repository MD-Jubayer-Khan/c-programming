#include <stdio.h>

void recursiveFunc( int i ){
    if ( i == 0 ) return;
    
    printf("%d ",i);
    recursiveFunc( i - 1 );
}

int main(){

    recursiveFunc(5);
}