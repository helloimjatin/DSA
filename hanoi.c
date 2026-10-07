#include <stdio.h>
void towerOfHanoi(int n, char source, char target, char auxiliary) 
{
    if (n == 1) 
    {
        printf("Move disk 1 from %c to %c\n", source, target);
        return;
    }
    towerOfHanoi(n - 1, source, auxiliary, target);
    printf("Move disk %d from %c to %c\n", n, source, target);
    towerOfHanoi(n - 1, auxiliary, target, source);
}

int main() 
{
    int disks;
    printf("Enter the number of disks: ");
    scanf("%d", &disks);
    if(disks <= 0) 
    {
        printf("Number of disks must be a positive integer dumb....\n");
    }
    else 
    {
        printf("The sequence of moves involved in the Tower of Hanoi are:\n");
        towerOfHanoi(disks, 'A', 'C', 'B');
    }
}