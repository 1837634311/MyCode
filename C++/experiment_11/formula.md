# 本实验内数学公式

## 第 3 题

题目：用**递归法**计算数列 $f(n)$ 的第n项，n 从键盘输入。

1. 主函数功能：从键盘输入n值，通过调用子函数计算数列的前n项及递归调用次数并输出。
2. 子函数功能：使用递归法，计算数列的前n项。

公式：

$$
\begin{cases}
  f(1) = 1 & n = 1 \\
  f(2) = 2 & n = 2 \\
  f(n) = f(n-1) + 2 \times f(n-2) & n > 2
\end{cases}
$$

## 第 4 题

题目：用**递归法**求组合数：

1. 主函数功能：从键盘输入 n 和 m，通过调用子函数计算组合数 $C_{n}^{m}$ 并输出。
2. 子函数功能：使用递归法，计算组合数 $C_{n}^{m}$。

公式：

$$
C_{n}^{m} =
\begin{cases}
  1 & m = 0 \text{ 或 } m = n \\  
  C_{n-1}^{m} + C_{n-1}^{m-1} & \text{其他情况}
\end{cases}
$$
