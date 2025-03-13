#include <stdio.h> 
#include <stdlib.h>

#define m(a,b) printf(a,b)

int g;

int calc() { 
    void *s;  
    int* p = (int*)&s;
    return *p; 
} 

int main(){
    int b = calc();
    int* h = (int*)malloc(sizeof(int));

    //Compile with -m32
   m("What returns from the function: %d\n", b); // Why?

    //What is the defference between &h and h?
    m("hi %d\n", 3 );
    m("The address of stack veriable: %p\n", &h);
    m("The address of heap veriable: %p\n", h);
    m("The address of global veriable: %p\n", &g);

    free(h);
    return 0;

}