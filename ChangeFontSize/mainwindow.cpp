#include "mainwindow.h"
#include <QFont>
#include <QStatusBar>
#include <QtDebug>
#include <qdebug.h>
#include <QVBoxLayout>
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent)
     : QMainWindow(parent)
{
     move(0,80);
     textEdit = new QTextEdit(this);

     //QTextEdit *textEdit = new QTextEdit(this);
     QPalette palette;
     palette.setColor(QPalette::Base, Qt::black);
     palette.setColor(QPalette::Text, Qt::white);
     textEdit->setPalette(palette);

     // 设置字体
     QFont font = textEdit->font();
     font.setPointSize(CurrentValue);
     font.setFamily("宋体");
     textEdit->setFont(font);

     // 设置spinbox
     QSpinBox *fontSizeSpinBox = new QSpinBox;
     fontSizeSpinBox->setMinimum(1);
     fontSizeSpinBox->setMaximum(99);
     fontSizeSpinBox->setValue(CurrentValue);
     fontSizeSpinBox->setFixedWidth(70);

     buttonB.setText("粘贴并整理");

     // 将spinbox和button放到水平布局中
     QHBoxLayout *hLayout = new QHBoxLayout;
     hLayout->addWidget(fontSizeSpinBox);
     hLayout->addWidget(&buttonB);

     // 将水平布局和TextEdit放到垂直布局中
     QVBoxLayout *vLayout = new QVBoxLayout;
     vLayout->addLayout(hLayout);
     vLayout->addWidget(textEdit);

     // 将垂直布局设置到centralWidget中
     QWidget *centralWidget = new QWidget(this);
     centralWidget->setLayout(vLayout);
     setCentralWidget(centralWidget);

     // 连接信号和槽函数
     connect(fontSizeSpinBox, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::onFontSizeSpinBoxValueChanged);
     connect(&buttonB, &QPushButton::clicked, this, &MainWindow::onButtonBClicked);

     // 将spinbox放到左上角
     vLayout->setAlignment(Qt::AlignLeft);
}

MainWindow::~MainWindow()
{
}

void MainWindow::onButtonBClicked()
{
    QClipboard *clipboard = QApplication::clipboard();   //获取系统剪贴板指针
    QString originalText = clipboard->text();            //获取剪贴板上文本信息

    QFont font = textEdit->font();

    font.setPointSize(MainWindow::CurrentValue);

    //qDebug() << "字体大小：" << fontSize;       //调试用
    //int fontSize = font.pointSize();          //调试用
    //QString text = textEdit->toPlainText();   //调试用
    //qDebug() << "text is " << text;          //调试用

    if(!originalText.isEmpty()){
        // 清除当前 QTextEdit 中的文本
        textEdit->clear();

        // 调用 QTextEdit 的粘贴功能
        textEdit->paste();

        // 全选刚粘贴的内容
        textEdit->selectAll();

        // 复制刚刚粘贴的内容
        textEdit->copy();

        // 粘贴到 QTextEdit 控件中
        textEdit->paste();

        textEdit->selectAll();
        font.setPointSize(MainWindow::CurrentValue);

        textEdit->selectAll();
        textEdit->undo();
    }else
    {
        QMessageBox msgBox;
        msgBox.setText("粘贴板是空的");
        msgBox.exec();
    }

}


void  MainWindow::onFontSizeSpinBoxValueChanged(int CurrentValue)
{
    QFont font = textEdit->font();
    textEdit->selectAll();
    font.setPointSize(CurrentValue);
    textEdit->selectAll();
    textEdit->setFont(font);
    MainWindow::CurrentValue = CurrentValue;
    textEdit->selectAll();
    textEdit->undo();
    textEdit->redo();
}
