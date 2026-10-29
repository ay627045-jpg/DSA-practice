# include <iostream>
using namespace std;
void printArr( int num[],int n){
    for (int i=0;i<n;i++){
        cout<<num[i]<<" ";  
    }
    cout<<endl;
}
int main(){
    int arr[]={2,8,9,6,5,3};
    int n=sizeof(arr)/sizeof(int);
    cout<<"array size="<<sizeof(arr)<<endl;
    printArr(arr ,n);
    return 0;
}