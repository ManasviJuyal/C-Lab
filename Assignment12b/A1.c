#include <stdio.h>
enum Day { Monday=1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };
int main() {
    enum Day today;
    printf("Enter a number for the day of the week: ");
    scanf("%d", &today);
    
    switch(today) {
        case Monday:
            printf("Today is Monday.\n");
            break;
        case Tuesday:
            printf("Today is Tuesday.\n");
            break;
        case Wednesday:
            printf("Today is Wednesday.\n");
            break;
        case Thursday:
            printf("Today is Thursday.\n");
            break;
        case Friday:
            printf("Today is Friday.\n");
            break;
        case Saturday:
            printf("Today is Saturday.\n");
            break;
        case Sunday:
            printf("Today is Sunday.\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }
    return 0;
}