# include <iostream>
using namespace std;
void bintodec(int binNum){
    int n=binNum;
    int decNum=0;
    int pow=1;
    while(n>0){
        int LastDig =n%10;
        decNum +=LastDig*pow;
        pow=pow*2;
        n=n/10;

    }
    cout<<decNum<<endl;

}
int main(){
    bintodec(100101);
    return 0;
}