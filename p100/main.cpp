// uVA: 100 - The 3n + 1 problem

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF)
    {
        int len = 0;
        int max = 0;
        int i = a;
        int j = b;
        if (a > b)
        {
            int temp = a;
            a = b;
            b = temp;
        }
        for (int k = a; k <= b; k++)
        {
            int n = k;
            len = 1;
            while (n != 1)
            {
                if (n % 2 == 1)
                {
                    n = 3 * n + 1;
                }
                else
                {
                    n = n / 2;
                }
                len++;
            }
            if (len > max)
            {
                max = len;
            }
        }
        cout << i << " " << j << " " << max << endl;
    }
    return 0;
}
