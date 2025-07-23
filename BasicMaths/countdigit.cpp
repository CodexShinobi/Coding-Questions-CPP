#include<iostream>
#include<cmath>
using namespace std;


int countDigits(int n){
    int cnt=(int)(log10(n)+1);

    return cnt;
    int count=0;
    while(n>0)
    {
        cnt=cnt+1;
        n=n/10;
    }
}
int main(){
    int N=329823;
    cout<<"N"<<endl;
    int digits=countDigits(N);
    cout<<" "<<digits<<endl;
    return 0;
}