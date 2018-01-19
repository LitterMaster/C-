//
//  写入时间和日期.cpp
//
//  created by lv on 2018/01/19
//
//  写入时间和日期
//

#include <stdio.h>
#include <time.h>

int main(void)
{
    FILE *fp;
    time_t t;
    struct tm *local;

    time(&t);
    local = localtime(&t);

    if((fp = fopen("dt.dat","w")) == NULL)
    {
        printf("\anot found!\n");
    }else 
    {
        printf("write the time and date.\n");
        fprintf(fp,"%d/%d/%d %d:%d:%d\n",local->tm_year + 1900,
        local->tm_mon + 1,local->tm_mday,local->tm_hour,local->tm_min,local->tm_sec);
        fclose(fp);
    }
    
    
    
    return 0;
}
