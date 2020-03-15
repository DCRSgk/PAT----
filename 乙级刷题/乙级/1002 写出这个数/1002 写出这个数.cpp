#include<iostream>//先转换成字符串
#include<stack>   //再调用栈来进行存储
using namespace std;
int main() {
    string str;
    int sum = 0, tmp;
    bool start = true;
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        sum += (str[i] - '0');
    }
    stack<int> st;
    while (sum != 0) {
        st.push(sum % 10);
        sum /= 10;
    }
    while (!st.empty()) {
        if (start) start = false;
        else {
            cout << " ";
        }
        tmp = st.top();
        st.pop();//弹栈判断
        switch (tmp) {
        case 0:cout << "ling"; break;
        case 1:cout << "yi"; break;
        case 2:cout << "er"; break;
        case 3:cout << "san"; break;
        case 4:cout << "si"; break;
        case 5:cout << "wu"; break;
        case 6:cout << "liu"; break;
        case 7:cout << "qi"; break;
        case 8:cout << "ba"; break;
        case 9:cout << "jiu"; break;
        }
    }
    return 0;
}