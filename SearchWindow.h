#ifndef SEARCHWINDOW_H
#define SEARCHWINDOW_H

#include "ui_SearchWindow.h"

class SearchWindow : public QWidget
{
    Q_OBJECT

public:
    explicit SearchWindow(QWidget *parent = 0);

private:
    Ui::SearchWindow ui;
};

#endif // SEARCHWINDOW_H
