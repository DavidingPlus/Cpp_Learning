#include <iostream>
#include <string.h>
using namespace std;

//�������Ϊ���Ա
//�ֻ���
class Phone
{
public:
    Phone(string PName) : m_PName(PName)
    {
        cout << "Phone���캯���ĵ���" << endl;
    } //�ó�ʼ���б���г�ʼ��

    ~Phone()
    {
        cout << "Phone���������ĵ���" << endl;
    }
    //�ֻ�Ʒ������
    string m_PName;
};

class Person
{
public:
    // Phone m_Phone=PName ��ʽת����
    Person(string Name, string PName) : m_Name(Name), m_Phone(PName)
    {
        cout << "Person���캯���ĵ���" << endl;
    }

    ~Person()
    {
        cout << "Person���������ĵ���" << endl;
    }
    //����
    string m_Name;
    //�ֻ�
    Phone m_Phone;
};

//��������Ķ�����Ϊ�����Ա,����ʱ���ȹ��������,�ٹ�������
//������˳���빹���෴!!!!!
void test01()
{
    Person p("����", "IPhone Max");
    cout << p.m_Name << "����: " << p.m_Phone.m_PName << endl;
}

int main()
{
    test01();

    return 0;
}
