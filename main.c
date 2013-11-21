
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_parser()
{
    char test_str[] = "0x0eadc0de - 0x13245671 : 1024\n0xdeadc0de - 0x13245672 : 1024\n0xdeadc0de - 0x13245673 : 1024\n";
    char* token = NULL;
    char str_addr[16] = {0};

    printf("%s\n", test_str);

    token = strtok(test_str, "\n");

    while(token != NULL)
    {

        printf("%s\n", token);

        // 1st address
        strncpy(str_addr, token, 10);
        printf("start_addr : 0x%08lx\n", (long) strtol(str_addr, NULL, 16));

        // 2nd address
        strncpy(str_addr, token + 13, 10);
        printf("end_addr : 0x%08lx\n", (long) strtol(str_addr, NULL, 16));


        token = strtok(NULL, "\n");
    }
}

int main()
{
    test_parser();

    return 0;
}
