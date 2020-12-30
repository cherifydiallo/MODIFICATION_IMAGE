#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    samaphoto=new image(parent);

    creer_menu();
    creer_actions();
    creer_connections();




}





MainWindow::~MainWindow()
{
    delete ui;
    delete samaphoto;
}





void MainWindow::creer_menu()
{

    menuBar()->setStyleSheet(
               "background:white;"

                "color:blue;"
                "font: bold 14px;"
                "border-radius: 10px;"

                );

    unephoto = menuBar()->addMenu("-           PHOTO           -");
    rogner=menuBar()->addMenu("-           ROGNER          -");
    zoom=menuBar()->addMenu("-          ZOOM          -");
    rotation=menuBar()->addMenu("-         ROTATION        -");
    filtre=menuBar()->addMenu("-          FILTRE         -");

}





void MainWindow::creer_actions()
{

    ajouterPHOTO=unephoto->addAction("Ajouter PHOTO");

    FERMER=unephoto->addAction(" FERMER ");
    rognerPHOTO=rogner->addAction("Rogner PHOTO");
    zoomPHOTO=zoom->addAction("Zoom PHOTO");

    rotationPHOTO=rotation->addAction("Rotation PHOTO");
    filtrePHOTO=filtre->addAction("Filtre PHOTO");


}





void MainWindow::creer_connections()
{
    connect(FERMER,SIGNAL(triggered()), qApp, SLOT(quit()));
    connect(ajouterPHOTO,SIGNAL(triggered()), this, SLOT(ajouter_PHOTO()));
    connect(rotationPHOTO,SIGNAL(triggered()), this, SLOT(rotation_PHOTO()));
    connect(rognerPHOTO,SIGNAL(triggered()), this, SLOT(rogner_PHOTO()));
     connect(filtrePHOTO,SIGNAL(triggered()), this, SLOT(filtrer_PHOTO()));
    connect(zoomPHOTO,SIGNAL(triggered()), this, SLOT(zoomer_PHOTO()));

}





void MainWindow::ajouter_PHOTO()
{

    samaphoto->exec();

}


void MainWindow::rotation_PHOTO()
{
    samaphoto->rotation_image();
}

void MainWindow::rogner_PHOTO()
{
 samaphoto->rogner_image();


}

void MainWindow::filtrer_PHOTO()
{
    samaphoto->filtrer_image();
}

void MainWindow::zoomer_PHOTO()
{
    samaphoto->zoomer_image();
}
