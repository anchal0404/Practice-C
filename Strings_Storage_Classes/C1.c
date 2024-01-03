#include<stdio.h>
int main(int argc, char const *argv[])
{
    int count = 0;
    unsigned int num = 15;
    
    for (int i = 31; i >=0; i--)
    {
        if(((num>>i)&1)!=0)
        {
            count++;
        }
        
    }
    printf("Set Bits = %d",count);
    return 0;
}
