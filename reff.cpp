# include <iostream>
using namespace std;
int main(){
    int a=10;
    int *ptr=&a;
    cout<<ptr<<endl;
    int arr[]={5,8,8,9,2,1,0};
   
    cout<<*arr<<endl;
    cout<<*(arr+1)<<endl;
    
    

    
    

    return 0;
}