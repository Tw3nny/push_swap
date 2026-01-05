#include "ft_printf.h"
#include <stddef.h>
#include <stdio.h>

int main(void)
{
    ft_printf("->%%%<-\n");
    printf("->%%%<-");
    return (0);
}