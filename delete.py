# 实验报告的核心是代码而非可执行程序，所以为了保持仓库的整洁，删除了 exe 文件。
# 因为不会 python，所以该脚本由 LLM 生成

import os

# 设置目标文件夹
target_folder = os.getcwd()

# 递归遍历所有子文件夹
for root, dirs, files in os.walk(target_folder):
    # 获取当前文件夹中的所有exe文件
    exe_files = [f for f in files if f.endswith('.exe')]

    # 如果当前文件夹中存在exe文件，则删除它们
    for exe_file in exe_files:
        file_path = os.path.join(root, exe_file)
        print(f"删除文件：{file_path}")
        os.remove(file_path)

# 输出操作完成信息
print("操作完成。")
