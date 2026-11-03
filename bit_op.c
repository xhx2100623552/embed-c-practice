#include <stdio.h>
#include <stdint.h>
int main(void)
{
    uint8_t reg = 0x00;

    // 置位第2位 (bit2，从0开始数)
    reg |= (1 << 2);
    printf("置bit2: reg=0x%02X\n", reg);

    // 清零bit2
    reg &= ~(1 << 2);
    printf("清bit2: reg=0x%02X\n", reg);

    // 翻转bit1
    reg ^= (1 << 1);
    printf("翻转bit1: reg=0x%02X\n", reg);

    // 判断bit1是否为1
    if(reg & (1 << 1))
    {
        printf("bit1 是高电平\n");
    }
    reg ^=(1 << 2);
    printf("aginb 翻转bit1：reg=0x%02X\n",reg);

    return 0;
}


