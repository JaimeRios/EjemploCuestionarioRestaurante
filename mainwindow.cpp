#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "usuario.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    miUsuario = new Usuario();
    //Los creo agregando de un item.
    //Opcion vacia que aparece por defecto
    ui->comidacomboBox->addItem("");
    ui->comidacomboBox->addItem("Desayuno.");
    ui->comidacomboBox->addItem("Almuerzo.");
    ui->comidacomboBox->addItem("Cena.");

    //Ocreo un QstringList una lista de string y lo paso como parametro al metodo
    //addItems
    QStringList dias;
    dias <<""<<"Lunes"<<"Martes"<<"Miércoles"<<"Jueves"<<"Viernes"<<"Sábado"<<"Domingo";
    ui->diacomboBox->addItems(dias);
}

MainWindow::~MainWindow()
{
    delete miUsuario;
    delete ui;
}


void MainWindow::on_enviarButton_clicked()
{
    //Obtengo la información
    QString nombre = ui->nombreEdit->text();
    QString correo = ui->correoEdit->text();
    QString telefono = ui->telefonoEdit->text();
    QString comidaPreferida = ui->comidaEdit->toPlainText();
    QString dia = ui->diacomboBox->currentText();
    QString comida = ui->comidacomboBox->currentText();

    //Paso la información a mi objeto por medio de los médodos set
    miUsuario->setNombre(nombre);
    miUsuario->setCorreo(correo);
    miUsuario->setTelefono(telefono);
    miUsuario->setComidaPreferida(comidaPreferida);
    miUsuario->setDia(dia);
    miUsuario->setComidaDia(comida);
}

void MainWindow::on_verButton_clicked()
{
    QString Informacion = "Nombre: "+miUsuario->getNombre()+
                          "\n Correo: "+miUsuario->getCorreo()+
                          "\n Teléfono: "+miUsuario->getTelefono()+
                          "\n Voy a un restaurante a: "+miUsuario->getComidaDia()+
                          "\n Preferiblemente los días: "+miUsuario->getDia()+
                          "\n y mi comida preferida es: "+miUsuario->getComidaPreferida();
    ui->InformacionText->append(Informacion);

}
