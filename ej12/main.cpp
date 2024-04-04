#include <QApplication>
#include <QLabel>
#include <QPixmap>
#include <QTimer>
#include <QDebug>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    QLabel label;

    QString imagePath = ("C:/Users/Lizzie/Pictures/ubp.jpg");

    // Se carga la imagen desde el archivo jpg
    QPixmap image(imagePath);

    // Verificando si la imagen se cargó correctamente
    if (image.isNull()) {
        qDebug() << "Error: no se pudo cargar la imagen desde" << imagePath;
        return 1; // Salir de la aplicación con un código de error
    }

    // Establecer la imagen en el QLabel
    label.setPixmap(image.scaled(label.size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));

    // Mostrando el QLabel de forma maximizada
    label.showMaximized();

    // Configurar un temporizador para cerrar la aplicación después de 3 segundos
    QTimer::singleShot(3000, [&](){
        label.close();
        QApplication::quit();
    });

    return a.exec();
}
