/*if的应用
#include <stdio.h>

int main(void) {

	int age;
	int english_score;


	printf("Please input your age: \n");
	scanf("%d", &age);

	if (age == 18) {
		printf("成年！\n");
	}

	return 0;
}
*/

//用for或者while循环，把1到100之间的数值累加起来

/*
#include <stdio.h>
#include <string.h>

int main() {

	int i = 1;
	int sum = 0;


	while (i < 101) {
		sum += i;
		i++;
	}
	printf("sum = %d\n", sum);

	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int i;          //用于for循环的计数器
	int sum = 0;     //记录1到100的累积值

	for (i = 1; i < 101; ++i)
	{
		sum += i;
	}

	printf("sum = %d\n", sum);

	return 0;
}
*/


 //采用for或者while循环，把用户每次从键盘输入的数值累加起来，如果总和超过了5000，循环结束
/*
#include <stdio.h>

int main()
{
	int times = 0;
	int value = 0;
	int sum = 0;

	for(times = 1; sum < 5000;)
	{
		printf("%请输入数字： ");
		scanf("%d", &value);

		times++;
		sum = sum + value;	
	}
	printf("您一共输入了%d个数据，和为%d。\n", times, sum);

	return 0;
}
*/

/*
#include <stdio.h>

int main() 
{
	int times = 0;//记录用户输入数据的次数
	int value = 0;//用户每次从键盘输入的数据
	int sum = 0;//记录用户输入数据的和

	while (sum < 5000)    //如果sum的值小于5000，进入循环
	{ 

		printf("请输入数字：");//提示用户输入
		scanf("%d", &value);// 接受用户从键盘输入的数据

		times++;  // 用户输入数据的次数自增1
		sum = sum + value;   // 记录用户输入数据的和
	}
	printf("您一共输入了%d个数据，和为%d。\n", times, sum);
	return 0;
}
*/

//采用认为更合适的循环，输出九九乘法表
/*
#include <stdio.h>

int main() 
{
	int i, j;

	for (i = 1; i <= 9; ++i)
	{
		for (j = 1; j <= i; ++j) 
		{
			printf("%d * %d = %-2d   ", j, i, i * j);  //-2d向左对齐
		}

		printf("\n");
	}
	return 0;
}
运行结果：
1 * 1 = 1
1 * 2 = 2    2 * 2 = 4
1 * 3 = 3    2 * 3 = 6    3 * 3 = 9
1 * 4 = 4    2 * 4 = 8    3 * 4 = 12   4 * 4 = 16
1 * 5 = 5    2 * 5 = 10   3 * 5 = 15   4 * 5 = 20   5 * 5 = 25
1 * 6 = 6    2 * 6 = 12   3 * 6 = 18   4 * 6 = 24   5 * 6 = 30   6 * 6 = 36
1 * 7 = 7    2 * 7 = 14   3 * 7 = 21   4 * 7 = 28   5 * 7 = 35   6 * 7 = 42   7 * 7 = 49
1 * 8 = 8    2 * 8 = 16   3 * 8 = 24   4 * 8 = 32   5 * 8 = 40   6 * 8 = 48   7 * 8 = 56   8 * 8 = 64
1 * 9 = 9    2 * 9 = 18   3 * 9 = 27   4 * 9 = 36   5 * 9 = 45   6 * 9 = 54   7 * 9 = 63   8 * 9 = 72   9 * 9 = 81
*/

/*
采用一个while循环，接受键盘输入的整数，如果输入的整数大于100，丢弃；
如果输入的整数小于等100，把每次输入值累加起来，如果输入的整数值为0，跳出循环。
最后显示输入了的有效的数据（大于0小于等于100的数）的个数，并显示有效数据的总和。

#include <stdio.h>
#include <string.h>
int main()
{
	int times = 0;
	int value;
	int sum = 0;

	while (1) {
		printf("请输入一个整数（0-退出）： ");
		scanf("%d", &value);

		if (value == 0)
			break;

		if (value <= 100)
		{
			times++;
			sum = sum + value;
		}

	}
	printf("times = %d, sum = %d\n", times, sum);
	return 0;
}
*/

//采用一个循环，输出0到100之间的偶数。
#include <stdio.h>

int main() 
{
	int i;

	for (i = 0; i < 101; i += 2)

	
	return 0;
}