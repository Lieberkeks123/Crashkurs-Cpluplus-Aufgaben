#include <iostream>

using namespace std;

//1. Beispiel
//Oberklasse
class Shape {
public:
    virtual unsigned int corners(){//Virtual gleichwertig dem abstract in Java
        return 0;
        }
};
//Unterklassen erben von Shape
class Triangle : public Shape {
public:
    unsigned int corners(){ //Um die Methode corners zu überschreiben (override)
        return 3;
        }
};

class Rectangle : public Shape {
public:
    unsigned int corners(){//Um die Methode corners zu überschreiben (override)
        return 4;
    }
};

void draw(Shape& s){
    std::cout << s.corners() << " Ecken" << std::endl;
}

//_____________________________________________________
//2. Beispiel

/*class A   //Funktioniert nicht
{ };*/

//Oberklasse
class A //Lösung virtueller Distruktor
{
public:
    virtual ~A(){
    }
};

//Unterklasse von A
class B : public A
{
public:
    B(unsigned int size){
        m_array = new int[size];
        for(int i=0;i<size;i++){
        m_array[i]=i;
    }
    for(int i=0;i<size;i++){
        cout << m_array[i] << " ,";
    }
}

~B(){
    delete [] m_array;
}
//Attribute
private:
int* m_array;
};

//_____________________________________________________
//3. Beispiel

/*class Array
{
public:
double& value(unsigned int index)
{ return m_data[index]; }
double const& value(unsigned int index) const
{ return m_data[index]; }
private:
unsigned int m_size;
double* m_data;
};

void print(Array const& arr) {//Konstante weil array nicht verändert wird.
    cout << "Array size: " << arr.size() << endl;
    for (unsigned int i=0; i<arr.size(); i++){
        cout << arr.value(i) << endl;
    }
}*/

int main()
{
    //1. Beispiel
    cout << endl << "1. Beispiel:" << endl;
    Triangle t;
    draw(t);
    Rectangle r;
    draw(r);

    //------------
    //2. Beispiel
    cout << endl << "2. Beispiel:" << endl;
    A* ptr = new B(10);
    delete ptr;
    return 0;

    //Konstanten nicht veränderbar
    double const pi = 3.141592653589793116;
    unsigned int const max_participants = 100;

    //------------
    /*3. Beispiel
    cout << endl << "3. Beispiel:" << endl;
    Array a;
    print(a);*/
}
