#include <stdio.h>

#define NUMBER 5

void swap(int *x,int *y)
{
    int tmp=*x;
    *x=*y;
    *y=tmp;
}
//bubbule sort
// void sort(int data[],int n)
// {
//     int k=n-1;
//     while(k>=0)
//     {
//         int i,j;
//         for(i = 1 , j = -1; i <= k; i++)
//             if(data[i-1]>data[i])
//             {
//                 j=i-1;
//                 swap(&data[i],&data[j]);
//             }
//         k=j;   
        
//     }
    

// }

void insertion(int a[],int n)
{
    int i, j;
    for(i = 1;i < n;i++ )   
    {
        int tmp = a[i];
        for(j = 1; j >0 && a[j-1]>tmp; j--)
        {
            a[j] = a[j-1];
        }
        a[j]=tmp;
        
    }
    
}

int main(void)
{
    int i;
    int height[]={178,175,173,165,179};

    // sort(height,NUMBER);
    insertion(height,NUMBER);

    for( i = 0; i < NUMBER; i++)
    {
        printf("%2d:%4d\n",i+1,height[i]);
    }
    return 0;
    
}
