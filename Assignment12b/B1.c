#include <stdio.h>
struct Flags {
    unsigned int isOn : 1;
    unsigned int isReady : 1;
};
int main() 
{
    struct Flags f;
    int a, b;
    printf("Enter isOn (0 or 1): ");
    scanf("%d", &a);
    printf("Enter isReady (0 or 1): ");
    scanf("%d", &b);
    if ((a != 0 && a != 1) || (b != 0 && b != 1)) 
    {
        printf("Invalid input! Enter only 0 or 1.\n");
        return 0;
    }
    f.isOn = a;
    f.isReady = b;
    printf("\nDevice Flags:\n");
    printf("isOn = %u\n", f.isOn);
    printf("isReady = %u\n", f.isReady);
    return 0;
}