// 学习到的位置 c memory
# 预处理
g++ -E XXX.cpp
# 编译
gcc -c XXX.c
g++ -std=c++17 -W -Wall -Wfatal-errors XXX.cpp（可以指定多个cpp）
clang++ -std=c++17 -W -Wall -Wfatal-errors XXX.cpp
# 基础类型
## c++
sizeof可以知道到底占几个字节
- int 4byte
- double 8
- short 2
- string
- char 1
- bool 1 占用1byte而不是1bit是因为寻址只能到byte
- long 4
- long long 8 
## c
- int
- float
- double
- char


