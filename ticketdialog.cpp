#include "ticketdialog.h"
#include "ui_ticketdialog.h"

TicketDialog::TicketDialog(QWidget *parent) : QDialog(parent), ui(new Ui::TicketDialog) {
    ui->setupUi(this);

    ui->comboPriority->addItems({"Low", "Medium", "High"});
    ui->comboStatus->addItems({"Open", "In Progress", "Closed"});

    connect(ui->btnEdit, &QPushButton::clicked, this, &TicketDialog::onEditClicked);
    connect(ui->btnSave, &QPushButton::clicked, this, &TicketDialog::onSaveClicked);
    connect(ui->btnCancel, &QPushButton::clicked, this, &TicketDialog::onCancelClicked);
    connect(ui->btnClose, &QPushButton::clicked, this, &QDialog::close);
}

TicketDialog::~TicketDialog() {
    delete ui;
}

void TicketDialog::setMode(Mode mode) {
    m_currentMode = mode;
    bool isView = (mode == View);

    ui->editTitle->setReadOnly(isView);
    ui->editDesc->setReadOnly(isView);
    ui->comboPriority->setEnabled(!isView);
    ui->comboStatus->setEnabled(!isView);

    ui->btnSave->setVisible(!isView);
    ui->btnCancel->setVisible(!isView);
    ui->btnEdit->setVisible(isView);
    ui->btnClose->setVisible(isView);

    if (mode == New) {
        this->setWindowTitle("New Ticket");
        ui->valId->setText("NEW");
        ui->valCreated->setText("---");
    } else if (mode == Edit) {
        this->setWindowTitle("Edit Ticket");
    } else {
        this->setWindowTitle("View Ticket");
    }
}

void TicketDialog::onEditClicked() {
    setMode(Edit);
}

void TicketDialog::onSaveClicked() {
    setMode(View);
}

void TicketDialog::onCancelClicked() {
    if (m_currentMode == New) {
        close();
    } else {
        setMode(View);
    }
}
