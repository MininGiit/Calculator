#include "mainwindow.h"

#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  ui->diffPayWidget->setVisible(false);
  ui->label_11->setVisible(false);
  ui->paymentOut->setVisible(false);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_equalsButton_clicked() {
  QString text = ui->input->text();
  QByteArray byteArray = text.toUtf8();
  char *charArray = byteArray.data();

  QString textX = ui->inputX->text();

  bool conversionOk = false;
  double x = textX.toDouble(&conversionOk);
  double result = 0;

  int err = calculate(charArray, &result, x);
  if (err == 0) {
    QString out = QString::number(result, 'f', 7);
    ui->output->setText(out);
  } else
    QMessageBox::about(this, "Ошибка", "Некорректный ввод");
}

void MainWindow::on_plotPutton_clicked() {
  QString textXmin = ui->XminLineEdit->text();
  QString textXmax = ui->XmaxLineEdit->text();
  QString textYmin = ui->YminLineEdit->text();
  QString textYmax = ui->YmaxLineEdit->text();

  bool conversionOk1 = false;
  bool conversionOk2 = false;
  bool conversionOk3 = false;
  bool conversionOk4 = false;

  double xmin = textXmin.toDouble(&conversionOk1);
  double xmax = textXmax.toDouble(&conversionOk2);
  double ymin = textYmin.toDouble(&conversionOk3);
  double ymax = textYmax.toDouble(&conversionOk4);

  QString textFunc = ui->inputFunc->text();
  QByteArray byteArray = textFunc.toUtf8();
  char *charArray = byteArray.data();
  if (conversionOk1 && conversionOk2 && conversionOk3 && conversionOk4) {
    if (xmin < xmax && ymin < ymax) {
      int N = 1000;
      double h = (xmax - xmin) / N;
      QVector<double> x(N), y(N);
      int i = 0;
      int err = 0;
      for (double X = xmin; X <= xmax; X += h) {
        x[i] = X;
        double y_val = 0;
        err += calculate(charArray, &y_val, X);
        y[i] = y_val;
        i++;
      }
      if (err == 0) {
        ui->widget->clearGraphs();
        ui->widget->addGraph();
        ui->widget->graph(0)->setData(x, y);
        ui->widget->xAxis->setLabel("x");
        ui->widget->yAxis->setLabel("y");
        ui->widget->xAxis->setRange(xmin, xmax);
        ui->widget->yAxis->setRange(ymin, ymax);
        ui->widget->replot();
      } else
        QMessageBox::about(this, "Ошибка", "Некорректный ввода функции");
    } else
      QMessageBox::about(this, "Ошибка", "Некорректный ввода диапазона");
  } else
    QMessageBox::about(this, "Ошибка", "Некорректный ввода диапазона");
}

void MainWindow::on_CreditCalcButton_clicked() {
  QString textСreditAmount = ui->amountInput->text();
  QString textTerm = ui->termInput->text();
  QString textRate = ui->rateInput->text();

  bool conversionOk1 = false;
  bool conversionOk2 = false;
  bool conversionOk3 = false;

  //    if(ui->annuity->isChecked())
  long double creditAmount = textСreditAmount.toDouble(&conversionOk1);
  int term = textTerm.toInt(&conversionOk2);
  long double rate = textRate.toDouble(&conversionOk3);

  if (conversionOk1 && conversionOk2 && conversionOk3 && creditAmount > 0 &&
      term > 0 && rate > 0) {
    long double payment = 0;
    long double total = 0;
    long double overpayment = 0;

    if (ui->annuity->isChecked()) {
      ui->diffPayWidget->setVisible(false);
      ui->label_11->setVisible(true);
      ui->paymentOut->setVisible(true);
      payment = calculate_annuity_payment(creditAmount, term, rate);
      total = calculate_total_payment(payment, term);
      QString out3 = QString::number(payment, 'f', 2);
      ui->paymentOut->setText(out3);

    } else if (ui->diff->isChecked()) {
      ui->diffPayWidget->setVisible(true);
      ui->label_11->setVisible(false);
      ui->paymentOut->setVisible(false);
      for (int row = 0; row < ui->diffPayWidget->rowCount(); ++row) {
        for (int column = 0; column < ui->diffPayWidget->columnCount();
             ++column) {
          QTableWidgetItem *item = ui->diffPayWidget->takeItem(row, column);
          if (item) {
            delete item;
          }
        }
      }
      ui->diffPayWidget->setRowCount(term);
      ui->diffPayWidget->setColumnCount(2);
      for (int month = 1; month <= term; month++) {
        long double paymentDiff =
            calculate_differentiated_payment(creditAmount, term, rate, month);
        total += paymentDiff;
        QString paymentString = QString::number(paymentDiff, 'f', 2);
        QTableWidgetItem *item = new QTableWidgetItem(paymentString);
        ui->diffPayWidget->setItem(month - 1, 1, item);

        QString monthString = QString::number(month, 'd', 0);
        QTableWidgetItem *item2 = new QTableWidgetItem(monthString);
        ui->diffPayWidget->setItem(month - 1, 0, item2);
      }
      ui->diffPayWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    }
    overpayment = calculate_overpayment(total, creditAmount);
    QString out1 = QString::number(overpayment, 'f', 2);
    ui->overpaymentOut->setText(out1);
    QString out2 = QString::number(total, 'f', 2);
    ui->totalOut->setText(out2);
  }
}