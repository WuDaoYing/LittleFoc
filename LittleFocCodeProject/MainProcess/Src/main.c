#include "stdio.h"
#include "lfoc_includes.h"
#include "lfoc_mem.h"
#include "lq_includes.h"
#include "mp_includes.h"

/* 定义8KB静态内存池，4字节对齐 */
static uint8_t s_mem_pool[8192];



int main(void)
{
    /* 初始化 */
    Lfoc_Mem_Init(s_mem_pool, sizeof(s_mem_pool));
    Mp_Benchmark_Check();
    //Mp_Standardization_Check();
    Lfoc_Log_Flush_Output();


}