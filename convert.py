# 老师发的练习题是 vs2010 的工程文件，里面的代码都是 GBK / ANSI 编码。我使用的 vscode 的默认编码为 UTF-8，所以需要转换。
# 因为不会 python，所以该脚本由 LLM 生成

import os

# 定义源编码和目标编码
src_encoding = 'gbk'
dst_encoding = 'utf-8'

# 获取当前目录下的所有文件
files = os.listdir('.')

# 遍历所有文件
for filename in files:
    # 检查文件扩展名是否为.cpp
    if filename.endswith('.cpp'):
        # 定义源文件和目标文件的路径
        src_path = filename
        dst_path = filename + '.bak'  # 创建一个备份文件

        # 打开源文件并读取内容
        with open(src_path, 'r', encoding=src_encoding) as src_file:
            content = src_file.read()

        # 将内容写入目标文件，即转换为UTF-8编码
        with open(dst_path, 'w', encoding=dst_encoding) as dst_file:
            dst_file.write(content)

        # 用备份文件替换原文件
        os.remove(src_path)
        os.rename(dst_path, src_path)

# 输出操作完成信息
print("转换完成。")
