/* void main()
��
int i, j, * pi, * pj;     //�˴���*��ʾ����ָ����������Ǽ�������
pi = &i;
pj = &j;
i = 5; j = 7;
cout << i << ��\t�� << j << ��\t�� << pi << ��\t�� << pj;
cout << &i << ��\t�� << *&i << ��\t�� << &j << ��\t�� << *&j;
    }
    */
#include <iostream> // ���iostreamͷ�ļ���ʹ��cout
using namespace std;//�涨�����ռ�
int main() { // main����Ӧ�÷���int����
    int i, j, * pi, * pj; // �������ͱ���i��j���Լ�ָ�����͵�ָ��pi��pj
    pi = &i; 
    pj = &j; 
    i = 5; 
    cout << i << '\t' << j << '\t' << pi << '\t' << pj << endl;
    cout << &i << '\t' << *&i << '\t' << &j << '\t' << *&j << endl;
    return 0; // main��������0����ʾ������������
}