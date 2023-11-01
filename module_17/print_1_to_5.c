#include <stdio.h>

void recursiveFunc( int i ){
    if (i ==6) return;
    
    printf("%d ",i);
    recursiveFunc( i + 1 );
}

int main(){

    recursiveFunc(1);
}