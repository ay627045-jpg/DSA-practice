# include<iostream>
using namespace std;

int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact*=i;
    }
    return fact;
}
int bincoff(int n,int r){
    int value1=factorial(n);
    int value2=factorial(r);
    int value3=factorial(n-r);
    int result=value1/(value2*value3);
    return result;
}
int main(){
cout<<bincoff(4,2)<<endl;
return 0;
}