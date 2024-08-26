#include "./ui_mainwindow.h"
#include "mainwindow.h"

void MainWindow::on_numButton1_clicked() {
  ui->input->setText(ui->input->text() + "1");
}

void MainWindow::on_numButton2_clicked() {
  ui->input->setText(ui->input->text() + "2");
}

void MainWindow::on_numButton3_clicked() {
  ui->input->setText(ui->input->text() + "3");
}

void MainWindow::on_numButton4_clicked() {
  ui->input->setText(ui->input->text() + "4");
}

void MainWindow::on_numButton5_clicked() {
  ui->input->setText(ui->input->text() + "5");
}

void MainWindow::on_numButton6_clicked() {
  ui->input->setText(ui->input->text() + "6");
}

void MainWindow::on_numButton7_clicked() {
  ui->input->setText(ui->input->text() + "7");
}

void MainWindow::on_numButton8_clicked() {
  ui->input->setText(ui->input->text() + "8");
}

void MainWindow::on_numButton9_clicked() {
  ui->input->setText(ui->input->text() + "9");
}

void MainWindow::on_numButton0_clicked() {
  ui->input->setText(ui->input->text() + "0");
}

void MainWindow::on_addButton_clicked() {
  ui->input->setText(ui->input->text() + "+");
}

void MainWindow::on_subButton_clicked() {
  ui->input->setText(ui->input->text() + "-");
}

void MainWindow::on_mulButton_clicked() {
  ui->input->setText(ui->input->text() + "*");
}

void MainWindow::on_divButton_clicked() {
  ui->input->setText(ui->input->text() + "/");
}

void MainWindow::on_powButton_clicked() {
  ui->input->setText(ui->input->text() + "^");
}

void MainWindow::on_bracetLeftButton_clicked() {
  ui->input->setText(ui->input->text() + "(");
}

void MainWindow::on_bracketRightButton_clicked() {
  ui->input->setText(ui->input->text() + ")");
}

void MainWindow::on_modButton_clicked() {
  ui->input->setText(ui->input->text() + "mod");
}

void MainWindow::on_sinButton_clicked() {
  ui->input->setText(ui->input->text() + "sin");
}

void MainWindow::on_sqrtButton_clicked() {
  ui->input->setText(ui->input->text() + "sqrt");
}

void MainWindow::on_cosButton_clicked() {
  ui->input->setText(ui->input->text() + "cos");
}

void MainWindow::on_tanButton_clicked() {
  ui->input->setText(ui->input->text() + "tan");
}

void MainWindow::on_acosButton_clicked() {
  ui->input->setText(ui->input->text() + "acos");
}

void MainWindow::on_asinButton_clicked() {
  ui->input->setText(ui->input->text() + "asin");
}

void MainWindow::on_atanButton_clicked() {
  ui->input->setText(ui->input->text() + "atan");
}

void MainWindow::on_lnButton_clicked() {
  ui->input->setText(ui->input->text() + "ln");
}

void MainWindow::on_logButton_clicked() {
  ui->input->setText(ui->input->text() + "log");
}
