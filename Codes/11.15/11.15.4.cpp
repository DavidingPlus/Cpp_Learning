#include <iostream>
using namespace std;
#include <string.h>

//��ģ��Ķ�������������
template <typename T1, typename T2>
class Person
{
public:
    Person(T1 name, T2 age) : m_Name(name), m_Age(age) {}

    T1 m_Name;
    T2 m_Age;

    void showPerson()
    {
        cout << "����: " << this->m_Name << endl
             << "����: " << this->m_Age << endl;
    }
};

// 1.ָ�����������
void printPerson1(Person<string, int> &p)
{
    p.showPerson();
}

void test01()
{
    Person<string, int> p("�����", 100);
    printPerson1(p);
}

// 2.����ģ�廯
template <typename T1, typename T2>
void printPerson2(Person<T1, T2> &p)
{
    p.showPerson();
    cout << "T1������Ϊ: " << typeid(T1).name() << endl;
    cout << "T2������Ϊ: " << typeid(T2).name() << endl;
}

void test02()
{
    Person<string, int> p("��˽�", 90);
    printPerson2(p);
}

// 3.������ģ�廯
template <typename T>
void printPerson3(T &p)
{
    p.showPerson();
    cout << "T������Ϊ: " << typeid(T).name() << endl;
}

void test03()
{
    Person<string, int> p("��ɮ", 30);
    printPerson3(p);
}

int main()
{
    // test01();
    // test02();
    test03();

    return 0;
}
