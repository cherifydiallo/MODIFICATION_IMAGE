#ifndef ROGNER_H
#define ROGNER_H
#include <QLabel>
#include <QDialog>
#include <QPainter>
#include <QMessageBox>

namespace Ui {
class rogner;
}

class rogner : public QDialog
{
    Q_OBJECT

public:
    explicit rogner(QWidget *parent ,QString nom);
    ~rogner();


private slots:

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_verticalSlider_valueChanged(int value);

     void on_verticalSlider_2_valueChanged(int value);

     void on_horizontalSlider_valueChanged(int value);

     void on_horizontalSlider_2_valueChanged(int value);


     void on_pushButton_4_clicked();

private:
    Ui::rogner *ui;
    int x;
    int y;
    int t;
    int h;
    int nbre;
    int v1;
    int v2;
    int h1;
    int h2;

   QString nom_rog;
   QLabel *label;
   QPixmap * pixmap;


};

#endif // ROGNER_H
