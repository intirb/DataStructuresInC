#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countcommas(char *input);
double * findcoeffs(char *input);
void showpolynomial(double *coeff, int n);
double evaluatepoly(double *coeff, int n, double x0);

int main()
{
    char input[100];
    printf("Please enter coefficients for a polynomial: ");
    scanf("%s",input);
    int n = countcommas(input);
    double * coeff;
    coeff = findcoeffs(input);
    showpolynomial(coeff,n);
    double x0;
    printf("Please enter your x value: ");
    scanf("%lf",&x0);
    double xval = evaluatepoly(coeff, n, x0); 
    printf("Your result is %f.\n", xval);
    return 0;
}

int countcommas(char *input)
{
    int l = strlen(input);
    int i, k = 0;
    for (i=0;i<l;i++)
    {
        if (input[i] == ',')
        {
            k++;
        }
    }
    if (input[l-1] != ',')
    {
        k++;
    }
    return k;
}

double * findcoeffs(char *input)
{
    int l = strlen(input);
    char tmp[20];
    static double co[100];
    int i, j, k = 0;
    for (i=0;i<l;i++)
    {
        if(input[i] == ',')
        {
            co[j] = atof(tmp);
            tmp[0] = '\0';
            j++;
            k = 0;
        }
        else
        {
            tmp[k] = input[i];
            k++;
        }
    }
    if (input[l-1] != ',')
    {
        co[j] = atof(tmp);
    }
    return co;
}

void showpolynomial(double *coeff, int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("%f",coeff[i]);
        if (i < n-1)
        {
            printf(" * x^%d + ", n-1-i);
        }
    }
    printf(".\n");
}

double evaluatepoly(double *coeff, int n, double x0)
{
    double result = 0;
    int i;
    for (i=0;i<n;i++)
    {
        result = result + coeff[i];
        if (i < n-1)
        {
            result = result * x0;
        }
    }
    return result;
}

