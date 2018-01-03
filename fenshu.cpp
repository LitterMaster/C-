#include <stdio.h>

#define NUMBER 80

int main(void)
{
    int i,a,b,num;
    int bunpu[11] = {0};
    int snum = 0;
    int fenshu[NUMBER];
    int pass[NUMBER];
    int sum = 0;

    printf("please set the number:");
    do
    {
        scanf("%d",&num);
        if(num < 1 || num > NUMBER)
        {
            printf("\the ave is:1 to %d",NUMBER);
        }
        
    } while (num < 1 || num > NUMBER);
    
    

    puts("please write this fenshu.");
    for (i = 0;i < num; i++){
        printf("%2d:",i+1);
        do
        {
            scanf("%d",&fenshu[i]);
            if(fenshu[i] < 0 || fenshu[i] > 100 )
            {
                printf("\a fenshu ave is[1-100]:");
            }
            
        } while (fenshu[i] < 0 ||fenshu[i]>100);
        bunpu[fenshu[i]/10]++;
        
        sum += fenshu[i];
        if(fenshu[i]>=60)
        {
            pass[snum++]=i;
        }
        
    }

      printf("sum:%5d\n",sum);  /* 总和 */
    printf("ave:%5.1f\n",(double)sum/num);/* 平均分 */

    int max,min;
    min = max = fenshu[0];
    for (i=1;i<num; i++){
        if(fenshu[i]>max)
        {
            max = fenshu[i];
        }
        if(fenshu[i]<min)
        {
            min = fenshu[i];
        }  
    }

    printf("max:%d\n",max);/* 最大值 */
    printf("min:%d\n",min);/* 最小值 */
/* 及格分布 */
    puts("the students pass:");
    puts("-------------------");
    for(int i = 0; i < snum; i++)
    {
        printf("%2d:(%3d)'\n",pass[i]+1,fenshu[pass[i]]);
    }
    
   /*  分布图 */
   puts("\n----fenbutu----");
   printf("     100:");
   for (a = 0; a < bunpu[10]; a++)
        putchar('*');
    putchar('\n');

    for(int i = 9; i >= 0; i--)
    {
        printf("%3d - %3d:",i*10,i*10+9 );
        for(int a = 0; a < bunpu[i]; a++)
        {
            putchar('*');
        }
        putchar('\n');
        
    }
    

    return 0;
   
}