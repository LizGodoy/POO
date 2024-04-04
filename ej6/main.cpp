#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
    string perro;
    string raza;
    int edad;

    // Constructor
    Animal(string _perro, std::string _raza, int _edad)
        : perro(_perro), raza(_raza), edad(_edad) {}
};

int main() {

    Animal animal1("perro", "Basset Hound.", 14);
    Animal animal2("perro", "Beagle.", 15);
    cout<<"animal 1:"<<endl;
    cout << "Animal: " << animal1.perro << endl;
    cout << "Raza: " << animal1.raza  << endl;
    cout << "Expectativa de vida: " << animal1.edad <<" años." << endl;

    cout<<"-------------------------------"<<endl;

    cout<<"animal 2:"<<endl;
    cout << "Animal: " << animal2.perro << endl;
    cout << "Raza: " << animal2.raza  << endl;
    cout << "Expectativa de vida: " << animal2.edad <<" años." << endl;

    return 0;
}








