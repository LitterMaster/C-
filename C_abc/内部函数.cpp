//
//  内部函数.cpp
//  C_abc
//
//  Created by lv on 2018/01/24.
//  Copyright © 2018年 lv. All rights reserved.
//

#include <stdio.h>

static char* GetString(char* pString)
{
    return pString;
}

static void ShowString(char* pString)
{
    printf("%s\n",pString);
}

int main()
{
    char* pMyString;
    
    pMyString = GetString("hello!");
    
    ShowString(pMyString);
    
    return 0;
}
