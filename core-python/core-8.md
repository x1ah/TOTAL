`迭代器` 文件对象生成迭代器会自动调用readline()方法。这样，循环就可以访问文件的所有行了。这里可以使用更简单的`for eachlinr in myFile`  代替`for eachLine in myfile.readlines()`
# `Unicode` 
- `unicode()` 和 `unichr()` 功能和ascii码的`str()` `chr()`一样。只不过针对的对象不一样。分别针对基本字符串和unicode字符对象。 
- `decode()` `encode()` 俩内建方法。
