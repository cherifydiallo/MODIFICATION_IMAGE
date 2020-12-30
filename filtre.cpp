#include "filtre.h"
#include "ui_filtre.h"

filtre::filtre(QWidget *parent,QString nom) :
    QDialog(parent),
    ui(new Ui::filtre)
{
    ui->setupUi(this);

    nom_fil=nom;
    label = new QLabel(this);
    label->setGeometry(20,5,760,550);
    pixmap=new QPixmap(nom);
    QSize labelSize = label->size();
    *pixmap = pixmap->scaled(labelSize, Qt::IgnoreAspectRatio, Qt::FastTransformation);
    label->setPixmap(*pixmap);
    label->setStyleSheet(
                  " border-style: outset;"
                  "  border-width: 5px;"
                   " border-color: black;"
                              );


}


filtre::~filtre()
{
    delete ui;
}







void filtre::on_bleu_clicked()
{

    QRgb col;

       QImage image(nom_fil);
       int gray;


          int width = image.width();

          int height = image.height();

          QImage alpha = image.alphaChannel();

          for (int i = 0; i < width; ++i)

          {

              for (int j = 0; j < height; ++j)

              {

                  col = image.pixel(i, j);

                  gray = qGray(col);

                  image.setPixel(i, j, qRgb(1, 1, gray));

              }

          }

          image.setAlphaChannel(alpha);
         QPixmap pix;
         pix=QPixmap::fromImage(image);
         QSize labelSize = label->size();

         pix = pix.scaled(labelSize, Qt::IgnoreAspectRatio, Qt::FastTransformation);
          label->setPixmap(pix);

//image.save(nom_fil);

}




void filtre::on_vert_clicked()
{

    int gray;
    QRgb col;

       QImage image(nom_fil);



          int width = image.width();

          int height = image.height();

          QImage alpha = image.alphaChannel();

          for (int i = 0; i < width; ++i)

          {

              for (int j = 0; j < height; ++j)

              {

                  col = image.pixel(i, j);

                  gray = qGray(col);

                  image.setPixel(i, j, qRgb(100,  gray,0));

              }

          }

          image.setAlphaChannel(alpha);
         QPixmap pix;
         pix=QPixmap::fromImage(image);
         QSize labelSize = label->size();

         pix = pix.scaled(labelSize, Qt::IgnoreAspectRatio, Qt::FastTransformation);
          label->setPixmap(pix);

 // image.save(nom_fil);
}



void filtre::on_VIOLET_clicked()
{
    QRgb col;

    int gray;
       QImage image(nom_fil);



          int width = image.width();

          int height = image.height();

          QImage alpha = image.alphaChannel();

          for (int i = 0; i < width; ++i)

          {

              for (int j = 0; j < height; ++j)

              {

                  col = image.pixel(i, j);

                  gray = qGray(col);

                  image.setPixel(i, j, qRgb(gray,0 , gray));

              }

          }

          image.setAlphaChannel(alpha);
         QPixmap pix;
         pix=QPixmap::fromImage(image);
         QSize labelSize = label->size();

         pix = pix.scaled(labelSize, Qt::IgnoreAspectRatio, Qt::FastTransformation);
          label->setPixmap(pix);
//image.save(nom_fil);

}




void filtre::on_noirblanc_clicked()
{
    QRgb col;
   int gray;
       QImage image(nom_fil);



          int width = image.width();

          int height = image.height();

          QImage alpha = image.alphaChannel();

          for (int i = 0; i < width; ++i)

          {

              for (int j = 0; j < height; ++j)

              {

                  col = image.pixel(i, j);

                  gray = qGray(col);

                  image.setPixel(i, j, qRgb(gray,gray,gray) );

              }

          }

          image.setAlphaChannel(alpha);
         QPixmap pix;
         pix=QPixmap::fromImage(image);
         QSize labelSize = label->size();

         pix = pix.scaled(labelSize, Qt::IgnoreAspectRatio, Qt::FastTransformation);
          label->setPixmap(pix);
     // image.save(nom_fil);


}



void filtre::on_ocean_clicked()
{

int gray;

    QRgb col;

       QImage image(nom_fil);



          int width = image.width();

          int height = image.height();

          QImage alpha = image.alphaChannel();

          for (int i = 0; i < width; ++i)

          {

              for (int j = 0; j < height; ++j)

              {

                  col = image.pixel(i, j);

                  gray = qGray(col);

                  image.setPixel(i, j, qRgba(0 , gray,gray,255) );

              }

          }

          image.setAlphaChannel(alpha);
         QPixmap pix;
         pix=QPixmap::fromImage(image);
         QSize labelSize = label->size();

         pix = pix.scaled(labelSize, Qt::IgnoreAspectRatio, Qt::FastTransformation);
          label->setPixmap(pix);

//image.save(nom_fil);

}

void filtre::on_noir_clicked()
{


int gray;

    QRgb col;

       QImage image(nom_fil);


          int width = image.width();

          int height = image.height();

          QImage alpha = image.alphaChannel();

          for (int i = 0; i < width; ++i)

          {

              for (int j = 0; j < height; ++j)

              {

                  col = image.pixel(i, j);

                  gray = qPremultiply(col);

                  image.setPixel(i, j, qRgb( gray,gray,gray) );

              }

          }

          image.setAlphaChannel(alpha);
         QPixmap pix;
         pix=QPixmap::fromImage(image);
         QSize labelSize = label->size();

         pix = pix.scaled(labelSize, Qt::IgnoreAspectRatio, Qt::FastTransformation);
          label->setPixmap(pix);
//image.save(nom_fil);

}








void filtre::on_pushButton_7_clicked()
{

    int gray;

        QRgb col;

           QImage image(nom_fil);



              int width = image.width();

              int height = image.height();

              QImage alpha = image.alphaChannel();

              for (int i = 0; i < width; ++i)

              {

                  for (int j = 0; j < height; ++j)

                  {

                      col = image.pixel(i, j);

                      gray = qRed(col);

                      image.setPixel(i, j, qRgb( 255,gray,gray) );

                  }

              }

              image.setAlphaChannel(alpha);
             QPixmap pix;
             pix=QPixmap::fromImage(image);
             QSize labelSize = label->size();

             pix = pix.scaled(labelSize, Qt::IgnoreAspectRatio, Qt::FastTransformation);
              label->setPixmap(pix);
            // image.save(nom_fil);
}





void filtre::on_pushButton_clicked()
{




               this->close();


}
