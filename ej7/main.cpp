#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

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


bool compararPorTiempo(const Animal& animal1, const Animal& animal2) {
    return animal1.edad < animal2.edad;
}

int main() {

    Animal animal1("Perro.", "Basset Hound.", 14);
    Animal animal2("Gato.", "Siames.", 16);
    Animal animal3("Loro.", "Ararauna.", 50);

    vector<Animal> listaAnimales;
    listaAnimales.push_back(animal1);
    listaAnimales.push_back(animal2);
    listaAnimales.push_back(animal3);

    sort(listaAnimales.begin(), listaAnimales.end(), compararPorTiempo);

    cout << "Animales ordenados por longevidad:"<<endl;
    cout<<"------------------------------------------"<<endl;
    for (const auto& animal : listaAnimales) {
        cout << "Animal: " << animal.perro<< endl;
        cout<<"Raza: " << animal.raza <<endl;
        cout<<"Expectativa de vida: " << animal.edad << " años." << endl;
        cout<<"--------------------------------------"<<endl;
    }

    return 0;
}
