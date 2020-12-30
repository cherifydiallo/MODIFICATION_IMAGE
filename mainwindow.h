#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "image.h"
#include <QMainWindow>
#include <QString>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
   void creer_menu();
   void creer_actions();
   void creer_connections();

private:
    Ui::MainWindow *ui;
       image *samaphoto;

       QMenu * unephoto;
                         QAction *  ajouterPHOTO;

                         QAction * FERMER;
       QMenu * rogner;
                         QAction *  rognerPHOTO;
       QMenu * zoom;
                         QAction * zoomPHOTO;

       QMenu * rotation;
                          QAction * rotationPHOTO;
       QMenu * filtre;
                         QAction * filtrePHOTO;



public slots:

                          void ajouter_PHOTO();
                          void rotation_PHOTO();
                          void rogner_PHOTO();
                          void filtrer_PHOTO();
                          void zoomer_PHOTO();


};

#endif // MAINWINDOW_H
