/*
���ӣ�https://www.nowcoder.com/questionTerminal/bac5a2372e204b2ab04cc437db76dc4f
��Դ��ţ����

ţţ��ǰ����ʦ����õ���һ������������(x, y), ţţ�������Ǿ����Ƕ����ˡ�
����ţţ�ǵ���ʦ���߹���x��y��������n, ����x����y���������ڵ���k��
ţţϣ�����ܰ�������һ���ж��ٸ����ܵ����ԡ�

��������:

�����������������n,k(1 <= n <= 10^5, 0 <= k <= n - 1)��


�������:

����ÿ����������, ���һ����������ʾ���ܵ�����������
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
