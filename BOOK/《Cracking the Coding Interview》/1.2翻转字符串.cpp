﻿

// 数组与字符串


// __________________________ 1.2 __________________________
/*
	用C或C++ 实现 void reverse(char* str)函数，既反转一个null结尾的字符串。
*/

// __________________________ 解决思路 __________________________
/*
思路1：不用分配内存，直接就地反转字符串，另外，还要注意 null 字符。、
	使用2个指针，一个指向头节点，一个指向尾节点。
*/


// __________________________ 实现细节 __________________________

// 第1种方案：用2个指针就地反转__________________________
void swap( char &a, char &b)
{
	char c = a;
	a = b;
	b = c;
}

// 计算字符串长度的版本
void reverse1( char* str )
{
	int len = strlen(str);
 	for(int i = 0; i < len/2 ; ++i)
 	{
 		swap( str[i],str[len-1-i] );
 	}
}

// 不计算字符串长度的版本
void reverse2( char* str)
{
	char *p = str,*q = str;
	while(*p)
	{
		++p;
	}
	--p;

	while( q < p )
	{
		swap(*q++,*p--);
	}
}

// 
// 
