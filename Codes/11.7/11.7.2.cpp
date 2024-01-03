#include <iostream>
#include <string.h>
using namespace std;

//�ֱ�������ͨ�Ͷ�̬����ʵ�ּ�����

//��ͨд��
class Calculator
{
public:
    int getResult(string oper)
    {
        if (oper == "+")
            return m_Num1 + m_Num2;
        else if (oper == "-")
            return m_Num1 - m_Num2;
        else if (oper == "*")
            return m_Num1 * m_Num2;
        //�������չ�µĹ���,��Ҫ�޸�Դ��
        //����ʵ������ �ṩ ����ԭ��
        //����ԭ��: ����չ���п���,���޸Ľ��йر�
    }

    int m_Num1; //������1
    int m_Num2; //������2
};

void test01()
{
    //��������������
    Calculator c;
    c.m_Num1 = 10;
    c.m_Num2 = 10;
    cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;
    cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;
    cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;
}

//���ö�̬ʵ�ּ�����
//��̬�ô�
// 1.��֯�ṹ����
// 2.�ɶ���ǿ
// 3.����ǰ�ںͺ�����չ�Լ�ά���Ը�
//ʵ�ּ�����������
class AbstractCalcuator
{
public:
    virtual int getResult()
    {
        return 0;
    }

    int m_Num1;
    int m_Num2;
};

//�ӷ���������
class AddCalculator : public AbstractCalcuator
{
    int getResult()
    {
        return m_Num1 + m_Num2;
    }
};

//������������
class SubCalculator : public AbstractCalcuator
{
    int getResult()
    {
        return m_Num1 - m_Num2;
    }
};

//�˷���������
class MulCalculator : public AbstractCalcuator
{
    int getResult()
    {
        return m_Num1 * m_Num2;
    }
};

void test02()
{
    //��̬ʹ������
    //����ָ���������ָ���������

    //�ӷ�
    AbstractCalcuator *abc = new AddCalculator;
    abc->m_Num1 = 100;
    abc->m_Num2 = 100;
    cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;

    //����
    abc = new SubCalculator;
    abc->m_Num1 = 100;
    abc->m_Num2 = 100;
    cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;

    //�˷�
    abc = new MulCalculator;
    abc->m_Num1 = 100;
    abc->m_Num2 = 100;
    cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;

    //�����ǵ�����
    delete abc;
    abc = nullptr;
}

int main()
{
    // test01();
    test02();

    return 0;
}
