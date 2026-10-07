#include <stdio.h>
#include <string.h>
void display(char R[], int R_Top, char S[], int Top)
{
    if(R_Top<0)
    {
        printf("Stack is empty, no elements to display...\n");
        printf("********************************************\n");
    }
    else
    {
        for(int i=0; i<=R_Top; i++)
        {
            printf("%c", R[R_Top]);
            R_Top--;
        }
        printf("X");
        for(int k=0; k<=Top; k++)
        {
            printf("%c", S[R_Top-1]);
        }
        printf("\n********************************************\n");
        printf("Program is complete...\n");
    }
}
int main()
{
    printf("********************************************\n");
    printf("Welcome to Stack Program\n");
    int Top=-1, choice, n, a, i=0, R_Top=-1;
    printf("How may characters you want to enter: ");
    scanf("%d", &n);
    char S[n], R[n];
    for(int j=0; j<n; j++)
    {
        printf("Enter Your Character No. %d: ",j+1);
        scanf(" %c", &S[j]);
        Top=Top+1;
    }
    while(Top>=0)
    {
        R[i]=S[Top];
        Top--;
        i++;
        R_Top=R_Top+1;
    }
    display(R, R_Top, S, Top);

}