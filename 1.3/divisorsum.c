#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    
    int i,n,sum = 0;
    printf("Enter an integer: ");
    scanf("%d",&n);

    for (i=1;i<n;i++)
    {
        if (n%i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == n)
    {
        printf("The sum of the divisors of %d is %d.  Hooray!\n", n, sum);
    }
    else
    {
        printf("The sum of the divisors of %d is %d.  Sorry, try again.\n",n, sum);
    }

    return 0;
}

