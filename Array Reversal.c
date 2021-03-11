#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    int p1=0,p2=num-1,temp;
    for(i=0;i<(num)/2;i++)
    {   temp=arr[p1];
        arr[p1]=arr[p2];
        arr[p2]=temp;
        p1++;
        p2--;
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
