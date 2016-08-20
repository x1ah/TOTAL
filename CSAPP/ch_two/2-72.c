#include <stdio.h>

/*
 * A) int 类型和 unsigned 类型做运算，最后int转换成无符号类型，结果也是无符号，无符号数永远大于零
 */

 void copy_int (int val, void *buf, int maxbytes)
{
    if ((maxbytes > 0) && ((unsigned) maxbytes >= sizeof (int)))
        memcpy (buf, (void *) &val, sizeof (val));
}
