#include "rogner.h"
#include "ui_rogner.h"

rogner::rogner(QWidget *parent, QString nom) :
    QDialog(parent),
    ui(new Ui::rogner)
{
    ui->setupUi(this);
  nbre=0;
    nom_rog=nom;
    label = new QLabel(this);
    label->setGeometry(20,70,760,450);
    pixmap=new QPixmap(nom);
    QSize labelSize = label->size();
    *pixmap = pixmap->scaled(labelSize, Qt::IgnoreAspectRatio, Qt::FastTransformation);
    label->setPixmap(*pixmap);
    label->setStyleSheet(
                  " border-style: outset;"
                  "  border-width: 5px;"
                   " border-color: black;"

                  );
     x=y=t=h=0;

     v1=v2=h1=h2=0;

}

rogner::~rogner()
{

    delete ui;
    delete label;
    delete pixmap;

}




void rogner::on_pushButton_2_clicked()
{
int i,j,k,l;
    i=ui->verticalSlider->sliderPosition();

    j=ui->verticalSlider_2->sliderPosition();



    k=ui->horizontalSlider->sliderPosition();

   l=ui->horizontalSlider_2->sliderPosition();
       x=l;
       y=450-i;
       t=k-x;
       h=i-j;

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












void rogner::on_pushButton_3_clicked()
{
   nbre++;

   if(nbre==1){

       int i,j,k,l;
           i=ui->verticalSlider->sliderPosition();

           j=ui->verticalSlider_2->sliderPosition();



           k=ui->horizontalSlider->sliderPosition();

          l=ui->horizontalSlider_2->sliderPosition();
              x=l;
              y=450-i;
              t=k-x;
              h=i-j;

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


    rog.save(nom_rog);

    QRect rect2(0,0,rog.width(),rog.height());
    *pixmap=rog.copy(rect2);

   }
   else    QMessageBox::information(this, "MERCI", "PHOTO DEJA ENREGISTREE !!!");
}











void    rogner::on_verticalSlider_valueChanged(int value)
{      
       v1=value;
       QLine a(0,450-v1,760,450-v1);
       QLine b(0,450-v2,760,450-v2);
       QLine  c(h1,0,h1,450);
       QLine d(h2,0,h2,450);

       QRect rect(0,0,pixmap->width(),pixmap->height());
       QPixmap pixmap2=pixmap->copy(rect);


       QPainter p(&pixmap2);
        p.setPen(Qt::red);

               p.drawLine(a);
               p.drawLine(b);
               p.drawLine(c);
               p.drawLine(d);

        label->setPixmap(pixmap2);
        p.end();
}





void  rogner::on_verticalSlider_2_valueChanged(int value)
{
   v2=value;
   QLine a(0,450-v1,760,450-v1);
   QLine b(0,450-v2,760,450-v2);
   QLine  c(h1,0,h1,450);
   QLine d(h2,0,h2,450);

    QRect rect(0,0,pixmap->width(),pixmap->height());
    QPixmap pixmap2=pixmap->copy(rect);

    QPainter p(&pixmap2);
     p.setPen(Qt::red);

            p.drawLine(a);
            p.drawLine(b);
            p.drawLine(c);
            p.drawLine(d);

     label->setPixmap(pixmap2);
     p.end();

}




void  rogner::on_horizontalSlider_valueChanged(int value)
{
    h1=value;
    QLine a(0,450-v1,760,450-v1);
    QLine b(0,450-v2,760,450-v2);
    QLine  c(h1,0,h1,450);
    QLine d(h2,0,h2,450);

    QRect rect(0,0,pixmap->width(),pixmap->height());
    QPixmap pixmap2=pixmap->copy(rect);

    QPainter p(&pixmap2);
     p.setPen(Qt::red);

     p.drawLine(a);
     p.drawLine(b);
     p.drawLine(c);
     p.drawLine(d);

     label->setPixmap(pixmap2);
     p.end();

}





void  rogner::on_horizontalSlider_2_valueChanged(int value)
{
   h2=value;
   QLine a(0,450-v1,760,450-v1);
   QLine b(0,450-v2,760,450-v2);
   QLine  c(h1,0,h1,450);
   QLine d(h2,0,h2,450);

    QRect rect(0,0,pixmap->width(),pixmap->height());
    QPixmap pixmap2=pixmap->copy(rect);

     QPainter p(&pixmap2);
     p.setPen(Qt::red);

     p.drawLine(a);
     p.drawLine(b);
     p.drawLine(c);
     p.drawLine(d);

     label->setPixmap(pixmap2);
     p.end();
}



void rogner::on_pushButton_4_clicked()
{
    this->close();
}
