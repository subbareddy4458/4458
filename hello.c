#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=1;j<n-1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
