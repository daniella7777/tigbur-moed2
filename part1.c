#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>


int check_common_bytes(char* file1, char* file2, int n) {
    int fd1, fd2;
    char *buffer1, *buffer2;
    int size1, size2;

    //Open the files for reading
    //Find the end of the files using lseek
    //Allocate memory to the buffers to hold n bytes
    //Using the bufferes, memcmp, and lseek, find if there are n common bytes and print a proper massage for each case
    
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        fprintf(stderr, "Usage: %s <file1> <file2> <n>\n", argv[0]);
        return EXIT_FAILURE;
    }
    
    int n = atoi(argv[3]);
    if (n <= 0) {
        fprintf(stderr, "Error: n must be a positive integer.\n");
        return EXIT_FAILURE;
    }
    
    return check_common_bytes(argv[1], argv[2], n);
}
