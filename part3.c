#include <stdio.h>
#include <stdarg.h>

// Variadic function to calculate the sum of integers
long sum(int count, ...) {
    va_list args; // The argument list
    long total = 0;
    
    va_start(args, count); // Initialize the argument list after the first argument
    for (int i = 0; i < count; i++) {
        total += va_arg(args, long); // Retrieve the next argument, as a long type
    }
    va_end(args); // Clean up the argument list
    
    return total;
}

// Make a recursive version of the function sum



int main() {
    //Run with -m32
    //printf("Sum: %ld\n", sum(2, 1LL, 7L));
    return 0;
}
