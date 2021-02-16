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

//switch语句 (可以有if语句，不能有continue)
/*
int main()
{
	int day = 0;
	scanf("%d", &day);

	switch (day)  // switch必须是整形表达式
	{
	case 1:      // case必须是整形常量表达式
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
//switch简便方式  
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	default:
		printf("输入错误\n");
		break;
	}
*/
