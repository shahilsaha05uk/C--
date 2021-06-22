#include <iostream>
#include <thread>
using namespace std;



void run1()
{
    int i = 0;
    while (i < 10000)
    {
        cout << "My thread 1 is running" << endl;
        cout << "I am Happy" << endl;
        i++;
    }
}
void run2()
{
    int i = 0;
    while (i < 10000)
    {
        cout << "My thread 2 is running" << endl;
        cout << "I am sad" << endl;
        i++;
    }
}

class MyThread : public thread
{
public:

    MyThread();
    ~MyThread();


    void Hello()
    {
        
    }

private:

};


int main()
{
    thread th1(run1);
    thread th2(run2);





	return 0;
}

MyThread::MyThread(): thread()
{

}

MyThread::~MyThread()
{
}
