/*
СQ�õ�һ�����������: 1, 12, 123,...12345678910,1234567891011...��
����СQ�����ܷ�3����������ʺܸ���Ȥ��
СQ����ϣ�����ܰ�������һ�´����еĵ�l������r��(�����˵�)�ж��ٸ������Ա�3������
��������:

���������������l��r(1 <= l <= r <= 1e9), ��ʾҪ�����������ˡ�
�������:

���һ������, ��ʾ�������ܱ�3���������ָ�����
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
