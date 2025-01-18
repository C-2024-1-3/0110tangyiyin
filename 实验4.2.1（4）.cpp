#include <iostream>
using namespace std;
int* f() {
    int* list = new int[4] {1, 2, 3, 4};
    return list;
}
int main() {
    // 从函数f中获取动态分配的数组的地址
    int* p = f();
    cout << p[0] << endl; 
    cout << p[1] << endl;
    // 使用delete[]释放动态分配的数组内存
    delete[] p;
    return 0;
}