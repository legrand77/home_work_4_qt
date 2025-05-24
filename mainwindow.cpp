#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->radioButton->setText("First");
    ui->radioButton_2->setText("Second");
    ui->comboBox->addItem("1");
    ui->comboBox->addItem("2");
    ui->comboBox->addItem("3");
    ui->comboBox->addItem("4");
    ui->comboBox->addItem("5");
    ui->comboBox->addItem("6");
    ui->comboBox->addItem("7");
    ui->comboBox->addItem("8");
    ui->comboBox->addItem("9");
    ui->comboBox->addItem("10");
    ui->pushButton->setText("Press");
    ui->pushButton->toggle();
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(10);
    ui->progressBar->setValue(0);

  connect(ui->pushButton, &QPushButton::clicked, [&](){
      int x=ui->progressBar->value()+1;
      ui->progressBar->setValue(x);
      if (x>10){
          ui->progressBar->setValue(0);
      }
    });

}

MainWindow::~MainWindow()
{
    delete ui;
}


