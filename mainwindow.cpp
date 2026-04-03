#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    model = new QStandardItemModel(0, 5, this);
    model->setHorizontalHeaderLabels({"ID", "Title", "Priority", "Status", "Created At"});
    ui->tableView->setModel(model);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    connect(ui->actionNew, &QAction::triggered, this, &MainWindow::onNew);
    connect(ui->actionView, &QAction::triggered, this, &MainWindow::onView);
    connect(ui->actionEdit, &QAction::triggered, this, &MainWindow::onEdit);
    connect(ui->actionDelete, &QAction::triggered, this, &MainWindow::onDelete);
    connect(ui->actionExit, &QAction::triggered, this, &QWidget::close);

    connect(ui->tableView->selectionModel(), &QItemSelectionModel::selectionChanged,
            this, &MainWindow::updateActionsState);

    updateActionsState();
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::updateActionsState() {
    bool hasSelection = ui->tableView->selectionModel()->hasSelection();
    ui->actionView->setEnabled(hasSelection);
    ui->actionEdit->setEnabled(hasSelection);
    ui->actionDelete->setEnabled(hasSelection);
}

void MainWindow::onNew() {
    if (!m_ticketDialog) m_ticketDialog = new TicketDialog(this);
    m_ticketDialog->setMode(TicketDialog::New);
    m_ticketDialog->show();
}

void MainWindow::onView() {
    if (!m_ticketDialog) m_ticketDialog = new TicketDialog(this);
    m_ticketDialog->setMode(TicketDialog::View);
    m_ticketDialog->show();
}

void MainWindow::onEdit() {
    if (!m_ticketDialog) m_ticketDialog = new TicketDialog(this);
    m_ticketDialog->setMode(TicketDialog::Edit);
    m_ticketDialog->show();
}

void MainWindow::onDelete() {
    QMessageBox::question(this, "Confirm", "Delete selected ticket?");
}
