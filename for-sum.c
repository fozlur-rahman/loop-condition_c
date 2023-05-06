// #include <stdio.h>
// int main()
// {
//     int i;
//     int sum = 0;
//     for (i = 0; i <= 5; i++)
//         sum += i;
//     {

//         printf("%d\n", sum);
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{

    int i;
    int n;
    long long int sum = 0;
    scanf("%lld", &n);
    for (i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("%lld", sum);
    return 0;
}