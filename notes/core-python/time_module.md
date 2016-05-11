##`time` 模块

- `time.clock()`第一次调用返回程序运行的时间，第二次调用返回该时间到第一次时间的间隔。
- `time.sleep()` 线程推迟指定时间运行，单位为秒。
- `time.ctime(seconds)`  将seconds（时间戳）转换成时间字符串。
- `time.gmtime(seconds)` 将seconds转换成一个UTC时区时间。
- `time.localtime(seconds)` 将seconds转换成本地时区时间。
- `struct_time`元组， 元组共九个元素，返回元组的函数有`gmtime()` `localtime()` `time.striptime()`
- `time.mktime(time.localtime())` 将一个struct_time转换成时间戳。
- `time.asctime(tuple)`--->`'Sun Jan 10 03:44:54 2016'`

|格式|含义          |   格式|含义          |
|---|:-------:| ----:|:-----:|
|%a |本地简化星期名称|  %A |本地完整星期名称|
|%b |简化月份名称   |   %B |完整月份名称   |
|%c |相应的日期和时间表示|%d |一个月中的第几天   |
|%H |一天中的第几个小时0-24|%I |一天中的第几个小时0-12|
|%j |一年中的第几天   |%m |月份                 |
|%M |月钟数          |%p |am或者pm的相应符     |
|%S |秒              |%U |一年中的星期数    |
|%w |一个星期中的星期数|%W |一个星期中的星期数，从一开始|
|%x |本地相应日期      |%X |本地相应时间         |
|%y |去掉世纪的年份    |%Y |完整的年份          |
|%Z |时区的名字        |%%｜%号字符              |

- `%p`和`%I`必须配合使用才会有效果。
- `time.strptime(string, format)`format和string格式必须匹配。

```seq
Atruct_time->Format string: strftime
Format string->struct_time: strptime
Struct_time->timestamp: mktime
Timestamp->struct_time: localtime/gmtime
Timestamp->time string: ctime
```

