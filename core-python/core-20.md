# web编程
- cookie： 保存在客户端的客户状态信息
- HTTP（超文本传输协议）协议属于无状态协议
- web的客户端是浏览器，应用程序允许用户在万维网上产询文档
- 另外web是服务器端，进程运行在信息提供商的主机上。

## 英特网(internet)
- 简单的web应用包括使用被称为url（统一资源定位符）的web地址。
- url是大型标识符URI的一部分
- url的统一格式：
    + `prot_sch://net_loc/path;params?qurry#frag`
    + `prot_sch` 代表网络协议或者下载规划
    + `net_loc` 服务器位置
    + `path` 斜杠（/）限定文件或者CGI应用程序的路径
    + `params` 可选参数
    + `query` 连接符（&）连接键值对
    + `frag` 拆分文档中的特殊锚
- `net_loc` 还可以拆分成多个部件`user:passwd@host:port`
    + `user` 登陆名
    + `passwd` 用户的密码
    + `host` web服务器运行的机器名或者地址
    + `port` 端口号，默认80端口
