#ifndef PRINTUSERNAME_H
#define PRINTUSERNAME_H

#include <QWidget>

namespace Ui {
class PrintUserName;
}

class PrintUserName : public QWidget
{
    Q_OBJECT

public:
    explicit PrintUserName(const QString& username, QWidget *parent = nullptr);
    ~PrintUserName();

private slots:
    void on_showUserNameButton_clicked();

private:
    Ui::PrintUserName *ui;
    QString m_username;
};

#endif // PRINTUSERNAME_H
