#ifndef HELLOWORLD_H
#define HELLOWORLD_H

#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class HelloWorld; }
QT_END_NAMESPACE

class HelloWorld : public QLabel
{
    Q_OBJECT

public:
    HelloWorld();
    ~HelloWorld();

private:
    Ui::HelloWorld *ui;
};
#endif // HELLOWORLD_H
