#include <iostream>
using namespace std;

//������
class Person
{
public:
    Person() {}
    // thisָ��ı��� ��ָ�볣��
    // ָ���ָ���ǲ������޸ĵ� ����ָ���ֵ�ǿ����޸ĵ�
    // const Person* const this
    // �ڳ�Ա���������const,���ε���thisָ��,��ָ��ָ���ֵҲ�������޸�
    void showPerson() const
    {
        this->m_B = 100;
        // this->m_A = 100;
        // this = nullptr; //thisָ�벻�����޸�ָ���ָ���
    }
    int m_A;
    mutable int m_B; //�������,��ʹ�ڳ�������Ҳ����ȥ�޸�,�ӹؼ��� mutable !!!

    void func()
    {
        m_A = 100;
    }
};

void test01()
{
    Person p;
    p.showPerson();
}

//������
void test02()
{
    const Person p; //�ڶ���ǰ��const,��Ϊ������
    // p.m_A = 100;
    p.m_B = 100; // m_B������ֵ,�ڳ�������Ҳ�����޸�

    //������ֻ�ܵ��ó�����
    p.showPerson();
    // p.func(); //�����󲻿��Ե�����ͨ��Ա����,��Ϊ��ͨ��Ա���������޸ĳ�Ա����!
}

int main()
{
    return 0;
}
