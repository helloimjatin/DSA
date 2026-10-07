#include <stdio.h>
void max(int A[], int l)
{
    int m=0;
    for(int i=0; i<=l-1; i++)
    {
        if(m<A[i])
            m=A[i];
        else
            m;
    }
    printf("The Maximum Value is: %d",m);
    printf("\n Program is complete....\n");
}

int main()
{
    int l;
    printf("Enter lenght for Araay: ");
    scanf("%d",&l);
    int A[l], a;
    printf("The Array has been created with lenght of: %d\n",l);
    printf("**************************************************************\n");
    for(int i=0; i<=l-1; i++)
    {
        printf("Enter value for element %d: ",i+1);
        scanf("%d",&a);
        A[i]=a;
    }
    printf("**************************************************************\n");
    printf("Following are the values from array...\n");
    for(int j=0; j<=l-1; j++)
    {
        printf("%d,",A[j]);
    }
    printf("\n");
    printf("**************************************************************\n");
    max(A,l);
}