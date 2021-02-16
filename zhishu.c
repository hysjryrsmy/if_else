/*判断质数
#include <stdio.h>
int main() {
    printf("2\n");
    int digit;
    int divisor;
    for (digit = 3; digit <= 15; digit += 2) {
        for (divisor = 3; divisor < digit; divisor += 2) {
            if (digit % divisor == 0) {
                break;
            }
        }if (divisor == digit) {
            printf("%d\n", digit);
        }

    }
    return 0;
}
*/

/*判断质数
#include <stdio.h>
int main()
{
    int number;
    scanf_s("%d", &number);

    for (int i = 2; i < number; ++i)
    {
        if (number % i == 0)
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
*/

/*
小于指定值的质数
#include <stdio.h>
int main()
{
    printf("2\n");
    int N;
    scanf_s("%d", &N);

    int digit;
    int divisor;
    for (digit = 3; digit <= N; digit += 2) {
        for (divisor = 3; divisor < digit; divisor += 2) {
            if (digit % divisor == 0) {
                break;
            }
        }if (divisor == digit) {
            printf("%d\n", digit);
        }

    }
    return 0;
}
*/

int main()
{
    //求100以内的素数
    //素数是除了1和本身之外，不存在其他因子的数
    
    //求某个100以内的数是不是素数
    int number;
    scanf("%d", &number);
    
    int index = 2;
    while (index < number) {
        if (number % index == 0)
        {
            printf("不是素数");
            return 0;
        }
        index++;
    }
    printf("是素数");
    return 0;
}