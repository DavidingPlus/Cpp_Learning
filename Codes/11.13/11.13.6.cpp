#include <iostream>
#include <string.h>
using namespace std;

//ģ��ľ�����
//ģ�岢�������ܵ�,��Щ�ض���������,��Ҫ�þ��廯��ʽ������ʵ��

class Person
{
public:
    Person(string name, int age) : m_Name(name), m_Age(age) {}

    // bool operator==(Person &p)
    // {
    //     if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
    //         return true;
    //     else
    //         return false;
    // }

    //����
    string m_Name;
    //����
    int m_Age;
};

//�Ա����������Ƿ���Ⱥ���
template <typename T>
bool myCompare(T &a, decltype(a) &b)
{
    if (a == b)
        return true;
    else
        return false;
}

//���þ��廯Person�İ汾��ʵ�ִ���,���廯���ȵ���
template <>
bool myCompare(Person &p1, decltype(p1) &p2)
{
    if (p1.m_Age == p2.m_Age && p1.m_Name == p2.m_Name)
        return true;
    else
        return false;
}

void test01()
{
    int a = 10, b = 20;
    bool ret = myCompare(a, b);
    if (ret)
        cout << "a == b" << endl;
    else
        cout << "a != b" << endl;
}

void test02()
{
    Person p1("Tom", 10);
    Person p2("Tom", 10);
    //�Զ����������ͣ����������ͨ�ĺ���ģ��
    //���Դ������廯��Person�������͵�ģ�壬�������⴦���������
    bool ret = myCompare(p1, p2);
    if (ret)
    {
        cout << "p1 == p2 " << endl;
    }
    else
    {
        cout << "p1 != p2 " << endl;
    }
}

int main()
{
    // test01();
    test02();

    return 0;
}
