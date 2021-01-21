// PVS-Studio static code analyzer: https://www.viva64.com/en/pvs-studio/

#include <stdlib.h>
#include <string.h>

int memory_leak(char *src_a, char *src_b)
{
    char *copy_a = (char *)malloc(strlen(src_a) + 1);
    if (copy_a == NULL)
        return -1;

    char *copy_b = (char *)malloc(strlen(src_b) + 1);
    if (copy_b == NULL)
        return -1;

    // ....

    free(copy_a);
    free(copy_b);
    return 1;
}

int main() {
   int result = memory_leak("hello", "world");
   return 0;
}
