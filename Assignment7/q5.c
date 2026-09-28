#include <stdio.h>
int main()
{
    int l,sl,s,ss,n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }    
    l=sl=ss=s=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>l){
            sl=l;
            l=arr[i];
        }
        else if (arr[i]>sl && arr[i] !=l){
            sl=arr[i];
        }
        if(arr[i]<s){
            ss=s;
            s=arr[i];
        }
        else if (arr[i]<ss && arr[i] !=s){
            sl=arr[i];
        }
    }
    printf("The largest number is: %d\n", l);
    printf("The second largest number is: %d\n", sl);
    printf("The smallest number is: %d\n", s);
    printf("The second samllest number is: %d\n", ss);
    return 0;
}