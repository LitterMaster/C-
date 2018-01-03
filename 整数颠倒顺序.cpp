#include <stdio.h>

int scan_unit(void)
{
    int tmp;

    do
    {
        printf("plese set a +number:");
        scanf("%d",&tmp);
        if(tmp<0)
        {
            printf("don t set a -number!");
        }
        
    } while (tmp<0);
    return(tmp);
    
}

int rev_int(int num)
{
    int tmp = 0;

    if(num>0)
    {
        do
        {
            tmp=tmp*10+num%10;
            num/=10;
        } while (num>0);
        
    }
    return tmp;
    
}

int main(void)
{
    int nx = scan_unit();

    printf("the number is :%d\n",rev_int(nx));

    return 0;
}