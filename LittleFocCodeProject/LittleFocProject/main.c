#include "lq_includes.h"
#include "lfoc_includes.h"
#include "stdio.h"
#include "stdlib.h"

int main(void)
{
	Lfoc_Log_Push_Fault(9, 2, 1);
	Lfoc_Log_Flush_Output();
	printf("’‚ «≤‚ ‘≥Ã–Ú\r\n");
}
