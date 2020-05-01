#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int result;
    if((a>b)&& (c>d))
    {
       if(a>c)
       {
           result=a;
           printf("%d",result);


       }
       else
       {
           result=c;
           printf("%d",result);


       }
    }
    else if ((b>a)&& (c>d))
    {
        if(b>c)
        {
            result=b;
            printf("%d",result);


        }
        else
        {
            result=c;
            printf("%d",result);


        }

    }
    else if ((a>b)&& (d>c))
    {
        if(a>d)
        {
            result=a;
            printf("%d",result);


        }
        else
        {
            result=d;
            printf("%d",result);


        }
    }
    else if ((b>a)&& (d>c))
    {
        if(b>d)
        {
            result =b;
            printf("%d",result);


        }
        else
        {
            result=d;
            printf("%d",result);


        }
    }
    return 0;//if a non-void function is declared then return 0 is must ,without this u will see return type error in hackerrank//
}
int main()
{
    int p,q,r,s;
    scanf("%d %d %d %d", &p, &q, &r, &s);
    int ans = max_of_four(p,q,r,s);
    //printf("%d", ans);

    return 0;

}

