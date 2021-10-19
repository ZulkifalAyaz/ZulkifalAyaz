#include<stdio.h>

int main()
{
    int a, b, c;
    c=0;

    printf("Enter the number you want the multiplicative table of: \a");
    scanf("%d", &a);

    printf("\nUpto How many numbers you want the table of %d: \a",a);
    scanf("%d",&b);

    for (c;c<=b;c++)
    {
        printf("\n%d x %d = %d", a, c, a*c);
    }

    return 0 ;
    
}
