// 冒泡排序法
// write by lv  2018年1月3日 11:36:17
//
//
#include <stdio.h>

int main( )
{
    
    int i,j;
    int a[10];
    int temp;

    printf("请输入数组：");

    for(int i = 0; i < 10; i++)
    {
        scanf("%d\n",&a[i]);
    }

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 9-i; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }         
        }   
    }
    
    for(int i = 0; i < 10; i++)
    {
        printf("%d\t",a[i]);
    }
    
    return 0;
}

