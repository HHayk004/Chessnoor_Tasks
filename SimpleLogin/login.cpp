#include "login.h"
#include "./ui_login.h"
#include "printusername.h"
#include <QMessageBox>

Login::Login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_usernameField_textChanged(const QString &new_username)
{
    m_username = new_username;
}

void Login::on_loginButton_clicked()
{
    if (usernameValidityCheck())
    {
        hide();
        PrintUserName* next_window = new PrintUserName(m_username);
        next_window->show();
    }

    else
    {
        QMessageBox::information(this, "Warning", "Invalid username:");
    }
}

bool Login::usernameValidityCheck() const
{
    for (const QChar ch : m_username)
    {
        if (ch == ' ')
        {
            return false;
        }
    }

    return true;
}
