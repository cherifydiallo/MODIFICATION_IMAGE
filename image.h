#ifndef IMAGE_H
#define IMAGE_H
#include <QFileDialog>
#include <QMessageBox>
#include <QTimer>
#include <QEventLoop>
#include "rotation.h"
#include "rogner.h"
#include "filtre.h"
#include "zoom.h"

namespace Ui {
class image;
}

class image : public QDialog
{
    Q_OBJECT

private:
    Ui::image *ui;
    QString nom;
    int ligne;
    int hauteur;
    int profondeur;


public:
    explicit image(QWidget *parent = 0);
    ~image();

    QWidget * parent_image();

    image(QString,int,int);
    int get_ligne();
    int get_hauteur();
    QString get_nom();

    void slash_antislash();


    void rotation_image();
    void rogner_image();
    void filtrer_image();
     void zoomer_image();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_AJOUET_clicked();



};

#endif // IMAGE_H
