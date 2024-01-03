#include <iostream>
using namespace std;
#include <string.h>
//ͨ��ȫ�ֺ�������ӡperson����Ϣ

//��ǰ�ñ�����֪��Person�����
template <typename T1, typename T2>
class Person;
//����ʵ��
template <typename T1, typename T2>
void printPerson2(Person<T1, T2> &p)
{
    cout << "����ʵ��--����: " << p.m_Name << " ����: " << p.m_Age << endl;
}

template <typename T1, typename T2>
class Person
{
    //ȫ�ֺ��� ����ʵ��
    friend void printPerson(Person<T1, T2> &p)
    {
        cout << "����ʵ��--����: " << p.m_Name << " ����: " << p.m_Age << endl;
    }

    //ȫ�ֺ��� ����ʵ��
    //��һ����ģ������б�
    //���ȫ�ֺ���������ʵ��,��Ҫ�ñ�������ǰ֪����������Ĵ���
    friend void printPerson2<>(Person<T1, T2> &p);

public:
    Person(T1 name, T2 age) : m_Name(name), m_Age(age) {}

private:
    T1 m_Name;
    T2 m_Age;
};

// 1.ȫ�ֺ���������ʵ��
void test01()
{
    Person<string, int> p("Tom", 20);
    printPerson(p);
}

// 1.ȫ�ֺ���������ʵ��
void test02()
{
    Person<string, int> p("Jerry", 18);
    printPerson2(p);
}

int main()
{
    // test01();
    test02();

    return 0;
}
