#include <string.h>
char * mygets (char * name, int size)
// 去除输入字符串尾的换行符
{
    fgets (name, size, stdin);
    if (name[strlen (name) - 1] == '\n')
        name[strlen (name) - 1] = '\0';
    return name;
}
