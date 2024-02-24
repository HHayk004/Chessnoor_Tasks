#include "buttonwithmyname.h"
#include "./ui_buttonwithmyname.h"

ButtonWithMyName::ButtonWithMyName()
    : ui(new Ui::ButtonWithMyName)
{
    ui->setupUi(this);
}

ButtonWithMyName::~ButtonWithMyName()
{
    delete ui;
}

void ButtonWithMyName::on_see_user_name_clicked()
{
    if (user_name != "")
    {
        QMessageBox::information(this, "User name", user_name);
    }

    else
    {
        QMessageBox::information(this, "User name", "You don't input the user name.");
    }
}

void ButtonWithMyName::on_user_name_input_textChanged(const QString &arg1)
{
    user_name = arg1;
}

