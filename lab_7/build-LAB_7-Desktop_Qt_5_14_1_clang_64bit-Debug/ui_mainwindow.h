/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *MainResultLabel;
    QListWidget *listOutput;
    QTableWidget *tableOutput;
    QPlainTextEdit *memoOutput;
    QLineEdit *enterSizeOfArray;
    QLineEdit *enterScalar;
    QLineEdit *enterChangingSize;
    QLineEdit *enterElementsOfArray;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QListWidget *listInputWidget;
    QTableWidget *tableInputeWidget;
    QPushButton *sizeOK;
    QPushButton *scalarOK;
    QPushButton *changingOK;
    QPushButton *elementsOK;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *accessLineEdit;
    QLabel *label_15;
    QPushButton *accessOK;
    QLabel *acessLabel;
    QLabel *label_14;
    QLabel *label_9;
    QPushButton *btn_Average;
    QPushButton *btn_Increase;
    QPushButton *btn_Max;
    QPushButton *btn_Decrease;
    QPushButton *btn_ChangeSize;
    QPushButton *btn_Min;
    QPushButton *btn_Multiply;
    QPushButton *plus;
    QPushButton *minusSubstract;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1048, 669);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainResultLabel = new QLabel(centralwidget);
        MainResultLabel->setObjectName(QString::fromUtf8("MainResultLabel"));
        MainResultLabel->setGeometry(QRect(10, 30, 256, 151));
        MainResultLabel->setFrameShape(QFrame::StyledPanel);
        listOutput = new QListWidget(centralwidget);
        listOutput->setObjectName(QString::fromUtf8("listOutput"));
        listOutput->setGeometry(QRect(270, 30, 256, 151));
        tableOutput = new QTableWidget(centralwidget);
        tableOutput->setObjectName(QString::fromUtf8("tableOutput"));
        tableOutput->setGeometry(QRect(530, 30, 256, 151));
        memoOutput = new QPlainTextEdit(centralwidget);
        memoOutput->setObjectName(QString::fromUtf8("memoOutput"));
        memoOutput->setGeometry(QRect(790, 30, 256, 151));
        enterSizeOfArray = new QLineEdit(centralwidget);
        enterSizeOfArray->setObjectName(QString::fromUtf8("enterSizeOfArray"));
        enterSizeOfArray->setGeometry(QRect(20, 535, 80, 21));
        enterScalar = new QLineEdit(centralwidget);
        enterScalar->setObjectName(QString::fromUtf8("enterScalar"));
        enterScalar->setGeometry(QRect(160, 535, 80, 21));
        enterChangingSize = new QLineEdit(centralwidget);
        enterChangingSize->setObjectName(QString::fromUtf8("enterChangingSize"));
        enterChangingSize->setGeometry(QRect(290, 535, 80, 21));
        enterElementsOfArray = new QLineEdit(centralwidget);
        enterElementsOfArray->setObjectName(QString::fromUtf8("enterElementsOfArray"));
        enterElementsOfArray->setGeometry(QRect(420, 535, 80, 21));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 121, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(270, 10, 131, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(530, 10, 131, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(790, 10, 101, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 515, 121, 16));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(160, 515, 81, 16));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(290, 515, 121, 16));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(420, 515, 151, 16));
        listInputWidget = new QListWidget(centralwidget);
        listInputWidget->setObjectName(QString::fromUtf8("listInputWidget"));
        listInputWidget->setGeometry(QRect(530, 190, 516, 281));
        tableInputeWidget = new QTableWidget(centralwidget);
        tableInputeWidget->setObjectName(QString::fromUtf8("tableInputeWidget"));
        tableInputeWidget->setGeometry(QRect(10, 190, 516, 281));
        sizeOK = new QPushButton(centralwidget);
        sizeOK->setObjectName(QString::fromUtf8("sizeOK"));
        sizeOK->setGeometry(QRect(100, 530, 41, 31));
        scalarOK = new QPushButton(centralwidget);
        scalarOK->setObjectName(QString::fromUtf8("scalarOK"));
        scalarOK->setGeometry(QRect(240, 530, 41, 32));
        changingOK = new QPushButton(centralwidget);
        changingOK->setObjectName(QString::fromUtf8("changingOK"));
        changingOK->setGeometry(QRect(370, 530, 41, 32));
        elementsOK = new QPushButton(centralwidget);
        elementsOK->setObjectName(QString::fromUtf8("elementsOK"));
        elementsOK->setGeometry(QRect(500, 530, 41, 32));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 470, 516, 31));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(530, 470, 516, 32));
        accessLineEdit = new QLineEdit(centralwidget);
        accessLineEdit->setObjectName(QString::fromUtf8("accessLineEdit"));
        accessLineEdit->setGeometry(QRect(910, 530, 37, 21));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(970, 515, 20, 51));
        QFont font;
        font.setPointSize(20);
        label_15->setFont(font);
        accessOK = new QPushButton(centralwidget);
        accessOK->setObjectName(QString::fromUtf8("accessOK"));
        accessOK->setGeometry(QRect(900, 560, 151, 31));
        acessLabel = new QLabel(centralwidget);
        acessLabel->setObjectName(QString::fromUtf8("acessLabel"));
        acessLabel->setGeometry(QRect(990, 525, 51, 31));
        acessLabel->setAutoFillBackground(false);
        acessLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
