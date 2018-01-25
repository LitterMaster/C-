//
//  函数的递归调用.cpp
//  C_abc
//
//  Created by lv on 2018/01/24.
//  Copyright © 2018年 lv. All rights reserved.
//

#include <stdio.h>

void DisplayNames(char** cNameArray);

char* cName[]=
{
    "Aaron",
    "Jim",
    "Charles",
    "Sam",
    "Ken",
    "end"
};


int main()
{
    
    DisplayNames(cName);
    return 0;
    
}

void DisplayNames(char** cNameArray)
{
    if (*cNameArray=="end") {
        return;
    }else{
        DisplayNames(cNameArray+1);
        printf("%s\n",*cNameArray);
    }
}



