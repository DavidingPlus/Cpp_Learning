#include <iostream>
#include <string.h>
using namespace std;

//�������ʹ�������
class Animal
{
public:
    Animal() { cout << "Animal���캯������" << endl; }
    //���麯��
    virtual void speak() = 0;

    // //�������������Խ�� ����ָ���ͷ��������ʱ���ɾ�������
    // virtual ~Animal() { cout << "Animal������������" << endl; }

    //�������� ��Ҫ����,Ҳ��Ҫʵ��,�������ⲿʵ��
    //���˴�������,�����Ҳ���ڳ�����,�޷�ʵ��������!!!
    virtual ~Animal() = 0;
};

Animal::~Animal() { cout << "Animal����������������" << endl; }

class Cat : public Animal
{
public:
    Cat(string name)
    {
        cout << "Cat���캯������" << endl;
        m_Name = new string(name);
    }

    void speak() { cout << *m_Name << "Сè��˵��" << endl; }

    ~Cat()
    {
        if (m_Name)
        {
            cout << "Cat������������" << endl;
            delete m_Name;
            m_Name = nullptr;
        }
    }

    string *m_Name;
};

void test01()
{
    Animal *animal = new Cat("Tom");
    animal->speak();

    //�����ָ����������ʱ�򲻻������������������,������������ж�������,����й¶
    delete animal;
}

int main()
{
    test01();

    return 0;
}
