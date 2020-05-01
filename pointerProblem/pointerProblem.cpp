#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
void update(int *a,int *b) {
    int sum,dif;
    sum=*a+*b;
    dif= abs(*a-*b);
    printf("%d\n%d", sum, dif);

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);


    return 0;
}
