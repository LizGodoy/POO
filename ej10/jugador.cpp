#include "jugador.h"

// Constructor predeterminado
Jugador::Jugador() : velocidad(0), fuerza(0), nombre("sin nombre") {}

// Constructor parametrizado
Jugador::Jugador(int velocidad, int fuerza, const std::string& nombre) :
    velocidad(velocidad), fuerza(fuerza), nombre(nombre) {}

// Destructor
Jugador::~Jugador() {}

// Métodos setter
void Jugador::setVelocidad(int velocidad) {
    this->velocidad = velocidad;
}

void Jugador::setFuerza(int fuerza) {
    this->fuerza = fuerza;
}

void Jugador::setNombre(const std::string& nombre) {
    this->nombre = nombre;
}

// Métodos getter
int Jugador::getVelocidad() const {
    return velocidad;
}

int Jugador::getFuerza() const {
    return fuerza;
}

const std::string& Jugador::getNombre() const {
    return nombre;
}

