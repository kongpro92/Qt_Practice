#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->button1->setProperty("pagematches",true);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_tabWidget_currentChanged(int index)
{
     ui->button1->setProperty("pagematches",false);
     ui->button2->setProperty("pagematches",false);
     ui->button3->setProperty("pagematches",false);

     if(index==0)      ui->button1->setProperty("pagematches",true);
     else if(index==1) ui->button2->setProperty("pagematches",true);
     else if(index==2) ui->button3->setProperty("pagematches",true);

      ui->button1->style()->polish(ui->button1);
     ui->button2->style()->polish(ui->button2);
     ui->button3->style()->polish(ui->button3);
}
