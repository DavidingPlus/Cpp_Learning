#include <iostream>
using namespace std;

//�����ǳ����
class Person
{
public:
    Person()
    {
        cout << "Person��Ĭ�Ϲ��캯������" << endl;
    }

    Person(int age, int height)
    {
        m_Height = new int(height);
        m_age = age;
        cout << "Person���вι��캯������" << endl;
    }

    //�Լ�ʵ��һ���������캯�� ���ǳ��������������
    Person(const Person &p)
    {
        cout << "Person�Ŀ������캯������" << endl;
        m_age = p.m_age;
        // m_Height=p.m_Height; //������Ĭ��ʵ�־������д���
        //����ǳ����,p1,p2���ͷ�ʱ����ָ��ͬһ���ռ�,�ᱻ�ͷ�����,����ִ���!!!

        //������� ����ָ����һ�������ռ�
        m_Height = new int(*p.m_Height);
    }

    ~Person()
    {
        //��������,�����������������ͷŲ���
        if (m_Height)
        {
            delete m_Height;
            m_Height = nullptr;
        }

        cout << "Person��������������" << endl;
    }

    int m_age;     //����
    int *m_Height; //���
};

void test01()
{
    Person p1(18, 160);
    cout << "p1������Ϊ: " << p1.m_age << " ���Ϊ: " << *p1.m_Height << endl;

    Person p2(p1);
    cout << "p2������Ϊ: " << p2.m_age << " ���Ϊ: " << *p2.m_Height << endl;
}

//����������ڶ������ٵ�,һ��Ҫ�Լ��ṩ�������캯��,��ֹǳ��������������
int main()
{
    test01();

    return 0;
}
