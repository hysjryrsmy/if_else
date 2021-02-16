#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
	//int i;
	//   初始化   判断   调整
	//for (i = 1; i < 11; i++)  
	//{
	//	if (i == 5)
	//		break;  // 打印结果为1 2 3 4 
	//		//continue;  //打印结果为1 2 3 4 6 7 8 9
	//	printf("%d\n", i); 
	//}


//	int i = 1;    //初始化
//	while (i < 11)   //判断
//	{
//		if (i == 5)
//			continue;   //打印结果：1 2 3 4 进入死循环
//		printf("%d", i);
//		i++;   //调整
//	}

//int main() 
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);  //运行结果： 1 2 3 4进入死循环
//	return 0;
//}


	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//int i = 0;
	//for (i = 0; i < 10; i++) 
	//{
	//	printf("%d\n", arr[i]);
	//}
//	return 0;
//}

//1.for循环的初始化、调整、判断都可以省略， 但是 	
//2.for循环的判断部分如果被省略，那判断条件就是：恒为正 ，死循环

//int main() 
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++) //k不管输入多少，k = 0都为假不进行循环 ，所以循环0次
//		k++;
//	return 0;
//}

//int main() 
//{    //计算n的阶乘
//	int n = 1;
//	int ret = 1;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; ++i) 
//	{
//		ret = ret * i;
//	}
//	printf("ret = %d\n", ret);
//	return 0;
//}

//int main()
//{//计算1！+2！+3！+......+10！
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		/*ret = 1;
//		for (i = 1; i <= n; ++i) 
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;*/
//		//简便算法
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("sum = %d\n",sum);
//
//
//	return 0;
//}

//在一个有序数组中查找具体的某个数字n，编写int binsearch（int x,int v[],int n）;
//功能：在v[0]<=v[1]<=v[2]<=....<=v[n-1]的数组中查找x

int main() 
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	//写一个代码，在arr数组（有序的）中找到7


	return 0;
}








//编写代码，演示多个字符从两端移动，向中间汇聚。













//编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则提示登录成功，如果三次均输入错误，则退出程序）