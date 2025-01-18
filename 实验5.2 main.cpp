#include <iostream>
#include "student.h"
int main()
{
    Student stud;                //定义对象
    Student stud1(007, "tcg", 'm');

    stud.set_value(101, "John", 'M');
    stud.display();              //执行stud对象的display函数

    return 0;
}