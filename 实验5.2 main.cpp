#include <iostream>
#include "student.h"
int main()
{
    Student stud;                //�������
    Student stud1(007, "tcg", 'm');

    stud.set_value(101, "John", 'M');
    stud.display();              //ִ��stud�����display����

    return 0;
}