# cpp_The-Good-Number
C++练习 好数

# P10424 [蓝桥杯 2024 省 B] 好数

题目描述：
一个整数如果按从低位到高位的顺序，奇数位（个位、百位、万位……）上的数字是奇数，偶数位（十位、千位、十万位……）上的数字是偶数，我们就称之为“好数”。
给定一个正整数 $N$，请计算从 $1$ 到 $N$ 一共有多少个好数。

输入格式：
一个整数 $N$。

输出格式：
一个整数代表答案。

思路：
抄袭讨论区里的答案。
遍历要判断的数字，用位数的奇偶性判断该位数字的奇偶性。
例：第一位个位为1，需要为奇数，第二位百位为2，需要判断为偶数。即，位数与对应的数字奇偶性一致。
