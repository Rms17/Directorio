#include <QCoreApplication>
#include <QDir> //directorio
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QDir directorio;
    int cantidad;
    directorio.setPath("C:/"); //asigno mi directorio al disco local de mi computador
    cantidad=directorio.count();
    for (int i=2 ;i<cantidad ; i++)
    qDebug()<<directorio[i];
    return a.exec();
}
