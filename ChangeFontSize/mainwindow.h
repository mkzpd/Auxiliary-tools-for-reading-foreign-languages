#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>
#include <QSpinBox>
#include <QPushButton>
//#include <QBoxLayout>
#include <QVBoxLayout>
#include <QHBoxLayout>
//#include <QLayout>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void onFontSizeSpinBoxValueChanged(int CurrentValue);

    void onButtonBClicked();

private:
    int CurrentValue = 25;
    QTextEdit *textEdit;
    QPushButton buttonB;
};

#endif // MAINWINDOW_H
