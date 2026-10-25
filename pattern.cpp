# include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your n ";
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int J=1;J<=i;J++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}