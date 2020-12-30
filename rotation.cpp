#include "rotation.h"
#include "ui_rotation.h"

rotation::rotation(QWidget *parent,QString nom) :
    QDialog(parent),
    ui(new Ui::rotation)
{


     ui->setupUi(this);
     degres=90;
     nom_rot=nom;
     label = new QLabel(this);
     label->setGeometry(20,20,760,450);
     pixmap=new QPixmap(nom);
     QSize labelSize = label->size();
     *pixmap = pixmap->scaled(labelSize, Qt::IgnoreAspectRatio, Qt::FastTransformation);
     label->setPixmap(*pixmap);
     label->setStyleSheet(
                   " border-style: outset;"
                   "  border-width: 5px;"
                    " border-color: black;"

                   );
nbre=0;

}




rotation::~rotation()
{


    delete ui;
    delete pixmap;
    delete label;

}






void rotation::on_pushButton_clicked()
{
         degres=degres-90;
           QTransform transform;
           transform.rotate(degres);
            rotatedPixelFrame = pixmap->transformed(transform);

           QSize labelSize = label->size();
           rotatedPixelFrame=rotatedPixelFrame.scaled(labelSize, Qt::IgnoreAspectRatio, Qt::FastTransformation);
           label->setPixmap(rotatedPixelFrame);


}




void rotation::on_pushButton_2_clicked()
{

    degres=degres+90;
    QTransform transform;
    transform.rotate(degres);
    rotatedPixelFrame = pixmap->transformed(transform);
    QSize labelSize = label->size();
    rotatedPixelFrame=rotatedPixelFrame.scaled(labelSize, Qt::IgnoreAspectRatio, Qt::FastTransformation);
    label->setPixmap(rotatedPixelFrame);



}

void rotation::on_pushButton_3_clicked()
{

    this->close();
}

void rotation::on_pushButton_4_clicked()
{
    nbre++;

    if(nbre==1){

    rotatedPixelFrame.save(nom_rot);
     *pixmap= rotatedPixelFrame;
    }

    else    QMessageBox::information(this, "MERCI", "PHOTO DEJA ENREGISTREE !!!");
}
