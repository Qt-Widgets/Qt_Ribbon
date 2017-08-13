#include "SearchWindow.h"
#include "ExportDialog.h"

SearchWindow::SearchWindow(QWidget *parent) :
    QWidget(parent)
{
    ui.setupUi(this);
    connect(ui.toolButtonInport,&QToolButton::clicked,[&](){
        QDialog* pDia = new InportDialog(this);
        pDia->show();
    });
    connect(ui.toolButtonExport,&QToolButton::clicked,[&](){
        QDialog* pDia = new ExportDialog(this);
        pDia->show();
    });
}
