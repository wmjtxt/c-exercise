#include "stdio.h"
#include "conio.h"
/*宏定义中允许包含两道衣裳命令的情形，此时必须在最右边加上"\"*///woo!!!!!
#define exchange(a,b) { \
int t;\
t=a;\
a=b;\
b=t;\
}
 main(void)
{
    int x=10;
    int y=20;
    printf("x=%d; y=%d\n",x,y);
    exchange(x,y);
    printf("x=%d; y=%d\n",x,y);
    getch();
}
