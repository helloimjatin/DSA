#include <stdio.h>
void sort(int A[], int l)
{
      int i=0, j=0, temp;
    for(i; i<=l-1; i++)
    {
        for(j; j<l-1-i; j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    printf("Values after sorting them....\n");
    for(int k=0; k<=l-1; k++)
    {
        printf("%d,",A[k]);
    }
    printf("\nProgram completes....\n"); 
    printf("***************************************************\n");
}
int main()
{
    int l;
    printf("Enter lenght for Array: ");
    scanf("%d",&l);
    int i=0,A[l],a;
    printf("The Array has created with lenght of: %d\n",l);
    printf("***************************************************\n");
    for(i; i<=l-1; i++)
    {
        printf("Enter Value for element %d: ",i+1);
        scanf("%d",&a);
        A[i]=a;
    }
    printf("Following are the values from array....\n");
    for(int j=0; j<=l-1; j++)
    {
        printf("%d,",A[j]);
    }
    printf("\n");
    printf("****************************************************\n");
    sort(A,l);
}