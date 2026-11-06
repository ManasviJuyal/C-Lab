#include <stdio.h>
struct Permission {
    unsigned int read : 1;
    unsigned int write : 1;
    unsigned int execute : 1;
    unsigned int admin : 1;
};
int main() {
    struct Permission p;
    int r, w, x, a;
    printf("Enter Read permission (0 or 1): ");
    scanf("%d", &r);
    printf("Enter Write permission (0 or 1): ");
    scanf("%d", &w);
    printf("Enter Execute permission (0 or 1): ");
    scanf("%d", &x);
    printf("Enter Admin permission (0 or 1): ");
    scanf("%d", &a);
    if ((r < 0 || r > 1) ||
        (w < 0 || w > 1) ||
        (x < 0 || x > 1) ||
        (a < 0 || a > 1)) {
        printf("Invalid input!\n");
        return 0;
    }
    p.read = r;
    p.write = w;
    p.execute = x;
    p.admin = a;
    printf("\nPermissions: ");
    printf("%c", p.read ? 'r' : '-');
    printf("%c", p.write ? 'w' : '-');
    printf("%c", p.execute ? 'x' : '-');
    printf("%c\n", p.admin ? 'A' : '-');
    return 0;
}