#include <stdio.h>
 
void towers(int, char, char, char);
 
int main()
{
    int num;
 
    printf("Enter the number of disks : ");
    scanf("%d", &num);
    printf("The sequence of moves involved in the Tower of Hanoi are :\n");
    towers(num, 'A', 'C', 'B');
    return 0;
}
void towers(int num, char a, char b, char c)
{
    if (num == 1)
    {
        printf("\n Move disk 1 from tower %c to tower %c", a, b);
        return;
    } 
    towers(num - 1, a, c, b);
    printf("\n Move disk %d from tower %c to tower %c", num, a, b);
    towers(num - 1, c, b, a);
}
