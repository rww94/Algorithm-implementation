/*
���ӣ�https://www.nowcoder.com/questionTerminal/fc72d3493d7e4be883e931d507352a4a
��Դ��ţ����

ţţȥ�Ġ���ʦ�Ҳ��Σ����ŵ�ʱ�����򱱷���������������·�ˡ���Ȼ��������һ�ŵ�ͼ����������Ҫ֪���Լ������ĸ���������������
��������:

ÿ���������һ������������
ÿ�����������ĵ�һ�а���һ������������ʾת����Ĵ���N(N<=1000)��
��������һ�а���һ������ΪN���ַ�������L��R��ɣ�L��ʾ����ת��R��ʾ����ת��


�������:

���ţţ�������ķ���N��ʾ����S��ʾ�ϣ�E��ʾ����W��ʾ����
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int N;
    char res[4]={'N','W','S','E'};
    char turn[10001];
    cin>>N;
    int num=0;
    for(int i=0;i<N;i++){
        cin>>turn[i];
        if(turn[i]=='L')
            num++;
        else
            num--;
    }
    int f=num%4>=0?num%4:num%4+4;
    cout<<res[f]<<endl;
    return 0;
}

