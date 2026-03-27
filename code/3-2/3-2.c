#include <stdio.h>

void swap_endian(int *x) {
    unsigned char *addr = (unsigned char *)x;
    unsigned char temp;

    temp = addr[0];
    addr[0] = addr[3];
    addr[3] = temp;

    temp = addr[1];
    addr[1] = addr[2];
    addr[2] = temp;
    
    
}

int main() {
    int x = 0x12345678;

    printf("%x\n" ,x);
    swap_endian(&x);
    printf("%x\n" ,x);
    
    return 0;
}