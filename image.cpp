#include "image.h"
#include "ui_image.h"

image::image(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::image)
{
    ui->setupUi(this);


}

image::~image()
{
    delete ui;
}


image::image(QString n, int l, int h)
{
    nom=n;
    ligne=l;
    hauteur=h;
}



int image::get_ligne()
{
    return ligne;
}



int image::get_hauteur()
{
    return hauteur;
}




QString image::get_nom()
{
    return nom;
}



QWidget *image::parent_image()
{
    return  this;
}



void image::slash_antislash()
{
    int i;
    for(i=0;i<nom.size();i++){
                                     if(nom[i]=='\\')  nom[i]='/';
                                          }


}







void image::on_AJOUET_clicked()
{

    QString monfichier;
    monfichier=QFileDialog::getOpenFileName(this,tr("Chercher image"), "C:/Users/Cherify/Pictures", tr("Image Files (*.png *.jpg *.bmp)"));
    if ( !monfichier.isEmpty())
        {

             ui->lineEdit->insert(monfichier);

        }




}






void image::on_pushButton_clicked()
{


     QEventLoop unepause;
     int i=0;

    nom=ui->lineEdit->text();



     if(nom.isEmpty())   QMessageBox::information(this, "ECHEC", "VEUILLEZ AJOUTER UNE PHOTO !!!");
     else{


      slash_antislash();

     while(i<=100){

      QTimer::singleShot (400, &unepause, SLOT (quit ()));

       ui->progressBar->setValue(i);
        unepause.exec();
     i=i+20;
     }


      QMessageBox::information(this, "Valide", "AJOUT "+nom);
      ui->lineEdit->setText("");
      this->close();
     }

}






void image::on_pushButton_2_clicked()
{
    this->close();
}




void image::rotation_image()
{


  if(nom!=NULL)  {rotation  unerotation(this,nom);
                            unerotation.exec();
                             }

else

      QMessageBox::information(this, "Vide", "Aucune photo CHARGEE !!!");
}


void image::rogner_image()
{

    if(nom!=NULL)  {rogner rognation(this,nom);
                              rognation.exec();
                               }

  else

        QMessageBox::information(this, "Vide", "Aucune photo CHARGEE !!!");

}




void image::filtrer_image()
{

    if(nom!=NULL)  {filtre filtration(this,nom);

                              filtration.exec();
                               }

  else

        QMessageBox::information(this, "Vide", "Aucune photo CHARGEE !!!");

}

void image::zoomer_image()
{

    if(nom!=NULL)  {zoom zoomation(this,nom);
                              zoomation.exec();
                               }

  else

        QMessageBox::information(this, "Vide", "Aucune photo CHARGEE !!!");

}

