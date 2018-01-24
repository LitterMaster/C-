//
//  输出系统时间和日期.cpp
//  C_abc
//
//  Created by lv on 2018/01/24.
//  Copyright © 2018年 lv. All rights reserved.
//

#include <stdio.h>
#include "time.h"

int main()
{
    int command[4] = {0,1,2,3};
    int num;
    struct tm *sysTime;
    printf("如需帮助请按0！\n");
    printf("please input the order:\n");
    while (1) {
        scanf("%d",&num);
        
        if (command[0] == num) {
            printf("请输入数字1显示日期，输入数字2显示时间，输入3推出系统\n");
        }else if (command[1] == num){
            time_t nowTime;
            time(&nowTime);
            sysTime = localtime(&nowTime);
            printf("系统日期：%d-%d-%d\n",1900+sysTime->tm_year,sysTime->tm_mon+1,sysTime->tm_mday);
        }else if (command[2] == num){
            time_t nowTime;
            time(&nowTime);
            sysTime = localtime(&nowTime);
            printf("系统时间：%d:%d:%d\n",sysTime->tm_hour,sysTime->tm_min,sysTime->tm_sec);
        }else if (command[3] == num){
            return 0;
        }
        printf("please input the order:\n");
        
    }
    return 0;
}



