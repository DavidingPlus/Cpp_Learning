#include <iostream>
using namespace std;

//��̬

//������
class Animal
{
public:
    //�麯��
    virtual void speak()
    {
        cout << "������˵��" << endl;
    }
};

//è��
class Cat : public Animal
{
public:
    //��д ��������ֵ���� ������ �����б� ��ȫ��ͬ
    //����� virtual ��д�ɲ�д
    void speak()
    {
        cout << "Сè��˵��" << endl;
    }
};

//ִ��˵���ĺ���
//��ַ��� �ڱ���׶ξ���ȷ��������ַ
//�����ִ����è˵��,��ô���������ַ�Ͳ������,��Ҫ�����н׶ν��а�,Ҳ�������!!!

//��̬��̬��������
// 1.�м̳й�ϵ
// 2.����Ҫ��д������麯��

//��̬��̬��ʹ��
//�����ָ��������� ָ���������

void doSpeak(Animal &animal) // Animal & animal= cat ;
{
    animal.speak();
}

//����
class Dog : public Animal
{
public:
    void speak()
    {
        cout << "С����˵��" << endl;
    }
};

void test01()
{
    Cat cat;
    doSpeak(cat);

    Dog dog;
    doSpeak(dog);
}

void test02()
{
    cout << "sizeof Animal = " << sizeof(Animal) << endl;
}

int main()
{
    // test01();
    test02();

    return 0;
}
