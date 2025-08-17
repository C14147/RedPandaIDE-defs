import os
import shutil
import argparse
from typing import List

def get_header_extensions() -> List[str]:
    """返回常见的C++头文件扩展名"""
    return ['.h', '.hpp', '.hh', '.hxx', '.inl']

def is_header_file(filename: str) -> bool:
    """判断文件是否为头文件"""
    ext = os.path.splitext(filename)[1].lower()
    return ext in get_header_extensions()

def copy_headers(source_dir: str, dest_dir: str, overwrite: bool = False) -> None:
    """
    从源目录复制所有头文件到目标目录，并保持目录结构
    
    参数:
        source_dir: 源C++项目目录
        dest_dir: 目标目录
        overwrite: 如果目标文件已存在，是否覆盖
    """
    # 确保源目录存在
    if not os.path.isdir(source_dir):
        raise ValueError(f"源目录不存在: {source_dir}")
    # 创建目标目录（如果不存在）
    os.makedirs(dest_dir, exist_ok=True)
    # 遍历源目录
    for root, dirs, files in os.walk(source_dir):
        # 过滤出头文件
        header_files = [f for f in files if is_header_file(f)]
            
        if not header_files:
            continue  # 没有头文件，跳过这个目录

        # 计算相对路径，用于在目标目录中创建相同的结构
        relative_path = os.path.relpath(root, source_dir)
        target_dir = os.path.join(dest_dir, relative_path)
        # 创建目标目录
        os.makedirs(target_dir, exist_ok=True)
        print(f"正在处理目录: {relative_path}")
        # 复制每个头文件
        for header in header_files:
            source_path = os.path.join(root, header)
            target_path = os.path.join(target_dir, header)
            # 检查目标文件是否已存在
            if os.path.exists(target_path) and not overwrite:
                print(f"跳过已存在的文件: {header}")
                continue

            # 复制文件
            shutil.copy2(source_path, target_path)
            print(f"已复制: {header}")

    print("头文件提取完成！")

def main():
    # 设置命令行参数
    parser = argparse.ArgumentParser(description='提取C++项目中的所有头文件并保持目录结构')
    parser.add_argument('source', help='C++项目的源目录')
    parser.add_argument('destination', help='保存头文件的目标目录')
    parser.add_argument('-o', '--overwrite', action='store_true', 
                       help='如果目标文件已存在，覆盖它们')
      
    args = parser.parse_args()
    try:
        copy_headers(args.source, args.destination, args.overwrite)
    except Exception as e:
        print(f"发生错误: {str(e)}")
        exit(1)

if __name__ == "__main__":
    main()
    