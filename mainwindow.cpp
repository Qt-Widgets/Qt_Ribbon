#include "mainwindow.h"
#include <QWidgetAction>
#include <QMenu>

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.widget->setFixedHeight(150);
	ui.scrollArea->setBackgroundRole(QPalette::Mid);

	ui.pushButton_MenuFile->setParent(ui.tabWidget_Main);

	QMenu* menu = new QMenu(this);
	ui.pushButton_MenuFile->setMenu(menu);

	QWidgetAction* actionNew = new QWidgetAction(this);
	actionNew->setDefaultWidget(new MenuItemWidget(QPixmap(":/png/file_new.png"), QString::fromStdWString(L"�½�"), this));
	menu->addAction(actionNew);


	QWidgetAction* actionOpen = new QWidgetAction(this);
	actionOpen->setDefaultWidget(new MenuItemWidget(QPixmap(":/png/file_open.png"), QString::fromStdWString(L"����"), this));
	menu->addAction(actionOpen);

	QWidgetAction* actionSave = new QWidgetAction(this);
	actionSave->setDefaultWidget(new MenuItemWidget(QPixmap(":/png/file_save.png"), QString::fromStdWString(L"����"), this));
	menu->addAction(actionSave);

	QWidgetAction* actionSaveAs = new QWidgetAction(this);
	actionSaveAs->setDefaultWidget(new MenuItemWidget(QPixmap(":/png/file_saveas.png"), QString::fromStdWString(L"����Ϊ"), this));
	menu->addAction(actionSaveAs);

	menu->addSeparator();

	QWidgetAction* actioPrint = new QWidgetAction(this);
	actioPrint->setDefaultWidget(new MenuItemWidget(QPixmap(":/png/file_print.png"), QString::fromStdWString(L"��ӡ"), this));
	menu->addAction(actioPrint);

	menu->addSeparator();

	QWidgetAction* actionAout= new QWidgetAction(this);
	actionAout->setDefaultWidget(new MenuItemWidget(QPixmap(":/png/about.png"), QString::fromStdWString(L"����"), this));
	menu->addAction(actionAout);

	QWidgetAction* actionExit = new QWidgetAction(this);
	actionExit->setDefaultWidget(new MenuItemWidget(QPixmap(":/png/exit.png"), QString::fromStdWString(L"�˳�"), this));
	menu->addAction(actionExit);
	connect(actionExit, SIGNAL(triggered()), this, SLOT(close()));

    initDataBaseComponent();
}

MainWindow::~MainWindow()
{

}

void MainWindow::initDataBaseComponent()
{
    QMenu* menu = new QMenu(this);
    ui.toolButtonFLCC->setMenu(menu);
    QWidgetAction* actionDataBase1 = new QWidgetAction(this);
    actionDataBase1->setDefaultWidget(new MenuItemWidget(QPixmap(":/png/smallalignleft.png"), QStringLiteral("FCLL_v0.1"), this));
    menu->addAction(actionDataBase1);

    QWidgetAction* actionDataBase2 = new QWidgetAction(this);
    actionDataBase2->setDefaultWidget(new MenuItemWidget(QPixmap(":/png/smallalignleft.png"), QStringLiteral("FCLL_v0.2"), this));
    menu->addAction(actionDataBase2);
}

void MainWindow::initDataBaseManagerComponent()
{

}
