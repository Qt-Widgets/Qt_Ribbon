#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QMainWindow>
#include "ui_mainwindow.h"
#include <QPainter>
#include <QLabel>
#include <QHBoxLayout>

class MenuItemWidget : public QWidget
{
	Q_OBJECT

public:
	MenuItemWidget(const QPixmap& icon, const QString& text, QWidget *parent = 0)
	{
		QLabel* label_Icon = new QLabel(this);
		label_Icon->setFixedSize(32, 32);
		label_Icon->setScaledContents(true);
		label_Icon->setPixmap(icon);

		QLabel* label_Text = new QLabel(text,this);

		QHBoxLayout* layout = new QHBoxLayout;
		layout->setContentsMargins(20, 6, 50, 6);
		layout->setSpacing(10);
		layout->addWidget(label_Icon);
		layout->addWidget(label_Text);
		setLayout(layout);

		setFixedWidth(240);
	}
	~MenuItemWidget()
	{}

protected:
	void paintEvent(QPaintEvent* e) Q_DECL_OVERRIDE{
		QStyleOption opt;
		opt.init(this);
		QPainter p(this);
		style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
	}

private:
};

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = 0);
	~MainWindow();

private:
    void initDataBaseComponent();
    void initDataBaseManagerComponent();
    Ui::MainWindowClass ui;
};

#endif // MAINWINDOW_H
