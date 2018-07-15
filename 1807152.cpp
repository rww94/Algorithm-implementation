/*
链接：https://www.nowcoder.com/questionTerminal/bac5a2372e204b2ab04cc437db76dc4f
来源：牛客网

牛牛以前在老师那里得到了一个正整数数对(x, y), 牛牛忘记他们具体是多少了。
但是牛牛记得老师告诉过他x和y均不大于n, 并且x除以y的余数大于等于k。
牛牛希望你能帮他计算一共有多少个可能的数对。

输入描述:

输入包括两个正整数n,k(1 <= n <= 10^5, 0 <= k <= n - 1)。


输出描述:

对于每个测试用例, 输出一个正整数表示可能的数对数量。
*/
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
