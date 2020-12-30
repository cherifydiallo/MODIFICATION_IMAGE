#ifndef FILTRE_H
#define FILTRE_H

#include <QDialog>
#include <QLabel>
#include <QMessageBox>

namespace Ui {
class filtre;
}

class filtre : public QDialog
{
    Q_OBJECT

public:
    explicit filtre(QWidget *parent , QString nom);
    ~filtre();

private slots:
    void on_bleu_clicked();

    void on_vert_clicked();

    void on_VIOLET_clicked();

    void on_ocean_clicked();

    void on_noirblanc_clicked();


    void on_noir_clicked();

    void on_pushButton_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::filtre *ui;
    QPixmap *pixmap;
    QLabel *label;
    QString nom_fil;



};

#endif // FILTRE_H
