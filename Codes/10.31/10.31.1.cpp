#include <iostream>
using namespace std;

//��ֵ���������

class Person
{
public:
    Person(int age)
    {
        m_Age = new int(age);
    }

    ~Person()
    {
        if (m_Age)
        {
            delete m_Age;
            m_Age = nullptr;
        }
    }

    //���� ��ֵ�����
    Person &operator=(Person &p)
    //��������!!!!��Ҫ����ֵ,����ֵ���½���һ������!!!!!
    {
        //���������ṩǳ����
        // this->m_Age = p.m_Age;

        //Ӧ�����ж��Ƿ��������ڶ���,�����,���ͷŸɾ�,�����
        if (m_Age)
        {
            delete m_Age;
            m_Age = nullptr;
        }
        //���
        this->m_Age = new int(*p.m_Age);
        return *this;
    }

    int *m_Age;
};

void test01()
{
    Person p1(18), p2(20), p3(30);

    p3 = p2 = p1; //��ֵ����

    cout << "p1������Ϊ: " << *p1.m_Age << endl
         << "p2������Ϊ: " << *p2.m_Age << endl
         << "p3������Ϊ: " << *p3.m_Age << endl;
}

int main()
{
    test01();

    return 0;
}
