#include "ExportDialog.h"
#include <QFileDialog>

ExportDialog::ExportDialog(QWidget *parent) :
    QDialog(parent)
{
    ui.setupUi(this);
}

void ExportDialog::on_exportFile_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this,
            QStringLiteral("导出数据文件"),
            ui.exportFilePath->text(),
             "*.csv;;*.txt;;*.xlsx");
           //QString(" (*%1)").arg(ui->exportFormat->currentText()));

        if (!fileName.isNull())
        {
            ui.exportFilePath->setText(fileName);
        }
        else
        {
            //点的是取消
        }
}

void ExportDialog::on_cancelButton_clicked()
{
    this->close();
}

InportDialog::InportDialog(QWidget *parent)
    : QDialog(parent)
{
    ui.setupUi(this);
    ui.exportButton->setText(QStringLiteral("导入"));
    ui.labelExport->setText(QStringLiteral("导入文件路径"));
}

void InportDialog::on_exportFile_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this,
            QStringLiteral("导出数据文件"),
            ui.exportFilePath->text(),
             "*.csv;;*.txt;;*.xlsx");
           //QString(" (*%1)").arg(ui->exportFormat->currentText()));

        if (!fileName.isNull())
        {
            ui.exportFilePath->setText(fileName);
        }
        else
        {
            //点的是取消
        }
}

void InportDialog::on_cancelButton_clicked()
{
    this->close();
}
