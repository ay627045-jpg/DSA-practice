# include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=7;
    int *p=&a;
    int *q=&b;
    cout<<*p+*q<<endl;
    return 0;
}