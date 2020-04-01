#include <iostream>

using namespace std;

template<typename x>
x addieren(x wert, x wert2){
    return wert + wert2;
}

int main()
{
    int x, y;
    cout << "Gebe einen ersten ganzzahligen Wert ein: ";
    cin >> x;
    cout << "Gebe einen zweiten ganzzahligen Wert ein: ";
    cin >> y;
    cout << "Addiert: " << addieren(x,y) << "\n";

    double z, t;
    cout << "Gebe einen ersten reelen Wert ein: ";
    cin >> z;
    cout << "Gebe einen zweiten reelen Wert ein: ";
    cin >> t;
    cout << "Addiert: " <<  addieren(z,t);

    return 0;
}
