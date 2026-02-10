#include "helloworld.h"
#include "./ui_helloworld.h"

HelloWorld::HelloWorld(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::HelloWorld)
{
    ui->setupUi(this);
    update_text();
}

HelloWorld::~HelloWorld()
{
    delete ui;
}

void HelloWorld::on_quitBtn_clicked()
{
    QApplication::quit();
}


void HelloWorld::on_inputEdt_textChanged(const QString &arg1)
{
    update_text();
}

void HelloWorld::update_text() {
    auto text = ui->inputEdt->text();
    text.prepend("Hello ");
    text.append("!");
    ui->outputLbl->setText(text);
}
