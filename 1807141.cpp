/*
���ӣ�https://www.nowcoder.com/questionTerminal/46e837a4ea9144f5ad2021658cb54c4d
��Դ��ţ����
Ϊ���ҵ��Լ�����Ĺ�����ţţ�ռ���ÿ�ֹ������ѶȺͱ��ꡣ
ţţѡ�����ı�׼�����ѶȲ�������������ֵ������£�ţţѡ�񱨳���ߵĹ�����
��ţţѡ�����Լ��Ĺ�����ţţ��С���������ţţ��æѡ������ţţ��Ȼʹ���Լ��ı�׼������С����ǡ�
ţţ��С���̫���ˣ�������ֻ�ð�������񽻸����㡣

���ӣ�https://www.nowcoder.com/questionTerminal/46e837a4ea9144f5ad2021658cb54c4d
��Դ��ţ����

��������:

ÿ���������һ������������
ÿ�����������ĵ�һ�а����������������ֱ��ʾ����������N(N<=100000)��С��������M(M<=100000)��
��������N��ÿ�а����������������ֱ��ʾ��������Ѷ�Di(Di<=1000000000)�ͱ���Pi(Pi<=1000000000)��
��������һ�а���M�����������ֱ��ʾM��С��������ֵAi(Ai<=1000000000)��
��֤������������ı�����ͬ��

�������:

����ÿ��С��飬�ڵ�����һ�����һ����������ʾ���ܵõ�����߱��ꡣһ���������Ա������ѡ��
*/
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<map>
using namespace std;

int main(){
    int a[200001];
    int b[100000];
    int n,m;
    cin>>n>>m;
    map<int,int> works;
    int D,P;
    for(int i=0;i<n;i++){
        cin>>D>>P;
        works[D]=P;
        a[i]=D;
    }
    int ai=0;
    for(int i=0;i<m;i++){
        cin>>ai;
        a[i+n]=ai;
        b[i]=ai;
        if(works.find(ai)==works.end())
            works[ai]=0;
    }
    sort(a,a+m+n);
    int ma=0;
    for(int i=0;i<n+m;i++){
        ma=max(ma,works[a[i]]);
        works[a[i]]=ma;
    }
    for(int i=0;i<m;i++){
        cout<<works[b[i]]<<endl;
    }
    return 0;
}
