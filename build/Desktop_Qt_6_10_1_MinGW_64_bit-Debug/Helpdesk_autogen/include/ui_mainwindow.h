/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionView;
    QAction *actionEdit;
    QAction *actionDelete;
    QAction *actionExit;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayoutMain;
    QHBoxLayout *filterLayout;
    QLabel *labelStatus;
    QComboBox *comboStatus;
    QLabel *labelPriority;
    QComboBox *comboPriority;
    QLineEdit *editSearch;
    QPushButton *btnClear;
    QTableView *tableView;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuTicket;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName("actionNew");
        actionView = new QAction(MainWindow);
        actionView->setObjectName("actionView");
        actionEdit = new QAction(MainWindow);
        actionEdit->setObjectName("actionEdit");
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName("actionDelete");
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutMain = new QVBoxLayout(centralwidget);
        verticalLayoutMain->setObjectName("verticalLayoutMain");
        filterLayout = new QHBoxLayout();
        filterLayout->setObjectName("filterLayout");
        labelStatus = new QLabel(centralwidget);
        labelStatus->setObjectName("labelStatus");

        filterLayout->addWidget(labelStatus);

        comboStatus = new QComboBox(centralwidget);
        comboStatus->addItem(QString());
        comboStatus->setObjectName("comboStatus");

        filterLayout->addWidget(comboStatus);

        labelPriority = new QLabel(centralwidget);
        labelPriority->setObjectName("labelPriority");

        filterLayout->addWidget(labelPriority);

        comboPriority = new QComboBox(centralwidget);
        comboPriority->addItem(QString());
        comboPriority->setObjectName("comboPriority");

        filterLayout->addWidget(comboPriority);

        editSearch = new QLineEdit(centralwidget);
        editSearch->setObjectName("editSearch");

        filterLayout->addWidget(editSearch);

        btnClear = new QPushButton(centralwidget);
        btnClear->setObjectName("btnClear");

        filterLayout->addWidget(btnClear);


        verticalLayoutMain->addLayout(filterLayout);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayoutMain->addWidget(tableView);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuTicket = new QMenu(menubar);
        menuTicket->setObjectName("menuTicket");
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        toolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        MainWindow->addToolBar(toolBar);

        menuFile->addAction(actionExit);
        menuTicket->addAction(actionNew);
        menuTicket->addAction(actionView);
        menuTicket->addAction(actionEdit);
        menuTicket->addAction(actionDelete);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionView);
        toolBar->addAction(actionEdit);
        toolBar->addAction(actionDelete);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\241\320\270\321\201\321\202\320\265\320\274\320\260 \320\277\321\226\320\264\321\202\321\200\320\270\320\274\320\272\320\270 (Helpdesk)", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270", nullptr));
        actionView->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\263\320\273\321\217\320\264", nullptr));
        actionEdit->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\263\321\203\320\262\320\260\321\202\320\270", nullptr));
        actionDelete->setText(QCoreApplication::translate("MainWindow", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "\320\222\320\270\321\205\321\226\320\264", nullptr));
        labelStatus->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\321\203\321\201:", nullptr));
        comboStatus->setItemText(0, QCoreApplication::translate("MainWindow", "\320\222\321\201\321\226", nullptr));

        labelPriority->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\321\226\320\276\321\200\320\270\321\202\320\265\321\202:", nullptr));
        comboPriority->setItemText(0, QCoreApplication::translate("MainWindow", "\320\222\321\201\321\226", nullptr));

        editSearch->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\210\321\203\320\272...", nullptr));
        btnClear->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\320\270", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
        menuTicket->setTitle(QCoreApplication::translate("MainWindow", "\320\227\320\260\321\217\320\262\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
