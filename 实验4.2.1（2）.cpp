/*int main()   //C���Գ���Ҫ�˽�
{
    int a[] = { 1,2,3 };
    int* p, i;
    p = a;    //������a�׵�ַ�͸�p
    for (i = 0; i < 3; i++)
        printf("%d,%d,%d,%d\n", a[i], p[i], *(p + i), *(a + i));  //��cout���ܲ��
}*/
#include <iostream>
using namespace std;
int main()
{
    int a[] = { 1, 2, 3 };
    int* p, i;
    p = a;    //������ a �׵�ַ�͸� p
    for (i = 0; i < 3; i++)
        cout << a[i] << "," << p[i] << "," << *(p + i) << "," << *(a + i) << endl;
    return 0;
}