" background-color: white;\n"
"\n"
"}\n"
""));
        acessLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(950, 520, 31, 41));
        label_14->setFont(font);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(900, 520, 21, 41));
        label_9->setFont(font);
        btn_Average = new QPushButton(centralwidget);
        btn_Average->setObjectName(QString::fromUtf8("btn_Average"));
        btn_Average->setGeometry(QRect(740, 530, 101, 31));
        btn_Increase = new QPushButton(centralwidget);
        btn_Increase->setObjectName(QString::fromUtf8("btn_Increase"));
        btn_Increase->setGeometry(QRect(650, 560, 101, 31));
        btn_Max = new QPushButton(centralwidget);
        btn_Max->setObjectName(QString::fromUtf8("btn_Max"));
        btn_Max->setGeometry(QRect(560, 530, 101, 31));
        btn_Decrease = new QPushButton(centralwidget);
        btn_Decrease->setObjectName(QString::fromUtf8("btn_Decrease"));
        btn_Decrease->setGeometry(QRect(560, 560, 101, 31));
        btn_ChangeSize = new QPushButton(centralwidget);
        btn_ChangeSize->setObjectName(QString::fromUtf8("btn_ChangeSize"));
        btn_ChangeSize->setGeometry(QRect(740, 590, 101, 31));
        btn_Min = new QPushButton(centralwidget);
        btn_Min->setObjectName(QString::fromUtf8("btn_Min"));
        btn_Min->setGeometry(QRect(650, 530, 101, 31));
        btn_Multiply = new QPushButton(centralwidget);
        btn_Multiply->setObjectName(QString::fromUtf8("btn_Multiply"));
        btn_Multiply->setGeometry(QRect(740, 560, 101, 31));
        plus = new QPushButton(centralwidget);
        plus->setObjectName(QString::fromUtf8("plus"));
        plus->setGeometry(QRect(560, 590, 101, 32));
        minusSubstract = new QPushButton(centralwidget);
        minusSubstract->setObjectName(QString::fromUtf8("minusSubstract"));
        minusSubstract->setGeometry(QRect(650, 590, 101, 32));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1048, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        MainResultLabel->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Main Result Label", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "List Output", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Table Output", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Memo Output", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Enter size of array:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Enter scalar:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Enter changing size:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Enter elements:", nullptr));
        sizeOK->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        scalarOK->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        changingOK->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        elementsOK->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Table enter elements", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "List Enter Elements", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        accessOK->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        acessLabel->setText(QString());
        label_14->setText(QCoreApplication::translate("MainWindow", "]", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "[", nullptr));
        btn_Average->setText(QCoreApplication::translate("MainWindow", "AVERAGE", nullptr));
        btn_Increase->setText(QCoreApplication::translate("MainWindow", "INCREAS", nullptr));
        btn_Max->setText(QCoreApplication::translate("MainWindow", "MAX", nullptr));
        btn_Decrease->setText(QCoreApplication::translate("MainWindow", "DECREAS", nullptr));
        btn_ChangeSize->setText(QCoreApplication::translate("MainWindow", "CHANGE", nullptr));
        btn_Min->setText(QCoreApplication::translate("MainWindow", "MIN", nullptr));
        btn_Multiply->setText(QCoreApplication::translate("MainWindow", "MULTIP", nullptr));
        plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        minusSubstract->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
