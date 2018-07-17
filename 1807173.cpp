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
