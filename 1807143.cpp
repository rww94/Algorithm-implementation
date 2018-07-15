/*
链接：https://www.nowcoder.com/questionTerminal/fc72d3493d7e4be883e931d507352a4a
来源：牛客网

牛牛去犇犇老师家补课，出门的时候面向北方，但是现在他迷路了。虽然他手里有一张地图，但是他需要知道自己面向哪个方向，请你帮帮他。
输入描述:

每个输入包含一个测试用例。
每个测试用例的第一行包含一个正整数，表示转方向的次数N(N<=1000)。
接下来的一行包含一个长度为N的字符串，由L和R组成，L表示向左转，R表示向右转。


输出描述:

输出牛牛最后面向的方向，N表示北，S表示南，E表示东，W表示西。
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

