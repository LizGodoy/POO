#include <QCoreApplication>
#include <QString>
#include <QDebug>

template <class T>
QString imprimir(T *v, int cantidad, bool mayor_a_menor) {
    // Ordenamiento por inserción
    for (int i = 1; i < cantidad; ++i) {
        T temp = v[i];
        int j = i - 1;
        if (mayor_a_menor) {
            while (j >= 0 && v[j] < temp) {
                v[j + 1] = v[j];
                j--;
            }
        } else {
            while (j >= 0 && v[j] > temp) {
                v[j + 1] = v[j];
                j--;
            }
        }
        v[j + 1] = temp;
    }

    // Genera la cadena con valores ordenados
    QString ordenados;
    if (mayor_a_menor) {
        ordenados += "Ordenado de mayor a menor: ";
    } else {
        ordenados += "Ordenado de menor a mayor: ";
    }
    for (int i = 0; i < cantidad; ++i) {
        ordenados += QString::number(v[i]) + " ";
    }

    return ordenados;
}

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    int arrayInt[] = {5, 2, 9, 1, 7};
    float arrayFloat[] = {3.5, 1.2, 9.8, 4.3, 6.7};

    int cantidadInt = sizeof(arrayInt) / sizeof(arrayInt[0]);
    int cantidadFloat = sizeof(arrayFloat) / sizeof(arrayFloat[0]);

    // Llama a la función imprimir para obtener las cadenas con los valores ordenados
    QString ordenadosInt = imprimir(arrayInt, cantidadInt, true); // Ordena de mayor a menor
    QString ordenadosFloat = imprimir(arrayFloat, cantidadFloat, false); // Ordena de menor a mayor

    // Imprime los resultados.
    qDebug() << ordenadosInt;
    qDebug() << ordenadosFloat;

    return a.exec();
}
