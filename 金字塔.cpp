#include <stdio.h>

void put_nchar(int ch, int no)
{
    while(no-- > 0)
    {
        putchar(ch);
    }
}

int main(void)
{
    int i , In;

    printf("the cengshu:");
    scanf("%d",&In);

    for(int i = 1; i <= In; i++)
    {       
        put_nchar(' ',In - 1);
        put_nchar('*',i);
        putchar('\n');
    }
    
    return 0;
}
