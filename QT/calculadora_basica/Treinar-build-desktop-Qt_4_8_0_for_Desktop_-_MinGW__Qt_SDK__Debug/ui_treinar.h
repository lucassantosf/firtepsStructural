/********************************************************************************
** Form generated from reading UI file 'treinar.ui'
**
** Created: Sun 22. Dec 12:02:06 2013
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TREINAR_H
#define UI_TREINAR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Treinar
{
public:
    QWidget *centralWidget;
    QLineEdit *n1Edit;
    QLineEdit *n2Edit;
    QPushButton *goButton;
    QLineEdit *REdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Treinar)
    {
        if (Treinar->objectName().isEmpty())
            Treinar->setObjectName(QString::fromUtf8("Treinar"));
        Treinar->resize(673, 435);
        centralWidget = new QWidget(Treinar);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        n1Edit = new QLineEdit(centralWidget);
        n1Edit->setObjectName(QString::fromUtf8("n1Edit"));
        n1Edit->setGeometry(QRect(270, 80, 113, 20));
        n2Edit = new QLineEdit(centralWidget);
        n2Edit->setObjectName(QString::fromUtf8("n2Edit"));
        n2Edit->setGeometry(QRect(270, 120, 113, 20));
        goButton = new QPushButton(centralWidget);
        goButton->setObjectName(QString::fromUtf8("goButton"));
        goButton->setGeometry(QRect(290, 160, 75, 23));
        REdit = new QLineEdit(centralWidget);
        REdit->setObjectName(QString::fromUtf8("REdit"));
        REdit->setGeometry(QRect(270, 200, 113, 20));
        Treinar->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Treinar);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 673, 20));
        Treinar->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Treinar);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Treinar->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Treinar);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Treinar->setStatusBar(statusBar);

        retranslateUi(Treinar);

        QMetaObject::connectSlotsByName(Treinar);
    } // setupUi

    void retranslateUi(QMainWindow *Treinar)
    {
        Treinar->setWindowTitle(QApplication::translate("Treinar", "Treinar", 0, QApplication::UnicodeUTF8));
        goButton->setText(QApplication::translate("Treinar", "Go", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Treinar: public Ui_Treinar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TREINAR_H
