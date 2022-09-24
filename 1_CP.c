#include <stdio.h>
int polindrome(int n)
{
    int temp, rev = 0, num;
    int count = 0;
    temp = n;
    while (temp)
    {
        temp /= 10;
        count++;
    }
    temp = n % 10;
    if (temp == 0)
    {
        int i, flag = 0, b[count], a[count];
        for (i = count - 1; i >= 0; i--)
        {
            a[i] = n % 10;
            n = n / 10;
        }
        for (i = 0; i < count; i++)
        {
            b[i] = n % 10;
            n = n / 10;
        }
        for (i = 0; i < count; i++)
        {
            if (a[i] != b[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            return 0;
        else
            return 1;
    }
    else
    {
        num = n;
        while (n)
        {
            temp = n % 10;
            rev = rev * 10 + temp;
            n /= 10;
        }
        if (rev == num)
            return 1;
        else
            return 0;
    }
}
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("false");
        return 0;
    }
    if (polindrome(n))
        printf("true");
    else
        printf("false");
    return 0;
}