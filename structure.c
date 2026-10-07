#include <stdio.h>
int main()
{
    int i=1;
    struct student
    {
        int enroll;
        char name[50];
        char depart[20];
    };
    int l;
    printf("How many students do you have? ");
    scanf("%d",&l);
    printf("*********************************************\n");
    struct student s[i];
    for(i; i<=l; i++) 
    {
        printf("Enter Enrollment for student %d: ",i);
        scanf("%d",&s[i].enroll);
        printf("Enter Name for stuednt %d: ",i);
        scanf("%s",&s[i].name);
        printf("Enter Department for student %d: ",i);
        scanf("%s",&s[i].depart);
        printf("*****************************************************\n");
    }
    printf("\nHere are the details for students...\n");
    printf("***********************************************\n");
    for(int i=1; i<=l; i++)
    {
        printf("Name of %d Student: %s\n",i,s[i].name);
        printf("Enrollment No. of %d Student: %d\n",i,s[i].enroll);
        printf("Department for %d Student: %s\n",i,s[i].depart);
        printf("*****************************************************\n");
    }
    printf("Programs completes...");
}