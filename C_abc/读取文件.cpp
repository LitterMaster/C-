//
//  读取文件.cpp
//  
//  created by lv on 2018/01/19
//
//  读取文本文件的内容
//

#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    FILE *fp;
    int ninzu = 0;
    char name[100];
    double height,weight;
    double hsum = 0.0;
    double wsum = 0.0;

    if((fp = fopen("abc.dat","r"))== NULL)
    {
        printf("\anot found!\n");
    }else 
    {
        while(fscanf(fp,"%s %1f %1f",name,&height,&weight) == 3 )
        {
            printf("%-10s %5.1f %5.1f\n",name ,height ,weight);
            ninzu++;
            hsum += height;
            wsum += weight;
        }
        printf("----------------------\n");
        printf("          %5.1f %5.1f",hsum / ninzu,wsum / ninzu);
        fclose(fp);
        
    }
    

    return 0;
}
