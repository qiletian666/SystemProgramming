/*************************************************************************
	> File Name: homework.c
	> Author: qiletian666 
	> Mail: 919112734@qq.com 
	> Created Time: 2019年04月22日 星期一 20时13分37秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main()
{
    char hostname[32];
    char* name;
    char* path;
    name = getenv ("logname");
    path = getenv ("pwd");
    gethostname(hostname,sizeof(hostname));
    printf("\n");
    printf("\033[;31m1.%s\033[0m\n",name);
    printf("\033[;32m2.@\033[0m\n");
    printf("\033[;33m3.%s\033[0m\n",hostname);
    printf("\033[;32m4.:\033[0m\n");
    printf("\033[;34m5.%s\n",path);
    printf("\n");
    return 0;
}
