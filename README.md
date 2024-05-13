# <center> HQ-Cases-Generator </center>



|   Idea   |        Code         |            Test             |
| :------: | :-----------------: | :-------------------------: |
| @Capzera | @Capzera @2070super | @Capzera @2070super @bnwxzz |



**HQ Cases Generator** (以下简称**HQCG库**)是一个可以帮助解决信息学奥赛的老师们对于自出题需要出测试数据的困难。

该项目的主体文件一共有两个：**random.h**，**数据生成器.cpp**。

各位老师可以把头文件下载下来，放到需要出题目数据的本地地址，然后将标准std程序拷贝到数据生成器的指定位置后，就可以根据std程序的输入输出，使用接口函数快速生成目标数据。



# HQCG 库 V2.0版

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
