#include <stdio.h>
#include <stdlib.h>
#include <TColor.h>

int main()
{
    TC_Init();
    printf("%s%s%sHello %s%sworld%s!!!%s\n", TC_UNDERLINE(), TCF_RED(), TCB_BLUE(), TCF_RED(), TCB_GREEN(), TC_INVERSE(), TC_RESET());
    printf("%s%s", TCF_WHITE(), TCB_RED());
    system("PAUSE");
    TC_Shutdown();
    return 0;
}