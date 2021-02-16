#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
//	int ch = 0;
//	//ctrl+z 结束循环
//	//EOF - end of file
//	while (ch = getchar() != EOF)
//	{
//		putchar(ch);	
//	}
//	//putchar(ch); //打印字符
//	//printf("%c\n", ch);
	//int ret = 0;
	//int ch = 0;
	//char password[20] = {0};
	//printf("请输入密码:>");
	//scanf("%s", password); //输入密码，并存放在password数组中
	////缓冲区还剩余一个‘\n’
	////读取一下‘\n’
	//while ((ch = getchar()) != '\n')
	//{
	//	;
	//}

	//printf("请确认（Y/N）:>");
	//ret = getchar(); //Y/N
	//if (ret == 'Y')
	//	printf("确认成功\n");
	//else
	//	printf("放弃确认\n");

	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9') //只打印0到9之间的字符
			continue;
		putchar(ch);//如果在0到9之间输出

	}

	return 0;
}
