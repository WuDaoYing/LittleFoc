#include "mp_log.h"



/*

void Mp_Log_Check(void)
{
    int i = 0;
    printf("你好，系统管理者\r\n");
    printf("现在进入日志测试环境\r\n");
    printf("***************************开始验证计算****************************\r\n");
    for (i = 0;i < 100;i++)
    {
        if ((i >= 10) && (i <= 20))
        {
            if (Lfoc_Log_Resource_Management.Bit__Resource_Lock == 0)
            {
                Lfoc_Log_Resource_Management.Bit__Resource_Lock = 1;
                Lfoc_Log_Resource_Management.State__Resource_Owner = text1;
                printf("开始打印信息1\r\n");
                printf("资源使用归信息1所用\r\n");
            }
            else
            {
                if (Lfoc_Log_Resource_Management.State__Resource_Owner == text1)
                {
                    printf("开始打印信息1\r\n");
                    printf("资源使用归信息1所用\r\n");
                }
                else
                {
                    printf("资源已上锁\r\n");
                }
            }
        }
        else if(i == 21)
        {
            printf("信息1已打印完，放弃资源锁\r\n");
            Lfoc_Log_Resource_Management.Bit__Resource_Lock = 0;
        }
        if ((i >= 15) && (i <= 30))
        {
            if (Lfoc_Log_Resource_Management.Bit__Resource_Lock == 0)
            {
                Lfoc_Log_Resource_Management.Bit__Resource_Lock = 1;
                Lfoc_Log_Resource_Management.State__Resource_Owner = text2;
                printf("开始打印信息2\r\n");
                printf("资源使用归信息2所用\r\n");
            }
            else
            {
                if (Lfoc_Log_Resource_Management.State__Resource_Owner == text2)
                {
                    printf("开始打印信息2\r\n");
                    printf("资源使用归信息2所用\r\n");
                }
                else
                {
                    printf("资源已上锁\r\n");
                }
            }
        }
        else if (i == 31)
        {
            printf("信息2已打印完，放弃资源锁\r\n");
            Lfoc_Log_Resource_Management.Bit__Resource_Lock = 0;
        }


    }






}



*/