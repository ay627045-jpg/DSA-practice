# include <iostream>
using namespace std;
int sum(int a,int b){ //a and b are parameter
   int sum=a+b;
    return sum; }
    int diff(int a,int b){ //a and b are parameter
   int diff=a-b;
    return diff;
}
int main()
    {
       int s = sum(4,5);//4,5 atre srgument
        cout<<"sum="<<s<<endl; 
        int d= diff(4,5);//4,5 atre srgument
        cout<<"diff="<<d<<endl;
        return 0;
    }
