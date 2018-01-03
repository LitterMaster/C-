#include <stdio.h>

#define NUMBER  5

int max_of(int vc[],int no)
{
    int i;
    int max=vc[0];
    for(int i = 1; i < no; i++)
    {
        if(vc[i] > max)
        {
            max = vc[i];
        }
        
    }
    return (max);   
}

int main(void)
{
    int i;
    int mat[NUMBER];
    int eng[NUMBER];
    int max_e , max_m;

    for(int i = 0; i < NUMBER; i++)
    {
        printf("[%d]english point:",i+1);
        scanf("%d",&eng[i]);
        printf("match point:");
        scanf("%d",&mat[i]);
    }
    max_e = max_of(eng,NUMBER);
    max_m = max_of(mat,NUMBER);

    printf("the english max is:%d\n",max_e);
    printf("the match max is:%d\n",max_m);

    return 0;
}

