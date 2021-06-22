#ifndef USUARIO_H
#define USUARIO_H
#include <QString>


class Usuario
{
private:
    QString nombre;
    QString correo;
    QString telefono;
    QString comidaPreferida;
    QString dia;
    QString comidaDia;

public:
    Usuario();
    ~Usuario();
    void setNombre(QString _nombre);
    void setCorreo(QString _correo);
    void setTelefono(QString _telefono);
    void setComidaPreferida(QString _comidaPreferida);
    void setDia(QString _dia);
    void setComidaDia(QString _comida);
    QString getNombre();
    QString getCorreo();
    QString getTelefono();
    QString getComidaPreferida();
    QString getDia();
    QString getComidaDia();


};

#endif // USUARIO_H
