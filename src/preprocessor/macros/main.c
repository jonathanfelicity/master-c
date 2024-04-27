#include <stdio.h>

// simple macro
#define MAX_LINE 1000

// macro with parameters
#define SUM(a,b) (a+b)


int main(void){
    printf("Maxline is %d\n", MAX_LINE);

    #ifdef SUMX
    printf("Sum is %d\n", SUM(1,2));
    #endif

    return 0;
}