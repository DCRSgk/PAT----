
#include <iostream>
using namespace std;
int main()
{
    double Open, High, Low, Close;
    cin>>Open>>High>>Low>>Close;
    if(Open > Close) //��ȷ����������
    {
        cout<<"BW-Solid";
    }
    else if(Open < Close) 
    {
        cout<<"R-Hollow";
    }
    else 
    {
        cout<<"R-Cross";
    }
    if (Low < Open && Low < Close && High > Open && High > Close) //�����ų����ж�Ӱ�� 
    {
    cout<<" with Lower Shadow and Upper Shadow";
    }
    else if(Low < Open && Low < Close)
    {
        cout<<" with Lower Shadow";
    }
    else if (High > Open && High > Close) 
    {
        cout<<" with Upper Shadow";
    }
    return 0;
}