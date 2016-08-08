# 错误和异常
- 1. 错误分为 语法错误和逻辑错误。（也有域错误或者范围错误）
- 2. 当python检测到一个错误时，解释器就会指出当前流经无法继续继续执行下去。这时就出现了异常。。
- 3. 异常的概念： 他是因为程序出现了错误而在正常控制流以外采取的行为，这个行为又分为俩个阶段，一：首先是引起异常发生的错误。二是检测阶段。
- 4. 异常就是错误发生的信号。
- 所以流程就是先发生异常错误--> 引发，抛出或者生成--> 解释器通过他告知当前控制流有错误发生--> 当前流被打断，用来处理这个错误并采取相应的操作。
- 5. 类似于python这种支持引发和处理异常的语言，可以让程序员在错误发生时更直接的控制他们，程序员不仅有了检测错误的能力，还可以在他们发生时采取更可靠的补救措施，由于运行时管理错误的能力，应用程序的××健壮性××有了很大的提高。
- 6. `traceback`(跟踪记录)
## python中的异常
- `NameError`（尝试访问一个未申明的变量）
- `ZeroDivisionError` (除数为零)
- `SyntaxError` （python解释器语法错误）
- `IndexError` (请求的索引超出序列范围)
- `KeyError` （请求一个不存在的字典关键字）
- `IOError` （输入/输出错误）
- `AttributeError` (尝试访问未知的对象属性)
- `IndentationError` （缩进错误）

* 任何在try语句块中的代码都会被监测，检查有无异常发生。
* `try`语句有两种形式，`try-expect` & `try-finally`这两个语句是互斥的，也就是只能使用其中一个，一个`try`可以对应多个`expect`子句，但是只能对应一个`finally`子句，或者是一个`try-expect-finally` 复合语句。
* 应用程序接口（API）
```python
try:
    ****
except (Exception1, Exception2, Exception3...)[, reason]:
    doing_something
```
`reason`是Exception类的一个实例。

- `else`子句， 在`try``except`后面跟`else`子句，只有当`try`范围内得代码块完全成功。else才会执行。
- `try-finally`语句，finally无论是否发生异常都会被执行，且这样使用就不能捕捉异常。
- `with...as...` 语句,首先试图运行with后的语句，如果为真，则进行下面的语句。当with后面打开一个文件时，运行之后文件便会自动关闭，不在需要手动将其`***.close()`。
- 断言：断言可以表示成，如果断言成功不采取任何措施，否则触发错误（断言错误，AssertionError）
- 跟前面一样，我们可以传一个异常参数给assert，`assert some_express, arguments`
- `raise` raise语句强制抛出异常。
