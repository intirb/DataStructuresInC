#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int x,y,z;
    printf("Enter a whole number: ");
    scanf("%d",&x);
    printf("Enter another one: ");
    scanf("%d",&y);
    printf("Enter one more: ");
    scanf("%d",&z);

    if (x<y)
    {
        if (x<z)
        {
            printf("Your sorted numbers are %d, %d, and %d.\n", x, (y<z)?y:z, (y<z)?z:y);
        }
        else
        {
            printf("Your sorted numbers are %d, %d, and %d.\n", z, x, y);
        }
    }
    else
    {
        if (y<z)
        {
            printf("Your sorted numbers are %d, %d, and %d.\n", y, (x<z)?x:z, (x<z)?z:x);
        }
        else
        {
            printf("Your sorted numbers are %d, %d, and %d.\n", z, y, x);
        }
    }


    return 0;
}

