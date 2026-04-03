#ifndef TICKETDIALOG_H
#define TICKETDIALOG_H

#include <QDialog>

namespace Ui { class TicketDialog; }

class TicketDialog : public QDialog {
    Q_OBJECT

public:
    enum Mode { View, Edit, New };
    explicit TicketDialog(QWidget *parent = nullptr);
    ~TicketDialog();
    void setMode(Mode mode);

private slots:
    void onEditClicked();
    void onSaveClicked();
    void onCancelClicked();

private:
    Ui::TicketDialog *ui;
    Mode m_currentMode;
};
#endif
