#include <stdio.h>

int main(){
    int val  = 53;
    int *ptr = &val;
    int a[5] = {10, 20, 30, 40, 50};
    int idx = 2;

    printf("Immediate Addressing mode: %d\n", 100);
    printf("Direct Addressing mode: %d\n", val);
    printf("Indirect addressing: %d\n", *ptr);
    int reg = val;
    printf("Register addressing: %d\n", reg);
    printf("Indexed addressing: %d\n", a[idx]);
    printf("Base + Offset Addressing: %d\n", *(a + 3));
    return 0;
}