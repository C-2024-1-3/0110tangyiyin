/* void main()
｛
int i, j, * pi, * pj;     //此处的*表示定义指针变量，而非间接运算符
pi = &i;
pj = &j;
i = 5; j = 7;
cout << i << ’\t’ << j << ’\t’ << pi << ’\t’ << pj;
cout << &i << ’\t’ << *&i << ’\t’ << &j << ’\t’ << *&j;
    }
    */
#include <iostream> // 添加iostream头文件以使用cout
using namespace std;//规定命名空间
int main() { // main函数应该返回int类型
    int i, j, * pi, * pj; // 定义整型变量i和j，以及指向整型的指针pi和pj
    pi = &i; 
    pj = &j; 
    i = 5; 
    cout << i << '\t' << j << '\t' << pi << '\t' << pj << endl;
    cout << &i << '\t' << *&i << '\t' << &j << '\t' << *&j << endl;
    return 0; // main函数返回0，表示程序正常结束
}