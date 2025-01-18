#include <iostream>
using namespace std;

class Time {
private: 
    int hour;
    int minute;
    int sec;
public:
    void input() {
        cin >> hour >> minute >> sec;
    }
    void output() const { // 使用const保证不会修改对象状态
        cout << hour << "：" << minute << "：" << sec << endl;
    }
};
int main() {
    Time t1; 
    t1.input();
    t1.output(); 
    return 0;
}