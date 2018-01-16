//
//  交换排序法.cpp
//  C++P1
//
//  Created by lv on 2018/1/3.
//  Copyright © 2018年 lv. All rights reserved.
//
//  交换排序法
//

#include <stdio.h>

int main()
{
    int i,j;
    int a[10];
    int temp;
    
    printf("请输入数组：");
    
    //为数组赋值
    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    
    //从小到大排序
    for (i=0; i<9; i++) {
        
        for (j=i+1; j<10; j++) {
            
            if (a[i]>a[j]) {
                
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                
            }
            
        }
        
    }
    
    //打印排序
    for(int i = 0; i < 10; i++)
    {
        printf("%d\t",a[i]);
    }
    
    return 0;
    
    
}
