/*
小Q得到一个神奇的数列: 1, 12, 123,...12345678910,1234567891011...。
并且小Q对于能否被3整除这个性质很感兴趣。
小Q现在希望你能帮他计算一下从数列的第l个到第r个(包含端点)有多少个数可以被3整除。
输入描述:

输入包括两个整数l和r(1 <= l <= r <= 1e9), 表示要求解的区间两端。
输出描述:

输出一个整数, 表示区间内能被3整除的数字个数。
*/
#include<iostream>
using namespace std;
int slove(int n){
    int a,b;
    a=n/3*2;
    b=0;
    if(n%3!=0)
        b=n%3-1;
    return a+b;
}
bool p(int n){
    int f=n%3;
    if(f==1)
        return false;
    else
       return true;
}
int main(){
    int l,r;
    cin>>l>>r;
    int sum;
    if(p(l))
        sum=slove(r)-slove(l)+1;
    else
        sum=slove(r)-slove(l);
    cout<<sum<<endl;
    return 0;
}
