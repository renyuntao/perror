#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
功能: 显示错误码的含义
用法: ./perror CODE
时间: 2018-01-09
*/

int main(int argc, char* argv[])
{

    if(argc != 2)
    {
        printf("Error usage.\n\n");
        printf("Usage:\n\t%s CODE\n\n", argv[0]);
        return 1;
    }

    int code = atoi(argv[1]);
    printf("Error: %s\n", strerror(code));
    return 0;
}
