/*
���ӣ�https://www.nowcoder.com/questionTerminal/a22dd98b3d224f2bb89142f8acc2fe57
��Դ��ţ����

ƽ������n������, ��i�����ε����½�����Ϊ(x1[i], y1[i]), ���Ͻ�����Ϊ(x2[i], y2[i])��
����������߶�������й�����������Ϊ�������໥�ص���(�����Ǳ߽�ͽ���)��
��������ƽ�����ص������������ĵط�,�ж��ٸ������໥�ص���

��������:

����������С�
��һ�а���һ������n(2 <= n <= 50), ��ʾ���εĸ�����
�ڶ��а���n������x1[i](-10^9 <= x1[i] <= 10^9),��ʾ���½ǵĺ����ꡣ
�����а���n������y1[i](-10^9 <= y1[i] <= 10^9),��ʾ���½ǵ������ꡣ
�����а���n������x2[i](-10^9 <= x2[i] <= 10^9),��ʾ���Ͻǵĺ����ꡣ
�����а���n������y2[i](-10^9 <= y2[i] <= 10^9),��ʾ���Ͻǵ������ꡣ


�������:

���һ��������, ��ʾ���ĵط��ж��ٸ������໥�ص�,������ζ��������ص�,���1��
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    int x1[51],y1[51],x2[51],y2[51];
    int x[110],y[110];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x1[i];
        x[i]=x1[i];
    }
    for(int i=0;i<n;i++){
        cin>>y1[i];
        y[i]=y1[i];
    }
    for(int i=0;i<n;i++){
        cin>>x2[i];
        x[i+n]=x2[i];
    }
    for(int i=0;i<n;i++){
        cin>>y2[i];
        y[i+n]=y2[i];
    }
    int cnt;
    int res=1;
    for(int i=0;i<2*n;i++){
       for(int j=0;j<2*n;j++){
            cnt=0;
            for(int k=0;k<n;k++){
                if(x[i]>x1[k]&&x[i]<=x2[k]&&y[j]>y1[k]&&y[j]<=y2[k])
                    cnt++;
            }
            res = max(cnt,res);
        }
    }
    if(res==1)
        cout<<1<<endl;
    else
        cout<<res<<endl;

    return 0;
}