#ifndef ZOOM_H
#define ZOOM_H

#include <QDialog>
#include <QLabel>
#include "valeur.h"

namespace Ui {
class zoom;
}

class zoom : public QDialog
{
    Q_OBJECT



private:
    Ui::zoom *ui;

    QPixmap *pixmap;
    QLabel *label;
    QString nom_z;
    valeur *v;

public:
    explicit zoom(QWidget *parent , QString nom);


    ~zoom();



private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();




    void on_pushButton_5_clicked();
};

#endif // ZOOM_H
