#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include "ticketdialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onNew();
    void onView();
    void onEdit();
    void onDelete();
    void updateActionsState();

private:
    Ui::MainWindow *ui;
    QStandardItemModel *model;
    TicketDialog *m_ticketDialog = nullptr;
};
#endif
