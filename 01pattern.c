#include<stdio.h>
void main()
{
    int i=0,j;
    for(i=2;i<13;i=i+2)
    {
        for(j=2;j<=i;j=j+2)
        {
            printf("01");
        }
        printf("\n");
    }

}
