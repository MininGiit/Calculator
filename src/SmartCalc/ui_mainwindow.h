/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow {
 public:
  QWidget *centralwidget;
  QGridLayout *gridLayout_3;
  QTabWidget *tabWidget;
  QWidget *tab_3;
  QLineEdit *input;
  QLineEdit *output;
  QPushButton *equalsButton;
  QPushButton *numButton6;
  QPushButton *atanButton;
  QPushButton *numButton9;
  QPushButton *asinButton;
  QPushButton *numButton7;
  QPushButton *tanButton;
  QPushButton *numButton2;
  QPushButton *logButton;
  QPushButton *bracketRightButton;
  QPushButton *numButton8;
  QPushButton *numButton0;
  QPushButton *addButton;
  QPushButton *numButton1;
  QPushButton *sinButton;
  QPushButton *powButton;
  QPushButton *sqrtButton;
  QPushButton *bracetLeftButton;
  QLabel *label;
  QPushButton *numButton5;
  QPushButton *modButton;
  QLineEdit *inputX;
  QPushButton *mulButton;
  QPushButton *acosButton;
  QPushButton *cosButton;
  QPushButton *numButton4;
  QPushButton *numButton3;
  QPushButton *lnButton;
  QPushButton *divButton;
  QPushButton *subButton;
  QWidget *tab;
  QWidget *gridLayoutWidget;
  QGridLayout *gridLayout_2;
  QLabel *label_2;
  QLabel *label_3;
  QLineEdit *XminLineEdit;
  QLineEdit *XmaxLineEdit;
  QLineEdit *inputFunc;
  QWidget *gridLayoutWidget_2;
  QGridLayout *gridLayout_4;
  QLabel *label_4;
  QLabel *label_5;
  QLineEdit *YminLineEdit;
  QLineEdit *YmaxLineEdit;
  QCustomPlot *widget;
  QPushButton *plotPutton;
  QWidget *tab_4;
  QLineEdit *amountInput;
  QLabel *label_6;
  QLineEdit *termInput;
  QLabel *label_7;
  QLabel *label_8;
  QLineEdit *rateInput;
  QGroupBox *typeCreditGB;
  QWidget *gridLayoutWidget_3;
  QGridLayout *gridLayout;
  QRadioButton *annuity;
  QRadioButton *diff;
  QPushButton *CreditCalcButton;
  QLineEdit *totalOut;
  QLineEdit *overpaymentOut;
  QLineEdit *paymentOut;
  QLabel *label_9;
  QLabel *label_10;
  QLabel *label_11;
  QTableWidget *diffPayWidget;
  QWidget *tab_5;
  QStatusBar *statusbar;

  void setupUi(QMainWindow *MainWindow) {
    if (MainWindow->objectName().isEmpty())
      MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
    MainWindow->setEnabled(true);
    MainWindow->resize(820, 590);
    QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
    MainWindow->setSizePolicy(sizePolicy);
    MainWindow->setMinimumSize(QSize(820, 590));
    MainWindow->setMaximumSize(QSize(820, 590));
    centralwidget = new QWidget(MainWindow);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    gridLayout_3 = new QGridLayout(centralwidget);
    gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
    tabWidget = new QTabWidget(centralwidget);
    tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
    tab_3 = new QWidget();
    tab_3->setObjectName(QString::fromUtf8("tab_3"));
    input = new QLineEdit(tab_3);
    input->setObjectName(QString::fromUtf8("input"));
    input->setGeometry(QRect(30, 20, 551, 61));
    input->setStyleSheet(
        QString::fromUtf8("font: 25pt \".AppleSystemUIFont\";"));
    input->setAlignment(Qt::AlignRight | Qt::AlignTrailing | Qt::AlignVCenter);
    output = new QLineEdit(tab_3);
    output->setObjectName(QString::fromUtf8("output"));
    output->setGeometry(QRect(350, 100, 231, 41));
    output->setAlignment(Qt::AlignRight | Qt::AlignTrailing | Qt::AlignVCenter);
    output->setReadOnly(true);
    equalsButton = new QPushButton(tab_3);
    equalsButton->setObjectName(QString::fromUtf8("equalsButton"));
    equalsButton->setGeometry(QRect(640, 20, 101, 61));
    sizePolicy.setHeightForWidth(
        equalsButton->sizePolicy().hasHeightForWidth());
    equalsButton->setSizePolicy(sizePolicy);
    equalsButton->setStyleSheet(
        QString::fromUtf8(" font: 30pt \".AppleSystemUIFont\";"));
    equalsButton->setIconSize(QSize(32, 32));
    numButton6 = new QPushButton(tab_3);
    numButton6->setObjectName(QString::fromUtf8("numButton6"));
    numButton6->setGeometry(QRect(210, 300, 61, 61));
    numButton6->setStyleSheet(
        QString::fromUtf8("font: 24pt \".AppleSystemUIFont\";"));
    atanButton = new QPushButton(tab_3);
    atanButton->setObjectName(QString::fromUtf8("atanButton"));
    atanButton->setGeometry(QRect(460, 400, 80, 40));
    atanButton->setStyleSheet(
        QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
    numButton9 = new QPushButton(tab_3);
    numButton9->setObjectName(QString::fromUtf8("numButton9"));
    numButton9->setGeometry(QRect(210, 380, 61, 61));
    numButton9->setStyleSheet(
        QString::fromUtf8("font: 24pt \".AppleSystemUIFont\";"));
    asinButton = new QPushButton(tab_3);
    asinButton->setObjectName(QString::fromUtf8("asinButton"));
    asinButton->setGeometry(QRect(340, 400, 80, 40));
    asinButton->setStyleSheet(
        QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
    numButton7 = new QPushButton(tab_3);
    numButton7->setObjectName(QString::fromUtf8("numButton7"));
    numButton7->setGeometry(QRect(30, 380, 61, 61));
    numButton7->setStyleSheet(
        QString::fromUtf8("font: 24pt \".AppleSystemUIFont\";"));
    tanButton = new QPushButton(tab_3);
    tanButton->setObjectName(QString::fromUtf8("tanButton"));
    tanButton->setGeometry(QRect(580, 340, 80, 40));
    tanButton->setStyleSheet(
        QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
    numButton2 = new QPushButton(tab_3);
    numButton2->setObjectName(QString::fromUtf8("numButton2"));
    numButton2->setGeometry(QRect(120, 220, 61, 61));
    numButton2->setStyleSheet(
        QString::fromUtf8("font: 24pt \".AppleSystemUIFont\";"));
    logButton = new QPushButton(tab_3);
    logButton->setObjectName(QString::fromUtf8("logButton"));
    logButton->setGeometry(QRect(340, 460, 80, 40));
    logButton->setStyleSheet(
        QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
    bracketRightButton = new QPushButton(tab_3);
    bracketRightButton->setObjectName(QString::fromUtf8("bracketRightButton"));
    bracketRightButton->setGeometry(QRect(580, 280, 80, 40));
    bracketRightButton->setStyleSheet(
        QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
    numButton8 = new QPushButton(tab_3);
    numButton8->setObjectName(QString::fromUtf8("numButton8"));
    numButton8->setGeometry(QRect(120, 380, 61, 61));
    numButton8->setStyleSheet(
        QString::fromUtf8("font: 24pt \".AppleSystemUIFont\";"));
    numButton0 = new QPushButton(tab_3);
    numButton0->setObjectName(QString::fromUtf8("numButton0"));
    numButton0->setGeometry(QRect(30, 460, 61, 61));
    numButton0->setStyleSheet(
        QString::fromUtf8("font: 24pt \".AppleSystemUIFont\";"));
    addButton = new QPushButton(tab_3);
    addButton->setObjectName(QString::fromUtf8("addButton"));
    addButton->setGeometry(QRect(340, 220, 80, 40));
    addButton->setStyleSheet(
        QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
    numButton1 = new QPushButton(tab_3);
    numButton1->setObjectName(QString::fromUtf8("numButton1"));
    numButton1->setGeometry(QRect(30, 220, 61, 61));
    numButton1->setStyleSheet(
        QString::fromUtf8("font: 24pt \".AppleSystemUIFont\";"));
    sinButton = new QPushButton(tab_3);
    sinButton->setObjectName(QString::fromUtf8("sinButton"));
    sinButton->setGeometry(QRect(340, 340, 80, 40));
    sinButton->setStyleSheet(
        QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
    powButton = new QPushButton(tab_3);
    powButton->setObjectName(QString::fromUtf8("powButton"));
    powButton->setGeometry(QRect(340, 280, 80, 40));
    powButton->setStyleSheet(
        QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
    sqrtButton = new QPushButton(tab_3);
    sqrtButton->setObjectName(QString::fromUtf8("sqrtButton"));
    sqrtButton->setGeometry(QRect(580, 400, 80, 40));
    sqrtButton->setStyleSheet(
        QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
    bracetLeftButton = new QPushButton(tab_3);
    bracetLeftButton->setObjectName(QString::fromUtf8("bracetLeftButton"));
    bracetLeftButton->setGeometry(QRect(460, 280, 80, 40));
    bracetLeftButton->setStyleSheet(
        QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
    label = new QLabel(tab_3);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(540, 460, 41, 41));
    label->setStyleSheet(
        QString::fromUtf8("font: 24pt \".AppleSystemUIFont\";"));
    numButton5 = new QPushButton(tab_3);
    numButton5->setObjectName(QString::fromUtf8("numButton5"));
    numButton5->setGeometry(QRect(120, 300, 61, 61));
    numButton5->setStyleSheet(
        QString::fromUtf8("font: 24pt \".AppleSystemUIFont\";"));
    modButton = new QPushButton(tab_3);
    modButton->setObjectName(QString::fromUtf8("modButton"));
    modButton->setGeometry(QRect(700, 280, 80, 40));
    modButton->setStyleSheet(
        QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
    inputX = new QLineEdit(tab_3);
    inputX->setObjectName(QString::fromUtf8("inputX"));
    inputX->setGeometry(QRect(580, 460, 191, 41));
    mulButton = new QPushButton(tab_3);
    mulButton->setObjectName(QString::fromUtf8("mulButton"));
    mulButton->setGeometry(QRect(580, 220, 80, 40));
    mulButton->setStyleSheet(
        QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
    acosButton = new QPushButton(tab_3);
    acosButton->setObjectName(QString::fromUtf8("acosButton"));
    acosButton->setGeometry(QRect(700, 340, 80, 40));
    acosButton->setStyleSheet(
        QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
    cosButton = new QPushButton(tab_3);
    cosButton->setObjectName(QString::fromUtf8("cosButton"));
    cosButton->setGeometry(QRect(460, 340, 80, 40));
    cosButton->setStyleSheet(
        QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
    numButton4 = new QPushButton(tab_3);
    numButton4->setObjectName(QString::fromUtf8("numButton4"));
    numButton4->setGeometry(QRect(30, 300, 61, 61));
    numButton4->setStyleSheet(
        QString::fromUtf8("font: 24pt \".AppleSystemUIFont\";"));
    numButton3 = new QPushButton(tab_3);
    numButton3->setObjectName(QString::fromUtf8("numButton3"));
    numButton3->setGeometry(QRect(210, 220, 61, 61));
    numButton3->setStyleSheet(
        QString::fromUtf8("font: 24pt \".AppleSystemUIFont\";"));
    lnButton = new QPushButton(tab_3);
    lnButton->setObjectName(QString::fromUtf8("lnButton"));
    lnButton->setGeometry(QRect(700, 400, 80, 40));
    lnButton->setStyleSheet(
        QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
    divButton = new QPushButton(tab_3);
    divButton->setObjectName(QString::fromUtf8("divButton"));
    divButton->setGeometry(QRect(700, 220, 80, 40));
    divButton->setStyleSheet(
        QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
    subButton = new QPushButton(tab_3);
    subButton->setObjectName(QString::fromUtf8("subButton"));
    subButton->setGeometry(QRect(460, 220, 80, 40));
    subButton->setStyleSheet(
        QString::fromUtf8("font: 18pt \".AppleSystemUIFont\";"));
    tabWidget->addTab(tab_3, QString());
    tab = new QWidget();
    tab->setObjectName(QString::fromUtf8("tab"));
    gridLayoutWidget = new QWidget(tab);
    gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
    gridLayoutWidget->setGeometry(QRect(30, 120, 181, 151));
    gridLayout_2 = new QGridLayout(gridLayoutWidget);
    gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
    gridLayout_2->setContentsMargins(0, 0, 0, 0);
    label_2 = new QLabel(gridLayoutWidget);
    label_2->setObjectName(QString::fromUtf8("label_2"));

    gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

    label_3 = new QLabel(gridLayoutWidget);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setTextFormat(Qt::MarkdownText);

    gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

    XminLineEdit = new QLineEdit(gridLayoutWidget);
    XminLineEdit->setObjectName(QString::fromUtf8("XminLineEdit"));

    gridLayout_2->addWidget(XminLineEdit, 0, 1, 1, 1);

    XmaxLineEdit = new QLineEdit(gridLayoutWidget);
    XmaxLineEdit->setObjectName(QString::fromUtf8("XmaxLineEdit"));

    gridLayout_2->addWidget(XmaxLineEdit, 1, 1, 1, 1);

    inputFunc = new QLineEdit(tab);
    inputFunc->setObjectName(QString::fromUtf8("inputFunc"));
    inputFunc->setGeometry(QRect(10, 20, 481, 51));
    inputFunc->setStyleSheet(
        QString::fromUtf8("font: 30pt \".AppleSystemUIFont\";"));
    inputFunc->setAlignment(Qt::AlignRight | Qt::AlignTrailing |
                            Qt::AlignVCenter);
    gridLayoutWidget_2 = new QWidget(tab);
    gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
    gridLayoutWidget_2->setGeometry(QRect(30, 280, 181, 151));
    gridLayout_4 = new QGridLayout(gridLayoutWidget_2);
    gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
    gridLayout_4->setContentsMargins(0, 0, 0, 0);
    label_4 = new QLabel(gridLayoutWidget_2);
    label_4->setObjectName(QString::fromUtf8("label_4"));

    gridLayout_4->addWidget(label_4, 0, 0, 1, 1);

    label_5 = new QLabel(gridLayoutWidget_2);
    label_5->setObjectName(QString::fromUtf8("label_5"));
    label_5->setTextFormat(Qt::MarkdownText);

    gridLayout_4->addWidget(label_5, 1, 0, 1, 1);

    YminLineEdit = new QLineEdit(gridLayoutWidget_2);
    YminLineEdit->setObjectName(QString::fromUtf8("YminLineEdit"));

    gridLayout_4->addWidget(YminLineEdit, 0, 1, 1, 1);

    YmaxLineEdit = new QLineEdit(gridLayoutWidget_2);
    YmaxLineEdit->setObjectName(QString::fromUtf8("YmaxLineEdit"));

    gridLayout_4->addWidget(YmaxLineEdit, 1, 1, 1, 1);

    widget = new QCustomPlot(tab);
    widget->setObjectName(QString::fromUtf8("widget"));
    widget->setGeometry(QRect(289, 99, 471, 391));
    plotPutton = new QPushButton(tab);
    plotPutton->setObjectName(QString::fromUtf8("plotPutton"));
    plotPutton->setGeometry(QRect(30, 440, 181, 51));
    tabWidget->addTab(tab, QString());
    tab_4 = new QWidget();
    tab_4->setObjectName(QString::fromUtf8("tab_4"));
    amountInput = new QLineEdit(tab_4);
    amountInput->setObjectName(QString::fromUtf8("amountInput"));
    amountInput->setGeometry(QRect(20, 50, 241, 31));
    amountInput->setAlignment(Qt::AlignRight | Qt::AlignTrailing |
                              Qt::AlignVCenter);
    label_6 = new QLabel(tab_4);
    label_6->setObjectName(QString::fromUtf8("label_6"));
    label_6->setGeometry(QRect(20, 30, 101, 16));
    termInput = new QLineEdit(tab_4);
    termInput->setObjectName(QString::fromUtf8("termInput"));
    termInput->setEnabled(true);
    termInput->setGeometry(QRect(20, 120, 113, 31));
    termInput->setAlignment(Qt::AlignRight | Qt::AlignTrailing |
                            Qt::AlignVCenter);
    label_7 = new QLabel(tab_4);
    label_7->setObjectName(QString::fromUtf8("label_7"));
    label_7->setGeometry(QRect(20, 100, 131, 16));
    label_8 = new QLabel(tab_4);
    label_8->setObjectName(QString::fromUtf8("label_8"));
    label_8->setGeometry(QRect(20, 170, 58, 16));
    rateInput = new QLineEdit(tab_4);
    rateInput->setObjectName(QString::fromUtf8("rateInput"));
    rateInput->setGeometry(QRect(20, 190, 113, 31));
    rateInput->setAlignment(Qt::AlignRight | Qt::AlignTrailing |
                            Qt::AlignVCenter);
    typeCreditGB = new QGroupBox(tab_4);
    typeCreditGB->setObjectName(QString::fromUtf8("typeCreditGB"));
    typeCreditGB->setGeometry(QRect(10, 230, 171, 80));
    typeCreditGB->setStyleSheet(
        QString::fromUtf8("font: 13pt \".AppleSystemUIFont\";"));
    gridLayoutWidget_3 = new QWidget(typeCreditGB);
    gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
    gridLayoutWidget_3->setGeometry(QRect(0, 20, 171, 61));
    gridLayout = new QGridLayout(gridLayoutWidget_3);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setContentsMargins(0, 0, 0, 0);
    annuity = new QRadioButton(gridLayoutWidget_3);
    annuity->setObjectName(QString::fromUtf8("annuity"));
    annuity->setCheckable(true);
    annuity->setChecked(true);
    annuity->setAutoRepeat(false);

    gridLayout->addWidget(annuity, 0, 0, 1, 1);

    diff = new QRadioButton(gridLayoutWidget_3);
    diff->setObjectName(QString::fromUtf8("diff"));

    gridLayout->addWidget(diff, 1, 0, 1, 1);

    CreditCalcButton = new QPushButton(tab_4);
    CreditCalcButton->setObjectName(QString::fromUtf8("CreditCalcButton"));
    CreditCalcButton->setGeometry(QRect(20, 321, 121, 41));
    totalOut = new QLineEdit(tab_4);
    totalOut->setObjectName(QString::fromUtf8("totalOut"));
    totalOut->setEnabled(true);
    totalOut->setGeometry(QRect(570, 40, 181, 31));
    totalOut->setReadOnly(true);
    overpaymentOut = new QLineEdit(tab_4);
    overpaymentOut->setObjectName(QString::fromUtf8("overpaymentOut"));
    overpaymentOut->setEnabled(true);
    overpaymentOut->setGeometry(QRect(570, 90, 181, 31));
    overpaymentOut->setReadOnly(true);
    paymentOut = new QLineEdit(tab_4);
    paymentOut->setObjectName(QString::fromUtf8("paymentOut"));
    paymentOut->setEnabled(true);
    paymentOut->setGeometry(QRect(570, 140, 181, 31));
    paymentOut->setReadOnly(true);
    label_9 = new QLabel(tab_4);
    label_9->setObjectName(QString::fromUtf8("label_9"));
    label_9->setGeometry(QRect(420, 50, 121, 20));
    label_10 = new QLabel(tab_4);
    label_10->setObjectName(QString::fromUtf8("label_10"));
    label_10->setGeometry(QRect(420, 100, 111, 16));
    label_11 = new QLabel(tab_4);
    label_11->setObjectName(QString::fromUtf8("label_11"));
    label_11->setGeometry(QRect(420, 150, 151, 16));
    diffPayWidget = new QTableWidget(tab_4);
    if (diffPayWidget->columnCount() < 2) diffPayWidget->setColumnCount(2);
    QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
    diffPayWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
    QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
    diffPayWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
    diffPayWidget->setObjectName(QString::fromUtf8("diffPayWidget"));
    diffPayWidget->setEnabled(true);
    diffPayWidget->setGeometry(QRect(490, 140, 241, 241));
    tabWidget->addTab(tab_4, QString());
    tab_5 = new QWidget();
    tab_5->setObjectName(QString::fromUtf8("tab_5"));
    tabWidget->addTab(tab_5, QString());

    gridLayout_3->addWidget(tabWidget, 0, 1, 1, 1);

    MainWindow->setCentralWidget(centralwidget);
    statusbar = new QStatusBar(MainWindow);
    statusbar->setObjectName(QString::fromUtf8("statusbar"));
    MainWindow->setStatusBar(statusbar);

    retranslateUi(MainWindow);

    tabWidget->setCurrentIndex(0);

    QMetaObject::connectSlotsByName(MainWindow);
  }  // setupUi

  void retranslateUi(QMainWindow *MainWindow) {
    MainWindow->setWindowTitle(
        QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
    equalsButton->setText(
        QCoreApplication::translate("MainWindow", "=", nullptr));
    numButton6->setText(
        QCoreApplication::translate("MainWindow", "6", nullptr));
    atanButton->setText(
        QCoreApplication::translate("MainWindow", "atan", nullptr));
    numButton9->setText(
        QCoreApplication::translate("MainWindow", "9", nullptr));
    asinButton->setText(
        QCoreApplication::translate("MainWindow", "asin", nullptr));
    numButton7->setText(
        QCoreApplication::translate("MainWindow", "7", nullptr));
    tanButton->setText(
        QCoreApplication::translate("MainWindow", "tan", nullptr));
    numButton2->setText(
        QCoreApplication::translate("MainWindow", "2", nullptr));
    logButton->setText(
        QCoreApplication::translate("MainWindow", "log", nullptr));
    bracketRightButton->setText(
        QCoreApplication::translate("MainWindow", ")", nullptr));
    numButton8->setText(
        QCoreApplication::translate("MainWindow", "8", nullptr));
    numButton0->setText(
        QCoreApplication::translate("MainWindow", "0", nullptr));
    addButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
    numButton1->setText(
        QCoreApplication::translate("MainWindow", "1", nullptr));
    sinButton->setText(
        QCoreApplication::translate("MainWindow", "sin", nullptr));
    powButton->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
    sqrtButton->setText(
        QCoreApplication::translate("MainWindow", "sqrt", nullptr));
    bracetLeftButton->setText(
        QCoreApplication::translate("MainWindow", "(", nullptr));
    label->setText(QCoreApplication::translate("MainWindow", "X = ", nullptr));
    numButton5->setText(
        QCoreApplication::translate("MainWindow", "5", nullptr));
    modButton->setText(
        QCoreApplication::translate("MainWindow", "mod", nullptr));
    mulButton->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
    acosButton->setText(
        QCoreApplication::translate("MainWindow", "acos", nullptr));
    cosButton->setText(
        QCoreApplication::translate("MainWindow", "cos", nullptr));
    numButton4->setText(
        QCoreApplication::translate("MainWindow", "4", nullptr));
    numButton3->setText(
        QCoreApplication::translate("MainWindow", "3", nullptr));
    lnButton->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
    divButton->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
    subButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
    tabWidget->setTabText(tabWidget->indexOf(tab_3),
                          QCoreApplication::translate(
                              "MainWindow",
                              "\320\232\320\260\320\273\321\214\320\272\321\203"
                              "\320\273\321\217\321\202\320\276\321\200",
                              nullptr));
    label_2->setText(
        QCoreApplication::translate("MainWindow", "Xmin ", nullptr));
    label_3->setText(
        QCoreApplication::translate("MainWindow", "Xmax", nullptr));
    label_4->setText(
        QCoreApplication::translate("MainWindow", "Ymin ", nullptr));
    label_5->setText(
        QCoreApplication::translate("MainWindow", "Ymax", nullptr));
    plotPutton->setText(
        QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    tabWidget->setTabText(
        tabWidget->indexOf(tab),
        QCoreApplication::translate(
            "MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272",
            nullptr));
    label_6->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\241\321\203\320\274\320\274\320\260 "
        "\320\272\321\200\320\265\320\264\320\270\321\202\320\260",
        nullptr));
    label_7->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320"
        "\262\320\276 \320\274\320\265\321\201\321\217\321\206\320\265\320\262",
        nullptr));
    label_8->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\237\321\200\320\276\321\206\320\265\320\275\321\202", nullptr));
    typeCreditGB->setTitle(QCoreApplication::translate(
        "MainWindow",
        "\320\242\320\270\320\277 "
        "\320\272\321\200\320\265\320\264\320\270\321\202\320\260",
        nullptr));
    annuity->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\260\321\203\321\202\320\270\321\204\320\270\321\206\320\270\321"
        "\200\320\276\320\262\320\260\320\275\320\275\321\213\320\271",
        nullptr));
    diff->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321"
        "\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213"
        "\320\271",
        nullptr));
    CreditCalcButton->setText(
        QCoreApplication::translate("MainWindow",
                                    "\320\240\320\260\321\201\321\207\320\270"
                                    "\321\202\320\260\321\202\321\214",
                                    nullptr));
    label_9->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\230\321\202\320\276\320\263\320\276\320\262\320\260\321\217 "
        "\320\262\321\213\320\277\320\273\320\260\321\202\320\260",
        nullptr));
    label_10->setText(
        QCoreApplication::translate("MainWindow",
                                    "\320\237\320\265\321\200\320\265\320\277"
                                    "\320\273\320\260\321\202\320\260",
                                    nullptr));
    label_11->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320"
        "\275\321\213\320\271 \320\277\320\273\320\260\321\202\321\221\320\266",
        nullptr));
    QTableWidgetItem *___qtablewidgetitem =
        diffPayWidget->horizontalHeaderItem(0);
    ___qtablewidgetitem->setText(QCoreApplication::translate(
        "MainWindow", "\320\234\320\265\321\201\321\217\321\206", nullptr));
    QTableWidgetItem *___qtablewidgetitem1 =
        diffPayWidget->horizontalHeaderItem(1);
    ___qtablewidgetitem1->setText(QCoreApplication::translate(
        "MainWindow", "\320\237\320\273\320\260\321\202\321\221\320\266",
        nullptr));
    tabWidget->setTabText(
        tabWidget->indexOf(tab_4),
        QCoreApplication::translate("MainWindow",
                                    "\320\232\321\200\320\265\320\264\320\270"
                                    "\321\202\320\275\321\213\320\271",
                                    nullptr));
    tabWidget->setTabText(
        tabWidget->indexOf(tab_5),
        QCoreApplication::translate("MainWindow",
                                    "\320\224\320\265\320\277\320\276\320\267"
                                    "\320\270\321\202\320\275\321\213\320\271",
                                    nullptr));
  }  // retranslateUi
};

namespace Ui {
class MainWindow : public Ui_MainWindow {};
}  // namespace Ui

QT_END_NAMESPACE

#endif  // UI_MAINWINDOW_H
