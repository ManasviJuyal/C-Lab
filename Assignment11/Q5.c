#include <stdio.h>
int getuniqueid()
{
    static int id=1000;
    id++;
    return id;
}
int main()
{
    printf("Unique ID: %d\n",getuniqueid());
    printf("Unique ID: %d\n",getuniqueid());
    printf("Unique ID: %d\n",getuniqueid());
    return 0;
}