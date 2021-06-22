#include "usuario.h"

Usuario::Usuario()
{
    //Inicializo valores Qstring vacios
    nombre = "";
    correo = "";
    telefono = "";
    comidaPreferida = "";
    dia = "";
    comidaDia = "";
}

Usuario::~Usuario()
{

}

void Usuario::setNombre(QString _nombre)
{
    nombre = _nombre;
}

void Usuario::setCorreo(QString _correo)
{
    correo = _correo;
}

void Usuario::setTelefono(QString _telefono)
{
    telefono = _telefono;
}

void Usuario::setComidaPreferida(QString _comidaPreferida)
{
    comidaPreferida = _comidaPreferida;
}

void Usuario::setDia(QString _dia)
{
    dia = _dia;
}

void Usuario::setComidaDia(QString _comidaDia)
{
    comidaDia = _comidaDia;
}

QString Usuario::getNombre()
{
    return nombre;
}

QString Usuario::getCorreo()
{
    return correo;
}

QString Usuario::getTelefono()
{
    return telefono;
}

QString Usuario::getComidaPreferida()
{
    return comidaPreferida;
}

QString Usuario::getDia()
{
    return dia;
}

QString Usuario::getComidaDia()
{
    return comidaDia;
}




