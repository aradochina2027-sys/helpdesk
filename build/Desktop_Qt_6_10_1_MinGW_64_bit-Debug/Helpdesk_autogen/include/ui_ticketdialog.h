/********************************************************************************
** Form generated from reading UI file 'ticketdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICKETDIALOG_H
#define UI_TICKETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TicketDialog
{
public:
    QVBoxLayout *v;
    QFormLayout *f;
    QLabel *l1;
    QLabel *valId;
    QLabel *l2;
    QLineEdit *editTitle;
    QLabel *l3;
    QComboBox *comboPriority;
    QLabel *l4;
    QComboBox *comboStatus;
    QLabel *l5;
    QLabel *valCreated;
    QLabel *l6;
    QPlainTextEdit *editDesc;
    QHBoxLayout *h;
    QSpacerItem *s;
    QPushButton *btnEdit;
    QPushButton *btnSave;
    QPushButton *btnCancel;
    QPushButton *btnClose;

    void setupUi(QDialog *TicketDialog)
    {
        if (TicketDialog->objectName().isEmpty())
            TicketDialog->setObjectName("TicketDialog");
        TicketDialog->resize(400, 450);
        v = new QVBoxLayout(TicketDialog);
        v->setObjectName("v");
        f = new QFormLayout();
        f->setObjectName("f");
        l1 = new QLabel(TicketDialog);
        l1->setObjectName("l1");

        f->setWidget(0, QFormLayout::ItemRole::LabelRole, l1);

        valId = new QLabel(TicketDialog);
        valId->setObjectName("valId");

        f->setWidget(0, QFormLayout::ItemRole::FieldRole, valId);

        l2 = new QLabel(TicketDialog);
        l2->setObjectName("l2");

        f->setWidget(1, QFormLayout::ItemRole::LabelRole, l2);

        editTitle = new QLineEdit(TicketDialog);
        editTitle->setObjectName("editTitle");

        f->setWidget(1, QFormLayout::ItemRole::FieldRole, editTitle);

        l3 = new QLabel(TicketDialog);
        l3->setObjectName("l3");

        f->setWidget(2, QFormLayout::ItemRole::LabelRole, l3);

        comboPriority = new QComboBox(TicketDialog);
        comboPriority->setObjectName("comboPriority");

        f->setWidget(2, QFormLayout::ItemRole::FieldRole, comboPriority);

        l4 = new QLabel(TicketDialog);
        l4->setObjectName("l4");

        f->setWidget(3, QFormLayout::ItemRole::LabelRole, l4);

        comboStatus = new QComboBox(TicketDialog);
        comboStatus->setObjectName("comboStatus");

        f->setWidget(3, QFormLayout::ItemRole::FieldRole, comboStatus);

        l5 = new QLabel(TicketDialog);
        l5->setObjectName("l5");

        f->setWidget(4, QFormLayout::ItemRole::LabelRole, l5);

        valCreated = new QLabel(TicketDialog);
        valCreated->setObjectName("valCreated");

        f->setWidget(4, QFormLayout::ItemRole::FieldRole, valCreated);

        l6 = new QLabel(TicketDialog);
        l6->setObjectName("l6");

        f->setWidget(5, QFormLayout::ItemRole::LabelRole, l6);

        editDesc = new QPlainTextEdit(TicketDialog);
        editDesc->setObjectName("editDesc");

        f->setWidget(5, QFormLayout::ItemRole::FieldRole, editDesc);


        v->addLayout(f);

        h = new QHBoxLayout();
        h->setObjectName("h");
        s = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        h->addItem(s);

        btnEdit = new QPushButton(TicketDialog);
        btnEdit->setObjectName("btnEdit");

        h->addWidget(btnEdit);

        btnSave = new QPushButton(TicketDialog);
        btnSave->setObjectName("btnSave");

        h->addWidget(btnSave);

        btnCancel = new QPushButton(TicketDialog);
        btnCancel->setObjectName("btnCancel");

        h->addWidget(btnCancel);

        btnClose = new QPushButton(TicketDialog);
        btnClose->setObjectName("btnClose");

        h->addWidget(btnClose);


        v->addLayout(h);


        retranslateUi(TicketDialog);

        QMetaObject::connectSlotsByName(TicketDialog);
    } // setupUi

    void retranslateUi(QDialog *TicketDialog)
    {
        l1->setText(QCoreApplication::translate("TicketDialog", "ID:", nullptr));
        valId->setText(QCoreApplication::translate("TicketDialog", "---", nullptr));
        l2->setText(QCoreApplication::translate("TicketDialog", "\320\242\320\265\320\274\320\260:", nullptr));
        l3->setText(QCoreApplication::translate("TicketDialog", "\320\237\321\200\321\226\320\276\321\200\320\270\321\202\320\265\321\202:", nullptr));
        l4->setText(QCoreApplication::translate("TicketDialog", "\320\241\321\202\320\260\321\202\321\203\321\201:", nullptr));
        l5->setText(QCoreApplication::translate("TicketDialog", "\320\241\321\202\320\262\320\276\321\200\320\265\320\275\320\276:", nullptr));
        valCreated->setText(QCoreApplication::translate("TicketDialog", "---", nullptr));
        l6->setText(QCoreApplication::translate("TicketDialog", "\320\236\320\277\320\270\321\201:", nullptr));
        btnEdit->setText(QCoreApplication::translate("TicketDialog", "\320\227\320\274\321\226\320\275\320\270\321\202\320\270", nullptr));
        btnSave->setText(QCoreApplication::translate("TicketDialog", "\320\227\320\261\320\265\321\200\320\265\320\263\321\202\320\270", nullptr));
        btnCancel->setText(QCoreApplication::translate("TicketDialog", "\320\222\321\226\320\264\320\274\321\226\320\275\320\260", nullptr));
        btnClose->setText(QCoreApplication::translate("TicketDialog", "\320\227\320\260\320\272\321\200\320\270\321\202\320\270", nullptr));
        (void)TicketDialog;
    } // retranslateUi

};

namespace Ui {
    class TicketDialog: public Ui_TicketDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICKETDIALOG_H
