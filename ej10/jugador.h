#ifndef JUGADOR_H
#define JUGADOR_H

#include <string>

class Jugador {
public:
    Jugador();
    Jugador(int velocidad, int fuerza, const std::string& nombre);
    ~Jugador();

    // Métodos setter
    void setVelocidad(int velocidad);
    void setFuerza(int fuerza);
    void setNombre(const std::string& nombre);

    // Métodos getter
    int getVelocidad() const;
    int getFuerza() const;
    const std::string& getNombre() const;

private:
    int velocidad;
    int fuerza;
    std::string nombre;
};

#endif // JUGADOR_H
