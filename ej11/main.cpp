#include <QApplication>
#include <QLabel>
#include <QWidget>
#include <QPushButton>
#include <QLineEdit>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

  //creando
    QLabel label("Etiqueta");
    QWidget widget;
    QPushButton button("Botón");
    QLineEdit lineEdit;
//mostrando
    label.show();
    widget.show();
    button.show();
    lineEdit.show();

    return a.exec();
}
