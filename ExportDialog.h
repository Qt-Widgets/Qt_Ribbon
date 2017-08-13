#ifndef EXPORTDIALOG_H
#define EXPORTDIALOG_H

#include "ui_ExportDialog.h"

class ExportDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ExportDialog(QWidget *parent = 0);
public Q_SLOTS:
    void on_exportFile_clicked();
    void on_cancelButton_clicked();

private:
    Ui::ExportDialog ui;
};

class InportDialog : public QDialog
{
    Q_OBJECT
public:
    explicit InportDialog(QWidget* parent =Q_NULLPTR);
public Q_SLOTS:
    void on_exportFile_clicked();
    void on_cancelButton_clicked();
private:
    Ui::ExportDialog ui;
};

#endif // EXPORTDIALOG_H
