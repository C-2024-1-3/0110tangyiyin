#include <iostream>
using namespace std;
int main() {
    int arr[10];
    int count = 0;
    int num;
    cout << "请输入 10 个数：" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> num;
        bool Unique = true;
        for (int j = 0; j < count; j++) {
            if (arr[j] == num) {
                Unique = false;
                break;
            }
        }
        if (Unique) {
            arr[count++] = num;
        }
    }
    cout << "其中不同的数为：" << endl;
    for (int i = 0; i < count; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}