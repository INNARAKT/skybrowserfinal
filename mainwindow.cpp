#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWebEngine>
#include <QtWebEngineWidgets>
#include <QWebEngineView>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)

{

    this->setWindowTitle("SkyBrowser");
    this->setGeometry(0, 0, 400, 400);
    view = new QWebEngineView(this);
    view->load(QUrl("https://yandex.ru"));
    view->setMinimumSize(400, 400);
    layout = new QVBoxLayout();
    layout->setContentsMargins(0,0,0,0);
    layout->setSpacing(0);

    lineedit = new QLineEdit();
    layout->addWidget(lineedit);
    ledButton = new QPushButton("Поиск");
    layout->addWidget(ledButton);
    layout->addWidget(view);
    this->setLayout(layout);

    connect(ledButton, SIGNAL(clicked()), this,SLOT(searchButtonClicked()));
    //connect(this, &WebDialog::getHtml, this, &WebDialog::handleHTML);
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::searchButtonClicked() {
    view->load(QUrl(lineedit->text()));
}
