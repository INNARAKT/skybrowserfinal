#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QtWebEngine>
#include <QtWebEngineWidgets>
#include <QWebEngineView>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QWebEngineView *view;
    QVBoxLayout *layout;
    QLineEdit *lineedit;
    QPushButton *ledButton;

public slots:
    void searchButtonClicked();

//signals:
    //void getHtml(QString html);

//private slots:
    //void onLoadFinished();
    //void handleHTML(QString html);

//void QLineEdit::onLoadFinished()
};
#endif // MAINWINDOW_H
