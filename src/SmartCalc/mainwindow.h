#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#ifdef __cplusplus
extern "C" {
#endif
#include "../CalculateModule/credit_calc.h"
#include "../CalculateModule/polish_notation.h"
#ifdef __cplusplus
}
#endif

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

 private slots:
  void on_numButton1_clicked();
  void on_bracetLeftButton_clicked();
  void on_numButton2_clicked();
  void on_numButton3_clicked();
  void on_numButton4_clicked();
  void on_numButton5_clicked();
  void on_numButton6_clicked();
  void on_numButton7_clicked();
  void on_numButton8_clicked();
  void on_numButton9_clicked();
  void on_numButton0_clicked();
  void on_addButton_clicked();
  void on_subButton_clicked();
  void on_mulButton_clicked();
  void on_divButton_clicked();
  void on_powButton_clicked();
  void on_bracketRightButton_clicked();
  void on_modButton_clicked();
  void on_sinButton_clicked();
  void on_cosButton_clicked();
  void on_tanButton_clicked();
  void on_acosButton_clicked();
  void on_asinButton_clicked();
  void on_atanButton_clicked();
  void on_sqrtButton_clicked();
  void on_lnButton_clicked();
  void on_logButton_clicked();
  void on_equalsButton_clicked();
  void on_plotPutton_clicked();

  void on_CreditCalcButton_clicked();

 private:
  Ui::MainWindow *ui;
};
#endif  // MAINWINDOW_H