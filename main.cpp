#include <iostream>
#include "classb.h"
#include "classa.h"

using namespace std;

int main()
{
    ClassB b; //создание объекта типа ClassB
    b.setX(34); //установить значение m_x
    cout<<b.getX()<<endl; //получить значение m_x

    // проверка на пренадлежность некоторой переменной
    int x=34;
    if (b.verify(x))
        cout<<"Значение переменной принадлежит объекту "<<endl;
    else
        cout<<"Значение переменной не пренадлежит объекту"<<endl;


    ClassA a;
    cout<<"object ClassA "<<a.getN()<<endl;
    return 0;
}
