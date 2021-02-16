#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
#include <stdio.h>
int main()
{
	int age = 10;
	
	if (age < 18)
		printf("未成年\n");
	else
	{
		if (age >= 18 && age < 28)
			printf("青年\n");
		else if (age >= 28 && age < 50)
			printf("壮年\n");
		else if (age >= 50 && age < 90)
			printf("老年\n");
		else
			printf("老人\n");
	
	}
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{     
	//什么都不输出
	int a = 0;
	int b = 2;
	if (a == 1)
		if (b == 2)
			printf("hehe\n");
		else
			printf("haha\n");  //else 与它最近的if匹配

	return 0;
}
*/
/*代码1
if (condition) {
	return x; //条件成立执行return x， 条件不成立执行return y，
}
return y;   //执行完return会直接结束程序，所以不会一直返回y
*/
/*代码2
int main()
{
	int num = 4;
	if (num = 5)  //  = 赋值   ==判断相等  可以改成（num == 5）or（5 == num）判断的时候常量放在左边形式更优，更容易发现错误
	{
		printf("hehe\n");
	}

	return 0;
}
*/

/*
#include <stdio.h>
int main()
{
	int digit;
	
	
	for (digit = 1; digit < 101; ++digit)   //输出1-100之间的奇数 
		if (digit % 2 != 0)
			printf("%d\n", digit);  
	/
	int digit = 1;
	while (digit < 101)
	{
		if (digit % 2 != 0)
			printf("%d", i);
		i++;
	}
	//用while循环实现

	//if (digit % 2 != 0)
		//printf("奇数"); //判断一个数是否为奇数


	return 0;
}
*/

//switch语句
/*
int main()
{
	int day = 0;
	scanf("%d", &day);

	switch (day)
	{
	case 1:
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期天\n");
		break;
	}
	return 0;
}
*/
/*
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:   //n = 1 执行case 1
		m++;  // m = 3
	case 2:   //没有break，继续执行case 2
		n++;  // n = 2
	case 3:   //没有break，继续执行case 3
		switch (n)
		{ //switch允许嵌套使用
		case 1:  //不执行 
			n++;
		case 2: // n = 2, 执行case 2
			m++; //m = 4
			n++; //n = 3
			break; //结束的是134行的switch语句
		}//没有break，继续执行case 4
	case 4: 
		m++; //m = 5
		break; //结束的是127行的switch语句
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n);

	return 0;
}
//----------输出结果：m=5; n=3
*/
/*
int main() 
{
	int i = 1;

	while (i < 10) 
	{
		if (i == 5)
			//break; // 永久终止循环；只能终止距离它最近的循环
			continue;//等于5时，直接死循环；终止循环中本次循环continue后面的代码，直接转到while语句的判断部分，进行下一次循环的入口判断
		printf("%d ", i);
		i++;
	}

	return 0;
}
*/
