#include <iostream>
#include <stdio.h>
using namespace std;
void swapcount(int *arr,int n)
{
    int count=0;
    for (int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                count++;
            }
        }
    }
    cout<<"Array is sorted in "<<count++<<" swaps.\n";

}
#define Max_size 600
int main()
{
    int n,i, arr[Max_size];
    cin>>n;
    for(i=0;i<n;i++)
    {
        scanf("%d", arr + i);
    }
    swapcount(arr,n);
    /*for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }*/
    cout<<"First Element: "<<arr[0]<<"\n";
    cout<<"Last Element: "<<arr[n-1]<<"\n";
    return 0;
}
