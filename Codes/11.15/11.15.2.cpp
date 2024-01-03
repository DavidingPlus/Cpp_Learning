#include <iostream>
using namespace std;
#include <string>

//��ģ���뺯��ģ�������

//��ģ��
template <class NameType, class AgeType = int>
// = int ��ָĬ�ϲ�������
class Person
{
public:
    Person(NameType name, AgeType age) : m_Name(name), m_Age(age) {}

    void showPerson()
    {
        cout << "name: " << this->m_Name << endl
             << "age: " << this->m_Age << endl;
    }

public:
    NameType m_Name;
    AgeType m_Age;
};

// 1.��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
void test01()
{
    // Person p("�����", 1000);//����,�޷����Զ������Ƶ�
    Person<string, int> p1("�����", 1000); //��ȷ,ֻ������ʽָ������
    p1.showPerson();
}

// 2.��ģ����ģ������б��п�����Ĭ�ϲ���
//ֻ����ģ�������Ĭ�ϲ���,����ģ�岻����!!!
void test02()
{
    Person<string> p2("��˽�", 999);
    p2.showPerson();
}

int main()
{
    test01();

    return 0;
}
