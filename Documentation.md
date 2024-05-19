# <center>HQCG</center>

## 使用方法

+ 出题时，写好一道题目经过证明或检验的标准程序
+ 将标准程序的 `main()` 复制粘贴到 `Generator.cpp` 的指定区域
+ 将标准程序的全局变量复制粘贴到 `Generator.cpp` 的 `solve()`函数前。
+ 将标准程序的输入 `cin` 部分用库函数内接口函数替换，表示随机生成数据
+ 将随机生成的数据通过调用 `iprint()` 及 `oprint()` 函数写入输入输出文件
+ 修改目标生成样例的标号区间，编译运行 ` Generator.cpp`。
+ 在程序所在的文件夹检查测试数据是否有误。





## 库接口函数



### intRand 整数生成函数

#### 函数接口

```
long long intRand(long long l, long long r, double minusRatio = 0);
```



#### 函数目的

生成一个 **[l, r]** 范围内的不超过 **long long** 的整数，且允许设置有一定概率生成 **负数** 。



#### 使用方法

传入 **2-3** 个参数。其中：

**l**是生成数据的左端点。

**r**是生成数据的右端点。

**minusRatio**是一个**0-1**的小数，表示接受多大的概率生成负数。

例如：**minusRatio = 0.5** ，则表示生成数据中的负数出现频率近似为 **50%** 。

该函数在范围内等概率的生成一个整数。





### charRand 字符生成函数

#### 函数接口

```cpp
char charRand(bool NumFlag = 0, bool LowerCase = 0, bool CapitalCase = 0, bool Ascii = 0);
```



#### 函数目的

生成一个**限定范围**的**字符**。



#### 使用方法

传入 $0-4$ 个参数，其中：

第**1**个参数**NumFlag**表示是否需要生成数字，**1**是，**0**是否，下同。

第**2**个参数**LowerCase**表示是否需要生成小写字母。

第**3**个参数**CapitalCase**表示是否需要生成大写字母。

第**4**个参数**Ascii**表示是否需要生成全**ASCII**码表的字符，注意如果该参数为**1**，则对先前参数造成屏蔽。

该函数在待生成的字符集中等概率的生成一个字符。





### stringRand 字符串生成函数

#### 函数接口

```cpp
string stringRand(size_t size = 0, bool NumFlag = 0, bool LowerCase = 0, bool CapitalCase = 0, bool Ascii = 0);
```



#### 函数目的

生成一个 **定长字符串** ，该函数继承于 **charRand** 函数。



#### 使用方法

传入 $1-5$ 个参数，其中：

第**1**个参数**size**表示生成字符串的长度。

第**2**个参数**NumFlag**表示是否需要生成数字，**1**是，**0**是否，下同。

第**3**个参数**LowerCase**表示是否需要生成小写字母。

第**4**个参数**CapitalCase**表示是否需要生成大写字母。

第**5**个参数**Ascii**表示是否需要生成全**ASCII**码表的字符，注意如果该参数为**1**，则对先前参数造成屏蔽。





### highIntRand 高精度整数生成函数

#### 函数接口

```cpp
string highIntRand(int l, int r);
```



#### 函数目的

生成一个长度无限的整数，该函数继承于 **charRand()** 函数。



#### 使用方法

传入 **2** 个参数，其中：

第**1**个参数**l**表示生成的高精度数最少多少位。

第**2**个参数**r**表示生成的高精度数最大多少位。

该函数在范围内等概率生成一个长度为 **x** ， $x ∈ [l, r]$ 的高精度整数。



### mulIntRand 倍数整数生成函数

#### 函数接口

```cpp
long long long long mulIntRand(long long _l, long long _r, long long _division, double _minusRatio = 0)
```

#### 函数目的

生成 $[l, r]$ 范围内 `division` 的倍数，且可以设置有 `minusRatio` 的概率生成负数。

#### 使用方法

传入 **3-4** 个参数，其中：

第 **1** 个参数 **l** 表示生成的数的下界范围。

第 **2** 个参数 **r** 表示生成的数的上界范围。

第 **3** 个参数 **division** 表示生成的数需要是 `division` 倍。

第 **4** 个 **minusRatio** 是一个 **0-1** 的小数，表示接受多大的概率生成负数。

该函数在范围内等概率生成一个长度为 **x** ， $x ∈ [l, r]$ 的整数，且 $x \mod division = 0$ 。