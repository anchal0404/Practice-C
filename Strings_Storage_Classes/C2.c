#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("");
    scanf("%X",&num);

    num = (((num&0x0F)<<4) |((num&0xF0)>>4)); 

    printf("num = 0x%X",num);
    return 0;
}
