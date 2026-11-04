#include <stdio.h>
enum Result{
    FAIL, PASS ,DISTINCTION
};
enum Result checkResult(int marks) {
    if (marks>=75) 
        return DISTINCTION;
    else if (marks>=40) 
        return PASS;
    else    
        return FAIL;    
}
int main()
{
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    enum Result result = checkResult(marks);
    switch(result) {
        case FAIL:
            printf("Result: FAIL\n");
            break;
        case PASS:
            printf("Result: PASS\n");
            break;
        case DISTINCTION:
            printf("Result: DISTINCTION\n");
            break;
    }
    printf("Numeric Value of Result: %d\n", result);
    return 0;
}