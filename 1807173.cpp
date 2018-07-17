/*
链接：https://www.nowcoder.com/questionTerminal/bf877f837467488692be703735db84e6
来源：牛客网

牛牛准备参加学校组织的春游, 出发前牛牛准备往背包里装入一些零食, 牛牛的背包容量为w。
牛牛家里一共有n袋零食, 第i袋零食体积为v[i]。
牛牛想知道在总体积不超过背包容量的情况下,他一共有多少种零食放法(总体积为0也算一种放法)。

输入描述:

输入包括两行
第一行为两个正整数n和w(1 <= n <= 30, 1 <= w <= 2 * 10^9),表示零食的数量和背包的容量。
第二行n个正整数v[i](0 <= v[i] <= 10^9),表示每袋零食的体积。


输出描述:

输出一个正整数, 表示牛牛一共有多少种零食放法。
*/
#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
long n,w;
long v[35];
int num = 0;
void dfs(int cont,long sum){
    if(sum>w)
        return;
    else{
        num++;
    }
    for(int i=cont;i<n;i++)
        dfs(i+1,sum+v[i]);
}
int main(){
    cin>>n>>w;
    long t=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        t+=v[i];
    }
    if(t<=w)
        cout<<(long)pow(2,n)<<endl;
    else{
        dfs(0,0);
        cout<<num<<endl;
    }
    return 0;
}

/*
21 1165911996
842104736 130059605 359419358 682646280 378385685 622124412 740110626 814007758 557557315 40153082 542984016 274340808 991565332 765434204 225621097 350652062 714078666 381520025 613885618 64141537 783016950
*/
