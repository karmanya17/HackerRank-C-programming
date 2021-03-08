#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char a[1000];
    int len;
    scanf("%s",a);
    len=strlen(a);
    for(int i=0;i<10;i++)
    {
        int s=0;
        for(int j=0;j<len;j++)
        {
            if(i==(a[j]-'0'))
            s++;
        }
        printf("%d ",s);
    }

    return 0;
}
