#include "mainscene.h"
#include "ui_mainscene.h"

mainscene::mainscene(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mainscene)
{
    ui->setupUi(this);
}

mainscene::~mainscene()
{
    delete ui;
}
