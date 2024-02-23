#include "helloworld.h"
#include "./ui_helloworld.h"

HelloWorld::HelloWorld()
    : ui(new Ui::HelloWorld)
{
    ui->setupUi(this);
    setText("Hello World:");
    resize(200, 100);
}

HelloWorld::~HelloWorld()
{
    delete ui;
}

