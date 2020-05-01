#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
	cin>>a>>b;
    int len_a=a.size();
    int len_b=b.size();
    cout<<len_a<<" "<<len_b<<"\n";
    string concat=a+b;
    cout<<concat<<"\n";
    char swapp=a[0];
    a[0]=b[0];
    b[0]=swapp;
    cout<<a<<" "<<b;


    return 0;
}
