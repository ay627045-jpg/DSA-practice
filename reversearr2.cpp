# include<iostream>
using namespace std;
void printArr(int*arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ,";
    }
}
int main(){
    int arr[]={4,7,8,5,9,6};
    int n=sizeof(arr)/sizeof(int);
    int start=0;
    int end=n-1; 
    while(start<end){
        int temp=arr[start];/*these three line work same as a swap*/
        arr[start]=arr[end];
        arr[end]=temp;
        // swap(arr[start],arr[end]);
        start++;
        end--;  

    }   
    printArr(arr,n);
  return 0;
}