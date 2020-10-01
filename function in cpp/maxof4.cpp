#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
        
    return (((a>b)&&(a>c)&&(a>d))?a:(((b>a)&&(b>c)&&(b>d))?b:(((c>a)&&(c>b)&&(c>d))?c:d)));//here I use the ternary operator to optomize the code
    /* syntax of ternary operator: 
        variable = Expression1 ? Expression2 : Expression3

        or 
        It can be visualized into if-else statement as:
        if(Expression1)
        {
            variable = Expression2;
        }
        else
        {
            variable = Expression3;
        }
    */
}
int main()
{
    int p,q,r,s;
    scanf("%d %d %d %d", &p, &q, &r, &s);
    int ans = max_of_four(p,q,r,s);
    //printf("%d", ans);
    cout << ans;

    return 0;

}
