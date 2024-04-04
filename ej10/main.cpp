#include <iostream>
#include <vector>
#include "jugador.h"

int main() {
    std::vector<Jugador> jugadores;

    // Insertar 10 jugadores distintos
    for (int i = 0; i < 10; ++i) {
        Jugador jugador;
        jugador.setVelocidad(i * 2);
        jugador.setFuerza(i * 3);
        jugador.setNombre("Jugador_" + std::to_string(i));
        jugadores.push_back(jugador);
    }

    // Publicar los datos de cada jugador
    for (const auto& jugador : jugadores) {
        std::cout << "Nombre: " << jugador.getNombre() << ", Velocidad: "
                  << jugador.getVelocidad() << ", Fuerza: " << jugador.getFuerza() << std::endl;
    }

    return 0;
}
