//  结构体.cpp
//  C_abc
//
//  Created by lv on 2018/01/12
//  熟悉结构体


#include <stdio.h>
#include <string.h>

struct gs
{
    char name[20];
    int height;
    float weight;
    long schols;
};

int main(int argc, char const *argv[])
{
    struct gs sana;

    strcpy(sana.name,"Sana");
    sana.height = 175;
    sana.weight = 60.5;
    sana.schols = 70000;

    printf("name  =%s\n",sana.name);
    printf("height=%dcm\n",sana.height);
    printf("weight=%.2fkg\n",sana.weight);
    printf("schols=%ld$\n",sana.schols);

    return 0;
}
