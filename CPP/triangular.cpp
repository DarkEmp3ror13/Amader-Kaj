#include <stdio.h>
#include <conio.h>
#include <limits.h>
int main()
{
    float max=0, n, bnn=INT_MIN;
    while(1){
        printf("Enter an integer:");
        if(scanf("%f", &n)!=1){
            break;
        }
        if (n>max)
            max=n;
        else if(n>=bnn)
             bnn=n;
    }
    printf("The maximum number of the entered ones is:%0.2f\n", max);
    printf("The biggest negative number is:%0.2f", bnn);
    getch();
}
