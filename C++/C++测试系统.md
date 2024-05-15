# 注意

当复制代码到测试系统时，可能出现编码问题，导致虽然复制过来的代码一样，但无法得到满分。

出现这种情况时，可以继续答题，重新打开题目，按提示（选择`是`）格式化代码，即可重新交卷。

![屏幕截图 2024-05-11 173729.png](https://github.com/1837634311/My-images/raw/main/images/%E5%B1%8F%E5%B9%95%E6%88%AA%E5%9B%BE%202024-05-11%20173729.png)

## 顺序

一：

```cpp
    // 取一个数每位数字的常用操作，用循环更方便。
    // 取十位上的数字，将十位变为个位，也就是 n / 10，再取模就行。以此类推。
    g = n % 10;
    s = n / 10 % 10;
    b = n / 100 % 10;
    q = n / 1000 % 10;
    cout << "个位是" << g << endl;
    cout << "十位是" << s << endl;
    cout << "百位是" << b << endl;
    cout << "千位是" << q << endl;
    mul = g * s * b * q;
    cout << "各位数字的积是" << mul << endl;
```

二：

```cpp
    v = 1.0 / 3 * 3.14159 * r * r * h;
    // 1 / 3 输出 0 是因为（整数除以整数）得到的是整数，所以结果为0，乘后面的也就为 0。
    // 所以规定一个数为浮点数，得到的结果就变成了浮点数，结果为 0.33……，结果正常。
    cout << "圆锥的体积为" << v << endl;
```

## 选择

一：

```cpp
    if (num >= 0) {
    // 当 num 为正时才进行计算，否则输出错误信息。
        if (num <= 40)
            s = num * 2.5;
        // 当 num > 40 时，不满足上一个 if 语句，来到下一个 if 语句进行判断。下同。
        else if (num <= 70)
            s = 100 + (num - 40) * 3.5;
        else if (num <= 90)
            s = 205 + (num - 70) * 4.5;
        else
            s = 295 + (num - 90) * 10;
        cout << "每日加工" << num << "个零件的计件工资为" << s << "元" << endl;
    } else
        cout << "输入数据有误" << endl;
```

二：

```cpp
    // 输出算式前面的部分。
    cout << n / 10;
    // 根据 a b 的奇偶，输出算式中间的符号。
    if (n / 10 % 2 == 1 && n % 10 % 2 == 1) {
        cout << "+";
    } else if (n / 10 % 2 == 1 && n % 10 % 2 == 0) {
        cout << "-";
    } else if (n / 10 % 2 == 0 && n % 10 % 2 == 0) {
        cout << "*";
    } else if (n / 10 % 2 == 0 && n % 10 % 2 == 1) {
        cout << "/";
    }
    cout << n % 10 << endl;
```

三：

```cpp
    if (value < 2500) {
        commission = 30 + value * 0.017;
    } else if (value < 6250) {
        commission = 56 + value * 0.0066;
    } else if (value < 20000) {
        commission = 76 + value * 0.0034;
    } else if (value < 50000) {
        commission = 100 + value * 0.0022;
    } else if (value < 500000) {
        commission = 155 + value * 0.0011;
    } else {
        commission = 255 + value * 0.0009;
    }
```

四：

```cpp
    {
    case 2:
        cout << "Monday" << endl;
        break;
    case 3:
        cout << "Tuesday" << endl;
        break;
    case 4:
        cout << "Wednesday" << endl;
        break;
    case 5:
        cout << "Thursday" << endl;
        break;
    case 6:
        cout << "Friday" << endl;
        break;
    case 7:
        cout << "Saturday" << endl;
        break;
    case 1:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "Error";
   }
```

## 循环一

一：

```cpp
    b = a;    // 因为后面循环会改变 a 的值，所以在此保存 a 原来的值。
    for (i = 1;i <= n;i++) {
       sum += a;    // 累加得到最后的结果。
       cout << a;
       if (i != n)    // 如果输出到最后一个的 aaa…a，就不输出"="。
          cout << "+";
      a = a * 10 + b;    // 更新下一项的值。
    }
```

二：

```cpp
    if (m % 5 == 0) {    // 只有 m 能被 5 整除才有办法支付。
        for (k = 0;k <= m / 20;k++) {    // 这个循环计算支付不同数量 20 元的情况。
            for (j = 0;j <= (m - k * 20) / 10;j++) {    // 这个循环计算支付不同数量 10 元的情况。
                i = (m - k * 20 - j * 10) / 5;    // 剩下的钱就是用 5 元支付的金额。
                cout << left << setw(5) << ++count << setw(5) << k << setw(5) << j << setw(5) << i << endl;
            }
        }
    }
```

## 循环二

一：

```cpp
    for (i = 1; i <= 9; i++) {    // 外层循环控制行数
        for (j = 1; j <= i; j++)    // 内层循环控制列数
          cout << setw(4) << i * j;
        cout << endl;
    }
```

二：

```cpp
    for (i = 1; i <= n - 1; i++) {
        for (j = 1; j <= n + i; j++)
            if (j == n - i + 2 || j == n + i)
                cout << '*';
            else
                cout << ' ';
        cout << endl;
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= 2 * n - i + 1; j++)
            if (j == i + 1 || j == 2 * n - i + 1)
                cout << '*';
            else
                cout << ' ';
        cout << endl;
    }
```

## 循环三

一：

```cpp
    for (i = 1; i <= k; i++) {
        t = n % 10;    // 获取最右边的数字
        n /= 10;    // 从 n 中移除最右边的数字
        if (i == k)    // 取到第 k 位时，输出数字
            cout << t << endl;
    }
```

二：

```cpp
    for (i = 1; i <= n; i++) {    // 计算从 1 到 n 的情况
        for (m = 1, s = 0; m <= i / 2; m++)
            if (i % m == 0)    // 判断因子
                s += m;
        if (s == i) {    // 判断是否是完数。如果是，则重复上述步骤输出因子。
            cout << i << "=";
            for (m = 1; m <= i / 2; m++)
                if (i % m == 0)
                    if (m == i / 2)
                        cout << m << endl;
                    else
                        cout << m << '+';
        }
    }
```

## 函数

一：

```cpp
    // 使用辗转相除法求最大公约数
    do {
        m = a % b;  // 计算 a 除以 b 的余数
        a = b;      // 更新 a 为 b
        b = m;      // 更新 b 为余数
    } while (b != 0);  // 循环直到余数为 0
    return a;           // 返回最大公约数
    //return b == 0 ? a : gys(b, a % b); // 递归法
```

二：

```cpp
    for (; number > 0; number /= 10)    // 从个位开始逐位检查数字 number
        if (number % 10 == digit)    // 如果当前位的数字符合情况，则计数器加一
            count++; 
    return count;    // 返回计数结果

```

## 一维数组一

一：

```cpp
    fib[0] = 1;    // 数列的前两项是 1
    fib[1] = 1;
    cout << setw(5) << fib[0] << setw(5) << fib[1];    // 先输出前两项，避免访问数组时越界
    for (i = 2; i < 10; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        if (i % 5 == 0)    // 当输出 5 个数后，换行。因为输出第十个数后不换行，所以在此判断。
            cout << endl;
        cout << setw(5) << fib[i];
    }
    cout << endl;

```

二：

```cpp
    for (i = 0; i < 4; i++, a /= 10)
        aa[i] = (a % 10 + 5) % 10;
    t = aa[0];
    aa[0] = aa[3];
    aa[3] = t;
    //swap(aa[0], aa[3])
    t = aa[1];
    aa[1] = aa[2];
    aa[2] = t;
    //swa(aa[1], aa[2])
```

## 一维数组二

一：

```cpp
    for (i = 0; i < 10; i++)
        cin >> unsorted[i];

    for (i = 0; i < 10; i++) {    // 外层循环，遍历排序后的数组
        min = unsorted[0];    // 将第一个元素设置为最小值
        pmin = 0;    // 将最小值的位置初始化为 0
        for (j = 0; j < 10; j++)    // 内层循环，查找最小值及其位置
			// 如果当前元素小于或等于最小值，更新最小值和最小值的位置
            if (unsorted[j] <= min) {
                min = unsorted[j];
                pmin = j;
            }
        sorted[i] = min;    // 将最小值放入sorted数组
        unsorted[pmin] = 9999;
    }

```

二：

```cpp
    for (i = 0; i < 5; i++) {
        if (a[i] == x) {    // 如果找到了，就输出和更新 flag
            cout << x << "是第" << i + 1 << "个数！" << endl;
            flag = 1;
            break;
        }
    }
```

## 一维数组三

一：

```cpp
    for (i = 0; i < 6; i++) {    // 外层循环，控制移动次数为 6 次
        m = a[5];    // 将数组 a 中最后一个元素保存到临时变量 m 中
        for (j = 5; j > 0; j--)    // 内层循环，将数组a中的元素向右移动一位
            a[j] = a[j - 1];
        a[0] = m;    // 将临时变量m中保存的值赋给数组a中的第一个元素，实现循环移动
        for (j = 0; j < 6; j++) {
            cout << setw(3) << a[j];
        }
        cout << endl;
    }
```

二：

```cpp
    cMax = cMin = cScore[0];
    cMaxIndex = cMinIndex = cSum = 0;
    for (i = 0; i < N; i++) {
        if (cScore[i] > cMax) {    // 寻找最大值
            cMax = cScore[i];
            cMaxIndex = i;
        }
        if (cScore[i] < cMin) {    // 寻找最小值
            cMin = cScore[i];
            cMinIndex = i;
        }
    }
    for (i = 0; i < N; i++)    // 计算总成绩
        cSum += cScore[i];
```

## 二维数组

一：

```cpp
    for (i = 0; i < 4; i++)    // 外层循环，遍历矩阵的行
        for (j = 0; j < 5; j++)    // 内层循环，遍历矩阵的列
            cin >> a[i][j];
	/* 这道题主要问题是，要明白 cout 语句的下方没有其他括号，所以 for 循环不能添加括号。
	也就是说，要明白单个语句不用加括号，明白哪些属于单个语句。
	外层 for 里面只有一条 for，内层 for 里面只有一条 if，if 里面只有一条 cout。*/
    for (i = 0; i < 4; i++)
        for (j = 0; j < 5; j++)
            if (a[i][j] < 0)
```

二：

```cpp
    // 杨辉三角的外侧为 0
	for (i = 0; i < n; i++) {
        a[i][0] = 1;
        a[i][i] = 1;
    }
	// 计算杨辉三角的内部
    for (i = 2; i < n; i++)
        for (j = 1; j < i; j++)
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
	// 输出杨辉三角
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++)
            cout << setw(6) << a[i][j];
        cout << endl;
    }
```

## 指针

一：

```cpp
    pinversion = &inversion;
    // 将 n 取模，得到 n 的个位数，并将其加到 inversion 的末尾。
    for (; *pn > 0; *pn /= 10)
        *pinversion = *pinversion * 10 + *pn % 10;
```

二：

```cpp
    for (i = 0, max = 0; i < *n; i++)
        if (p[i] > p[max])
            max = i;
    for (i = max; i < *n - 1; i++)
        p[i] = p[i + 1];
    (*n)--;
```
