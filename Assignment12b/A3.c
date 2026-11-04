#include <stdio.h>
enum Type{ INT_VALUE, FLOAT_VALUE, CHAR_VALUE };
union Data {
    int i;
    float f;
    char c;
};
struct TaggredUnion{
    enum Type type;
    union Data data;
};
void printValue(struct TaggredUnion tu) {
    switch(tu.type) 
    {
        case INT_VALUE:
            printf("Integer Value: %d\n", tu.data.i);
            break;
        case FLOAT_VALUE:
            printf("Float Value: %.2f\n", tu.data.f);
            break;
        case CHAR_VALUE:
            printf("Character Value: %c\n", tu.data.c);
            break;
        default:
            printf("Unknown Type\n");    
    }
}
int main()
{
    struct TaggredUnion tu;
    printf("Enter the type (0 for int, 1 for float, 2 for char): ");
    scanf("%d", (int*)&tu.type);
    
    switch(tu.type) 
    {
        case INT_VALUE:
            printf("Enter an integer: ");
            scanf("%d", &tu.data.i);
            break;
        case FLOAT_VALUE:
            printf("Enter a float: ");
            scanf("%f", &tu.data.f);
            break;
        case CHAR_VALUE:
            printf("Enter a character: ");
            scanf(" %c", &tu.data.c);
            break;
        default:
            printf("Invalid type!\n");
            return 1;    
    }
    
    printValue(tu);
    return 0;
}