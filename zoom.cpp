#include "zoom.h"
#include "ui_zoom.h"

zoom::zoom(QWidget *parent, QString nom) :
    QDialog(parent),
    ui(new Ui::zoom)
{
    ui->setupUi(this);
    nom_z=nom;
    label = new QLabel(this);

    label->setGeometry(20,5,760,550);
    pixmap=new QPixmap(nom);
   v=new valeur();
    QSize labelSize = label->size();
    *pixmap = pixmap->scaled(labelSize, Qt::IgnoreAspectRatio, Qt::FastTransformation);
    label->setPixmap(*pixmap);
    label->setStyleSheet(
                  " border-style: outset;"
                  "  border-width: 5px;"
                   " border-color: black;"
                              );





}





zoom::~zoom()
{
    delete ui;
    delete pixmap;
    delete label;
    delete v;
}


void zoom::on_pushButton_clicked()
{

  int x,y,t,h,val;

val=v->positionx();
v->augmentex(val);
x=v->positionx();
y=v->positiony();
t=pixmap->width();
h=pixmap->height();


        QRect rect(x,y,t,h);



        QPixmap  rog=pixmap->copy(rect);
         QSize labelSize = label->size();

         rog=rog.scaled(labelSize, Qt::IgnoreAspectRatio, Qt::FastTransformation);

         label->setPixmap(rog);

         label->setStyleSheet(
                     " border-style: outset;"
                     "  border-width: 5px;"
                      " border-color: black;"

                                     );

}

void zoom::on_pushButton_2_clicked()
{

    int x,y,t,h,val2;

  val2=v->positiony();


  v->augmentey(val2);
    x=v->positionx();
    y=v->positiony();
    t=pixmap->width();
    h=pixmap->height();


       QRect rect(x,y,t,h);



       QPixmap  rog=pixmap->copy(rect);
        QSize labelSize = label->size();

        rog=rog.scaled(labelSize, Qt::IgnoreAspectRatio, Qt::FastTransformation);

        label->setPixmap(rog);

        label->setStyleSheet(
                    " border-style: outset;"
                    "  border-width: 5px;"
                     " border-color: black;"

                                    );
}

void zoom::on_pushButton_4_clicked()
{


    int x,y,t,h,val;
val=v->positionx();

v->diminuex(val);

    x=v->positionx();
    y=v->positiony();
    t=pixmap->width();
    h=pixmap->height();

        QRect rect(x,y,t,h);



        QPixmap  rog=pixmap->copy(rect);
         QSize labelSize = label->size();

         rog=rog.scaled(labelSize, Qt::IgnoreAspectRatio, Qt::FastTransformation);

         label->setPixmap(rog);

         label->setStyleSheet(
                     " border-style: outset;"
                     "  border-width: 5px;"
                      " border-color: black;"

                                     );
}



void zoom::on_pushButton_3_clicked()
{


    int x,y,t,h,val2;

     val2=v->positiony();

    v->diminuey(val2);

    x=v->positionx();
    y=v->positiony();

    t=pixmap->width();
    h=pixmap->height();


        QRect rect(x,y,t,h);



        QPixmap  rog=pixmap->copy(rect);
         QSize labelSize = label->size();

         rog=rog.scaled(labelSize, Qt::IgnoreAspectRatio, Qt::FastTransformation);

         label->setPixmap(rog);

         label->setStyleSheet(
                     " border-style: outset;"
                     "  border-width: 5px;"
                      " border-color: black;"

                                     );

}

void zoom::on_pushButton_5_clicked()
{
    this->close();
}
