#include <iostream>
using namespace std;
#include <string.h>

//��һ�ֽ����ʽ,ֱ�Ӱ��� Դ�ļ�
// #include "person.cpp"

//�ڶ��ֽ����ʽ,��.h��.cpp�е�����д��һ��,����׺����Ϊ.hpp�ļ�
#include "person.hpp"

//��ģ��ķ��ļ���д�����Լ����
// template <typename T1, typename T2>
// class Person
// {
// public:
//     Person(T1 name, T2 age);

//     T1 m_Name;
//     T2 m_Age;

//     void showPerson();
// };

// template <typename T1, typename T2>
// Person<T1, T2>::Person(T1 name, T2 age)
// {
//     this->m_Age = age;
//     this->m_Name = name;
// }

// template <typename T1, typename T2>
// void Person<T1, T2>::showPerson()
// {
//     cout << "����: " << this->m_Name << " ����: " << this->m_Age << endl;
// }

void test01()
{
    Person<string, int> p("Jerry", 18);
    p.showPerson();
}

int main()
{
    test01();

    return 0;
}
