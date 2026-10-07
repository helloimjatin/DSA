#include <stdio.h>
int push(int n, int S[], int Top, int l)
{
    if(Top>=l-1)
        {
            printf("Stack is Full...\n");
            printf("********************************************\n");
        }
    else
    {
        printf("Enter  your number to add: ");
        scanf("%d",&n);
        Top=Top+1;
        S[Top]=n;
        printf("Addition is complete\n");
        printf("********************************************\n");
    }
    return Top;
    

}
int Pop(int n, int S[], int Top)
{
    int d;
    if(Top<0)
    {
        printf("Stack is empty...\n");
        printf("********************************************\n");
    }
    else
    {
        d=(S[Top]);
        Top=Top-1;
        printf("Your Deleted element is: %d", d);
        printf("\n********************************************\n");
    }
    return Top;
}
int display(int S[], int Top, int l)
{
    int Temp[l], Temp_Top=-1, a=Top;
    if(Top<0)
    {
        printf("Stack is empty, no elements to display...\n");
        printf("********************************************\n");
    }
    else
    {
        printf("Here are elements from stack.....\n");
        for(int i=0; i<=a; i++)
        {
            Temp_Top++;
            Temp[Temp_Top]=S[Top];
            printf("%d,",S[Top]);
            Top--;
        }
        for(int j=0; j<=a; j++)
        {
            Top++;
            S[Top]=Temp[Temp_Top];
            Temp_Top--;
        }
        printf("\n********************************************\n");
        return Top;
    }
}
void alter(int value, int postision, int S[], int Top, int l)
{
    int d=Top-postision;
    if(postision>Top)
    {
        printf("Top(position) is too high try with lower values...\n");
    }
    else
    {
        int Temp[l], Temp_top=-1;
        for(int i=0; i<d; i++)
        {
            Temp_top++;
            Temp[Temp_top]=S[Top];
            Top--;
        }
        S[Top]=value;
        for(int i=0; i<d; i++)
        {
            Top++;
            S[Top]=Temp[Temp_top];
            Temp_top--;
        }
        printf("Altering Complete......\n");
    }
    printf("**************************************************\n");

}
int main()
{
    int l;
    printf("********************************************\n");
    printf("Welcome to Stack Program\n");
    printf("Enter lenght for stack: ");
    scanf("%d",&l);
    printf("The stack has been created with the length of: %d\n",l);
    printf("********************************************\n");
    int Top=-1, S[l], Temp[l], choice, n, a, value, position;
    while(1)
    {
        printf("1. Push\n");
        printf("2. POP\n");
        printf("3. Display\n");
        printf("4. Peep(Peek)\n");
        printf("5. Alter\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        printf("********************************************\n");

        if(choice==1)
            Top=push(n, S, Top, l);
        else if(choice==2)
            Top=Pop(n, S, Top);
        else if(choice==3)
            Top=display(S, Top, l);
        else if(choice==4)
        {   if(Top<=-1)
            printf("Stack is empty means the Top value is 0....\n");
            else
            {
            printf("Current top value: %d\n",Top);
            printf("Element at current top value: %d\n",S[Top]);
            printf("******************************************\n");
            }
        }
        else if (choice==5)
        {
            printf("Enter value for altering: ");
            scanf("%d",&value);
            printf("At which position you want to change this value %d? ---> ",value);
            scanf("%d",&position);
            alter(value, position, S, Top, l);   
        }
        else if(choice==6)
        {
            printf("Exiting the program...\n");
            printf("********************************************\n");
            break;
        }
        else
        {
            printf("Plz.... Enter Valid Number\n");
            printf("********************************************\n");
        }
    }
}