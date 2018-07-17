/*
链接：https://www.nowcoder.com/questionTerminal/a22dd98b3d224f2bb89142f8acc2fe57
来源：牛客网

平面内有n个矩形, 第i个矩形的左下角坐标为(x1[i], y1[i]), 右上角坐标为(x2[i], y2[i])。
如果两个或者多个矩形有公共区域则认为它们是相互重叠的(不考虑边界和角落)。
请你计算出平面内重叠矩形数量最多的地方,有多少个矩形相互重叠。

输入描述:

输入包括五行。
第一行包括一个整数n(2 <= n <= 50), 表示矩形的个数。
第二行包括n个整数x1[i](-10^9 <= x1[i] <= 10^9),表示左下角的横坐标。
第三行包括n个整数y1[i](-10^9 <= y1[i] <= 10^9),表示左下角的纵坐标。
第四行包括n个整数x2[i](-10^9 <= x2[i] <= 10^9),表示右上角的横坐标。
第五行包括n个整数y2[i](-10^9 <= y2[i] <= 10^9),表示右上角的纵坐标。


输出描述:

输出一个正整数, 表示最多的地方有多少个矩形相互重叠,如果矩形都不互相重叠,输出1。
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
