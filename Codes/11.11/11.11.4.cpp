#include <iostream>
using namespace std;

//����ͬ�����
//����CPU��
class CPU
{
public:
    //����ļ��㺯��
    virtual void calculate() = 0;
};

//�����Կ���
class VideoCard
{
public:
    //����ļ��㺯��
    virtual void display() = 0;
};

//�����ڴ�����
class Memory
{
public:
    //����ļ��㺯��
    virtual void storage() = 0;
};

//������
class Computer
{
public:
    Computer(CPU *cpu, VideoCard *vc, Memory *mem) : m_cpu(cpu), m_vc(vc), m_mem(mem) {}

    //�ṩ��������
    void Work()
    {
        //�������������,���ýӿ�
        m_cpu->calculate();
        m_vc->display();
        m_mem->storage();
    }

    //�ṩ�������� �ͷ������������
    ~Computer()
    {
        //�ͷ�CPU���
        if (m_cpu)
        {
            delete m_cpu;
            m_cpu = nullptr;
        }
        //�ͷ��Կ����
        if (m_vc)
        {
            delete m_vc;
            m_vc = nullptr;
        }
        //�ͷ��ڴ������
        if (m_mem)
        {
            delete m_mem;
            m_mem = nullptr;
        }
    }

private:
    CPU *m_cpu;      // CPU�����ָ��
    VideoCard *m_vc; //�Կ����ָ��
    Memory *m_mem;   //�ڴ������ָ��
};

//���峧��
// Intel����
class IntelCPU : public CPU
{
    void calculate() { cout << "Intel��CPU��ʼ������!" << endl; }
};

class IntelVideoCard : public VideoCard
{
    void display() { cout << "Intel���Կ���ʼ��ʾ��!" << endl; }
};

class IntelMemory : public Memory
{
    void storage() { cout << "Intel���ڴ�����ʼ�洢��!" << endl; }
};

// Lenovo����
class LenovoCPU : public CPU
{
    void calculate() { cout << "Lenovo��CPU��ʼ������!" << endl; }
};

class LenovoVideoCard : public VideoCard
{
    void display() { cout << "Lenovo���Կ���ʼ��ʾ��!" << endl; }
};

class LenovoMemory : public Memory
{
    void storage() { cout << "Lenovo���ڴ�����ʼ�洢��!" << endl; }
};

void test01()
{
    //��һ̨�������
    cout << "��һ̨���Կ�ʼ����: " << endl;
    //������һ̨����
    Computer *computer1 = new Computer(new IntelCPU, new IntelVideoCard, new IntelMemory);
    computer1->Work();
    delete computer1;

    cout << "-------------------------------" << endl;
    cout << "�ڶ�̨���Կ�ʼ����: " << endl;
    //�ڶ�̨������װ
    Computer *computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
    computer2->Work();
    delete computer2;
}

int main()
{
    test01();

    return 0;
}
