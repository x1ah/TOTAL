# 正则表达式

```python
>>> re.match('\w+@(\w+\.)?\w+\.com', 'd@dd.ss.com').group()
'd@dd.ss.com'
```

如上，`\w`只是代表一个字符，`+`代表至少出现一次的情况，也就是可以出现多个字符，通过`（）`创建组，从而通过`？`来一同判断该组出现与否。
改进。

```python
>>> re.match('\w+@(\w+\.)*\w+\.com', 'd@d.hello.world.ss.com').group()
'd@d.hello.world.ss.com'
```

如上，将`?`换为 `*`，匹配出现大于等于0的情况。

- 通过`×××.groups()`访问所匹配的所有子组，也可以访问某一个特定的子组，例如`***.group(1)`, `***.group(2)`.
- 子组只能是在模式里面组建的才叫子组，否则匹配完的就不存在子组。
- `\bthe` 以the开头的字符串
- `\Bthe` 任何包含the但是不以the开头的单词
- `^the` 以the开头的字符串
- `the$` 以the结尾的字符串
- `\s` 空格符

- 通过`sub()` `subn()`来进行搜索和替换。
- `.+?`这个问号代表匹配的字符经可能的少。