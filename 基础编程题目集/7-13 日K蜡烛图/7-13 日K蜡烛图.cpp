
#include <iostream>
using namespace std;
int main()
{
    double Open, High, Low, Close;
    cin>>Open>>High>>Low>>Close;
    if(Open > Close) //先确定蜡烛类型
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
    if (Low < Open && Low < Close && High > Open && High > Close) //再用排除法判断影线 
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