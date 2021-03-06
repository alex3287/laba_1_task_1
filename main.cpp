#include <iostream>
#include "classB.h"
#include "classA.h"

using namespace std;

int main()
{
    //работаю с ClassB
    ClassB b; //создание объекта типа ClassB
    cout<<"object b: "<<b.getX()<<endl; //получить значение m_x
    b.setX(34); //установить значение m_x
    cout<<"object b: "<<b.getX()<<endl; //получить значение m_x

    // проверка на пренадлежность некоторой переменной
    int x=34;
    if (b.verify(x))
        cout<<"Значение переменной "<<x<<" принадлежит объекту b"<<endl;
    else
        cout<<"Значение переменной "<<x<<" не пренадлежит объекту b"<<endl;

    // с перегрузкой пока не понял

    //работаю с ClassА
    ClassA a1, a2;//создание объекта типа ClassA

    //посмотрим количество частей при создании
    cout<<"\nobjects ClassA "<<a1.getN()<<"  "<<a2.getN()<<endl;

    // добавим части в объект a1
    a1.add(20);
    a1.add(30);
    a1.add(40);

    // добавим части в объект a2
    a2.add(5);
    a2.add(10);

    //посмотрим количество частей в каждом объекте
    cout<<"object a1: "<<a1.getN()<<"  object a2: "<<a2.getN()<<endl;

    // возьмем любое число и проверем является ли оно частью объекта a1
    // если да, то удалим его, а если нет, тогда добавим его
    int y = 50; //меняем значение для эксперемента
    if (a1.find(y) > -1){
        cout<<"\nчасть "<<y<<" найдена под индексом: "<<a1.find(y)<<endl;
        a1.del(y); // удалить часть
        cout<<"часть "<<y<<" удалена"<<endl;
    }
    else {
        cout<<"часть "<<y<<" не найдена "<<endl;
        a1.add(y);
        cout<<"часть "<<y<<" добавлена под индексом: "<<a1.find(y)<<endl;
    }

    // с getB() не совсем понял как это работает
    cout<<"\nтут не очень понятно "<<a1.getB(y)<<endl;

    //проверка вермени жизни объектов
    ClassA a4, a5;
    a4.add(45);

    return 0;
}
