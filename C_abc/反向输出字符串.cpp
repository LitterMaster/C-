//
//  反向输出字符串.cpp
//  C_abc
//
//  Created by lv on 2018/01/24.
//  Copyright © 2018年 lv. All rights reserved.
//

#include <stdio.h>

int main()
{
    int i;
    char String[7] = {"mrsoft"};
    char Reverse[7] = {0};
    int size;
    
    size = sizeof(String);
    
    for (i=0; i<6; i++) {
        Reverse[size-i-2] = String[i];
    }
    
    printf("%s\n",String);
    printf("%s\n",Reverse);
    
    
    
    return 0;
}



