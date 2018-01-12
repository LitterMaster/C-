#include <stdio.h>

enum animal
{
    dog, cat, monkey, invalid
};

void dogs(void)
{
    puts("wang wang!!");
}
void cats(void)
{
    puts("miao miao!!");
}
void monkeys(void)
{
    puts("ji ji!!");
}

enum animal select(void)
{
    int tmp;

    do
    {
        printf ("0--dog   1--cat  2--monkey  3--invalid"\n);
        scanf("%d",&tmp); 
    } while (tmp <dog || tmp>invalid);
    return ((enum animal)tmp);
}

int main(void)
{
    enum animal selected;
    do
    {
        switch (selected = select())
        {
        case dog:dogs();
            break;
        case cat:cats();
            break;
        case monkey:monkeys();
            break;          
        }
    } while (selected != invalid);
    
    return 0;
}


