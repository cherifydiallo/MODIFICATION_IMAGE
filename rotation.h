#ifndef ROTATION_H
#define ROTATION_H

#include <QDialog>
#include <QLabel>
#include <QPainter>
#include <QMessageBox>


namespace Ui {
class rotation;
}

class rotation : public QDialog
{
    Q_OBJECT

public:
    explicit rotation(QWidget *parent ,QString nom);

    ~rotation();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::rotation *ui;
    QPixmap *pixmap;
    QPixmap rotatedPixelFrame;
    QLabel *label;
    QString nom_rot;
    int degres;
    int nbre;



};


#endif // ROTATION_H
