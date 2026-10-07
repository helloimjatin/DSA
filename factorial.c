#include <stdio.h>
int factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }

}
int main()
{
    int n,result;
    printf("Enter any number to find its factorial: ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("For negative numbers factorial doesn't exist dumb...");
    }
    else
    {
        result=factorial(n);
        printf("Factorial for %d is: %d",n,result);
    }
}