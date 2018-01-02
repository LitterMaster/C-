//
//  2018100201.cpp
//  C++P1
//
//  Created by lv on 2018/1/2.
//  Copyright © 2018年 lv. All rights reserved.

//   选择排序法

#include "stdio.h"

int main()
{
    int i, j;
    int a[10];
    int iTemp;
    int iPos;
    printf("请为数组赋值：\n");
    
    for (i=0; i<10; i++) {
        scanf("%d",&a[i]);
    }
    
    for (i=0; i<10; i++) {
        iTemp=a[i];
        iPos=i;
        for (j=i+1; j<10; j++) {
            if (iTemp>a[j]) {
                iTemp=a[j];
                iPos=j;
            }
        }
        a[iPos]=a[i];
        a[i]=iTemp;
    }
    
    for (i=0; i<10; i++) {
        printf("%d\t",a[i]);
        if (i==4) {
            printf("\n");
        }
    }
    return 0;
    
}

