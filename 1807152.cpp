#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    long long x,y;
    long long num;
    long long a,b,c;
    long long res=0;
    for(x=k+1;x<=n;x++){
        a=b=0;
        num=x-k;
        a=n/x*num;
        b=n%x;
        c=b-k+1>0?(b-k+1):0;
        res+=(a+c);
    }
    if(k==0)res-=n;
    cout<<res<<endl;
    return 0;
}
