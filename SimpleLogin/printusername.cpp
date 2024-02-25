#include "printusername.h"
#include "ui_printusername.h"
#include <QMessageBox>

PrintUserName::PrintUserName(const QString& username, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PrintUserName),
    m_username(username)
{
    ui->setupUi(this);
}

PrintUserName::~PrintUserName()
{
    delete ui;
}

void PrintUserName::on_showUserNameButton_clicked()
{
    QMessageBox::information(this, "Username", m_username);
}

