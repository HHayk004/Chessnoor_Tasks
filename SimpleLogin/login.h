#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Login : public QWidget
{
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_loginButton_clicked();
    void on_usernameField_textChanged(const QString& new_username);

private:
    Ui::Login *ui;
    QString m_username;

private:
    bool usernameValidityCheck() const;
};
#endif // LOGIN_H
