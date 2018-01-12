#include <stdio.h>

#define NUMBER 5

void swap(int *x,int *y)
{
    int tmp=*x;
    *x=*y;
    *y=tmp;
}

void sort(int data[],int n)
{
    int k=n-1;
    while(k>=0)
    {
        int i,j;
        for(i = 1 , j = -1; i <= k; i++)
            if(data[i-1]>data[i])
            {
                j=i-1;
                swap(&data[i],&data[j]);
            }
        k=j;   
        
    }
    

}

int main(void)
{
    int i;
    int height[]={178,175,173,165,179};

    sort(height,NUMBER);

    for( i = 0; i < NUMBER; i++)
    {
        printf("%2d:%4d\n",i+1,height[i]);
    }
    return 0;
    
}
