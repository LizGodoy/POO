#include <QCoreApplication>
#include <iostream>
#include <QString>
#include <QDebug>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    vector<string> expresiones;

    expresiones.push_back("echar un vistazo");
    expresiones.push_back("poner las barbas en remojo");
    expresiones.push_back("ajuste de cuenta");
    expresiones.push_back("tirar una lance");
    expresiones.push_back("ponerse como un tomate");

    sort(expresiones.begin(), expresiones.end());

    cout << "Expresiones idiomaticas ordenadas alfabeticamente:"<<endl;
        for(const auto& expresion : expresiones) {
            cout << expresion << endl;
        }
    return 0 ;
}
