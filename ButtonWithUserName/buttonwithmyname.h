#ifndef BUTTONWITHMYNAME_H
#define BUTTONWITHMYNAME_H

#include <QPushButton>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class ButtonWithMyName; }
QT_END_NAMESPACE

class ButtonWithMyName : public QPushButton
{
private:
    Q_OBJECT
    QString user_name;

public:
    ButtonWithMyName();
    ~ButtonWithMyName();

private slots:
    void on_see_user_name_clicked();

    void on_user_name_input_textChanged(const QString &arg1);

private:
    Ui::ButtonWithMyName *ui;
};
#endif // BUTTONWITHMYNAME_H
