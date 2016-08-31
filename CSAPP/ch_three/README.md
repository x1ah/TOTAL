- `Intel IA32`(32位体系结构 Intel Architechture 32-bit): 当今（大概2000年）大多数计算机的主导语言
- `x86-64`: Intel IA32 在64位机器上运行的扩展
- Intel 处理器系列俗称 x86.
- 计算机编译系统: 预处理器-编译器-汇编器-链接器

```seq
hello.c->hello.i: 预处理器(cpp),扩展源代码，插入所有#include指定的问津啊
hello.i->hello.s: 编译器(ccl)，产生汇编代码
hello.s->hello.o: 汇编器(as)，将汇编代码转换为二进制目标代码
hello.o->hello: 链接器(ld)，将目标代码与库函数代码合并，产生最终可执行代码
```

- 汇编代码不去分有符号无符号整数，不区分各类型指针，不区分指针和整数
