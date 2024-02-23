/********************************************************************************
** Form generated from reading UI file 'helloworld.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLOWORLD_H
#define UI_HELLOWORLD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelloWorld
{
public:

    void setupUi(QWidget *HelloWorld)
    {
        if (HelloWorld->objectName().isEmpty())
            HelloWorld->setObjectName("HelloWorld");
        HelloWorld->resize(800, 600);

        retranslateUi(HelloWorld);

        QMetaObject::connectSlotsByName(HelloWorld);
    } // setupUi

    void retranslateUi(QWidget *HelloWorld)
    {
        HelloWorld->setWindowTitle(QCoreApplication::translate("HelloWorld", "HelloWorld", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelloWorld: public Ui_HelloWorld {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLOWORLD_H
