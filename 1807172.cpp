/*
���ӣ�https://www.nowcoder.com/questionTerminal/9173e83d1774462f81255a26feafd7c6
��Դ��ţ����

ţţ����˯��ͷ�����������˺ܶ����ӣ�ֻ�����������ʱ�����Ż��ѹ������Ҿ������𴲡���������������ҪX���ӵ�����ң��Ͽ�ʱ��Ϊ�����AʱB�֣��������������ʲôʱ����
��������:

ÿ���������һ������������
ÿ�����������ĵ�һ�а���һ������������ʾ���ӵ�����N(N<=100)��
��������N��ÿ�а���������������ʾ������������ʱ��ΪHi(0<=A<24)ʱMi(0<=B<60)�֡�
��������һ�а���һ����������ʾ������������ҪX(0<=X<=100)���ӵ�����ҡ�
��������һ�а���������������ʾ�Ͽ�ʱ��ΪA(0<=A<24)ʱB(0<=B<60)�֡�
���ݱ�֤������һ�����ӿ�����ţţ��ʱ������ҡ�


�������:

�������������ʾţţ������ʱ�䡣
ʾ��1
����

3
5 0
6 0
7 0
59
6 59
���

6 0
*/
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
struct Clock{
    int A;
    int B;
};
bool cmp(Clock a,Clock b){
    if(a.A==b.A)
        return a.B>b.B;
    else
        return a.A>b.A;
}
int main(){
    int n;
    int timeX;
    int a,b;
    cin>>n;
    Clock cs[110];
    Clock cl;
    for(int i=0;i<n;i++)
        cin>>cs[i].A>>cs[i].B;
    cin>>timeX;
    cin>>cl.A>>cl.B;
    sort(cs,cs+n,cmp);
    a = timeX/60;
    b = timeX%60;
    a = cl.A - a;
    b = cl.B - b;
    for(int i=0;i<n;i++){
        if(cs[i].A<=a&&cs[i].B<=b){
            cout<<cs[i].A<<" "<<cs[i].B<<endl;
            break;
        }
        if(cs[i].A<a){
            cout<<cs[i].A<<" "<<cs[i].B<<endl;
            break;
        }
    }
    return 0;
}
