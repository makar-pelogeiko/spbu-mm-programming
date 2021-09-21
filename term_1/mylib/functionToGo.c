#include "functionToGo.h"


char stringOfAgainInput[80] = "try again";

long long wholep(double dividend, double divisor) // only for numbers >0)
{
    long long i=0;
    while (dividend - divisor > 0)
    {
        dividend -= divisor;
        ++i;
    }
    return i;
}

double reminder(double dividend, double divisor) // only for numbers >0
{
    while (dividend - divisor > 0)
    {
        dividend -= divisor;
    }
    return dividend;
}

long long gcd(long long x, long long y)
{
    long long d = 1;
    if (x < y)
    {
        d = y; y = x; x = d;
    }
    while (d)
    {
        d = x % y;
        x = y;
        y = d;
    }
    return x;
}


double saveIn()
{
    double a = 0, delim = 1;
    char c = '\0';
    int first = 1, sign = 1, goodset = 1, less1 = 0;

    do
    {
        a = 0; delim = 1;
        c = '\0';
        first = 1; sign = 1; goodset = 1; less1 = 0;
        while ((c != ' ') && (c != '\n') && goodset)
        {
            scanf("%c", &c);
            if (first)
            {
                first = 0;
                if (c == '-')
                {
                    sign = -1; continue;
                }
                if ((c >= '0') && (c <= '9'))
                {
                    a = c - '0'; continue;
                }

                goodset = 0;
                break;
            }

            if (c == '.')
            {
                less1 = 1; continue;
            }

            if ((c >= '0') && (c <='9') && !less1)
            {
                a = a * 10 + c - '0';
                continue;
            }

            if ((c >= '0') && (c <='9') && less1)
            {
                delim = delim * 10;
                a = a + (double)(( c - '0' )) / delim;
                continue;
            }
            if ((c != ' ') && (c != '\n'))
            {
                goodset = 0;  break;
            }
        }
        a = a * sign;
        if (!goodset)
        {
            printf("%s\n", stringOfAgainInput);
            c = '\0';
            while(c != '\n')
                scanf("%c", &c);
        }
    }
    while (goodset != 1);
    return a;
}

long long saveInInt()
{
    long long a = 0;
    char c = '\0';
    int first = 1, sign = 1, goodset = 1;

    do
    {
        a = 0;
        c = '\0';
        first = 1; sign = 1; goodset = 1;
        while ((c != ' ') && (c != '\n') && goodset)
        {
            scanf("%c", &c);
            if (first)
            {
                first = 0;
                if (c == '-')
                {
                    sign = -1; continue;
                }
                if ((c >= '0') && (c <= '9'))
                {
                    a = c-'0'; continue;
                }

                goodset = 0;
                break;
            }

            if ((c >= '0') && (c <= '9'))
            {
                a = a * 10 + c - '0';
                continue;
            }

            if ((c != ' ') && (c != '\n'))
            {
                goodset = 0;  break;
            }
        }
        a = a * sign;
        if(!goodset)
        {
            printf("%s\n",stringOfAgainInput);
            c = '\0';
            while (c != '\n')
                scanf("%c",&c);
        }
    }
    while (goodset != 1);
    return a;
}

void changeAgainInputText(const char *str)
{
    for (register int i = 0; i < 80; ++i)
        stringOfAgainInput[i] = str[i];
}
