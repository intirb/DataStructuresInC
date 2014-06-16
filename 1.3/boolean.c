#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    printf("Pick a reasonably small integer: ");
    int n;
    scanf("%d",&n);
    int N = (int) pow(2, (double) n);
    printf("There are %d total combinations of %d boolean values.\n",N,n);
    int i,j,k;
    for (i=0;i<N;i++)
    {
        printf("\n(%d): ",i+1);
        for (j=0;j<n;j++)
        {
            k = (i & ( 1 << (n-1-j))) >> (n-1-j);
            if (k == 1)
            {
                printf("TRUE");
            }
            else
            {
                printf("FALSE");
            }
            if (j < n-1)
            {
                printf(", ");
            }
        }
    }
    printf("\n");
    
    return 0;
}
