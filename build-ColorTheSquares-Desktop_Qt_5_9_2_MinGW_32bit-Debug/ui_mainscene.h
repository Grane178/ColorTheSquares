/********************************************************************************
** Form generated from reading UI file 'mainscene.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINSCENE_H
#define UI_MAINSCENE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainscene
{
public:
    QAction *actionquit;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *mainscene)
    {
        if (mainscene->objectName().isEmpty())
            mainscene->setObjectName(QStringLiteral("mainscene"));
        mainscene->resize(400, 300);
        actionquit = new QAction(mainscene);
        actionquit->setObjectName(QStringLiteral("actionquit"));
        centralWidget = new QWidget(mainscene);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        mainscene->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(mainscene);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 17));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        mainscene->setMenuBar(menuBar);
        statusBar = new QStatusBar(mainscene);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        mainscene->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(actionquit);

        retranslateUi(mainscene);

        QMetaObject::connectSlotsByName(mainscene);
    } // setupUi

    void retranslateUi(QMainWindow *mainscene)
    {
        mainscene->setWindowTitle(QApplication::translate("mainscene", "mainscene", Q_NULLPTR));
        actionquit->setText(QApplication::translate("mainscene", "\351\200\200\345\207\272\346\270\270\346\210\217", Q_NULLPTR));
        menu->setTitle(QApplication::translate("mainscene", "\345\274\200\345\247\213", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class mainscene: public Ui_mainscene {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINSCENE_H
