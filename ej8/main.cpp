#include <QCoreApplication>
#include <iostream>
#include <string>

// Clase Persona
class Persona {
public:
    Persona(const std::string& nombre) : nombre(nombre) {}

    // Método para imprimir descripción de Persona
    void imprimirDescripcion() const {
        std::cout << "Persona con nombre " << nombre << std::endl;
    }

private:
    std::string nombre;
};

// Clase Poste
class Poste {
public:
    Poste(double altura, double diametro) : altura(altura), diametro(diametro) {}

    // Método para imprimir descripción de Poste
    void imprimirDescripcion() const {
        std::cout << "Poste con altura de " << altura << " metros y "
                  << diametro << " cm de diámetro" << std::endl;
    }

private:
    double altura;
    double diametro;
};

// Función genérica para imprimir descripción de cualquier objeto
template<typename T>
void imprimirDescripcion(const T& objeto) {
    objeto.imprimirDescripcion();
}

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    // Crear objetos de la clase Persona
    Persona persona1("Lucrecia");
    Persona persona2("Juan");

    // Crear objetos de la clase Poste
    Poste poste1(8.0, 15.0);
    Poste poste2(10.5, 20.0);

    // Probar la función imprimirDescripcion con objetos de ambas clases
    imprimirDescripcion(persona1);
    imprimirDescripcion(persona2);
    imprimirDescripcion(poste1);
    imprimirDescripcion(poste2);

    return a.exec();
}
