//
//  折半法排序.cpp
//  C_abc
//
//  Created by lv on 2018/01/23.
//  Copyright © 2018年 lv. All rights reserved.
//

#include <stdio.h>

void CelerityRun(int left,int right,int array[]);

int main()
{
    int i;
    int a[10];
    
    printf("please set the a[10]:\n");
    for (i=0; i<10; i++) {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }
    
    CelerityRun(0,9,a);
    
    //打印排序
    for(int i = 0; i < 10; i++)
    {
        printf("%d\t\n",a[i]);
    }
    
    return 0;
}

void CelerityRun(int left,int right,int array[])
{
    int i,j;
    int middle,iTemp;
    i = left;
    j = right;
    middle = array[(right+left)/2];
    
    do {
        while ((array[i]<middle)&&(i<right)) {
            i++;
        }
        while ((array[j]>middle)&&(j>left)) {
            j--;
        }
        if (i<=j) {
            iTemp = array[i];
            array[i] = array[j];
            array[j] = iTemp;
            i++;
            j--;
        }
    } while (i<=j);
    
    if (left<j) {
        CelerityRun(left, j, array);
    }
    if (right>i) {
        CelerityRun(i, right, array);
    }
    
}
