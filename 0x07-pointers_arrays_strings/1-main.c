#include <stdio.h>

char *_memcpy(char *dest, char *src, unsigned int n);

void simple_print_buffer(char *buffer, unsigned int size);

int main(void)
{
    char buffer[98] = {0};
    char buffer2[98] = {0};

    simple_print_buffer(buffer, 98);
    _memcpy(buffer + 50, buffer2, 10);
    printf("-------------------------------------------------\n");
    simple_print_buffer(buffer, 98);
    return (0);
}

void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    for (i = 0; i < size; i++)
    {
        printf("0x%02x", buffer[i]);
        if (i < size - 1)
            printf(" ");
    }
    printf("\n");
}

