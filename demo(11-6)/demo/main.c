//
//  main.c
//  demo
//
//  Created by Kevin on 2023/11/5.
//

#include <stdio.h>
int main(void)
{
    int j=0,m,h;
    double min;
    printf("输入10个数字，用空格隔开:\n");
    double a[10];
    int i=0;
    for(i=0;i<10;i++)
    {
        scanf("%lf",&a[i]);   /*输入10个浮点数并存入数组*/
    }

    for(h=0;h<9;h++)
    {
        for(j=0;j<9-h;j++)
        {
            m=j+1;
            if(a[j]<a[m])
            {
                min=a[j];
                a[j]=a[m];
                a[m]=min;
            }
        }
    }

    for(i=0;i<10;i++)
    {   
        printf("%lf  ",a[i]);}  /*输出降序排序的数组*/
    }


