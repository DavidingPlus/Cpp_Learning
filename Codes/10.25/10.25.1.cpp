#include <iostream>
using namespace std;

//���캯���ĵ��ù���
// 1.����һ����,c++���������ÿ���඼�����������
//Ĭ�Ϲ��� (��ʵ��)
//�������� (��ʵ��)
//�������� (ֵ����)

// 2.
// �������д���вι��캯��,�����������ṩĬ�Ϲ���,��Ȼ�ṩ��������
// �������д�˿������캯��,�������Ͳ����ṩ�������캯��
// �������� > �вι��� > �޲ι��� !!!
class Person
{
public:
    // Person()
    // {
    //     cout << "Person��Ĭ�Ϲ��캯���ĵ���" << endl;
    // }

    Person(int age)
    {
        m_age = age;
        cout << "Person��Ĭ�Ϲ��캯���ĵ���" << endl;
    }

    // Person(const Person &p)
    // {
    //     m_age = p.m_age;
    //     cout << "Person�Ŀ������캯���ĵ���" << endl;
    // }

    ~Person()
    {
        cout << "Person�����������ĵ���" << endl;
    }

    int m_age;
};

void test01()
{
    Person p1 = 18;

    Person p2(p1);

    cout << "p2������Ϊ: " << p2.m_age << endl;
}

void test02()
{
    Person p1(20);

    Person p2(p1);
    cout << "p2������Ϊ: " << p2.m_age << endl;
}

int main()
{
    // test01();
    test02();

    return 0;
}
