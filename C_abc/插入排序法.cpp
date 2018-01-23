//
//  插入排序法.cpp
//  C_abc
//
//  Created by lv on 2018/01/23.
//  Copyright © 2018年 lv. All rights reserved.
//

#include <stdio.h>

int main()
{
    int i;
    int a[10];
    int iTemp;
    int iPos;
    
    printf("please set the a[10]:\n");
    for (i=1; i<10; i++) {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }
    
    for (i=1; i<10; i++) {
        iTemp = a[i];
        iPos = i-1;
        while ((iPos>=0)&&(iTemp<a[iPos])) {
            a[iPos+1] = a[iPos];
            iPos--;
            
        }
        a[iPos] = iTemp;
    }
    //打印排序
    for(int i = 0; i < 10; i++)
    {
        printf("%d\t",a[i]);
    }
    
    return 0;
}

