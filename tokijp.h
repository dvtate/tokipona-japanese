#ifndef TOKIJP_H
#define TOKIJP_H

#include <QMainWindow>

namespace Ui {
  class tokijp;
}

class tokijp : public QMainWindow {
  Q_OBJECT

public:
  explicit tokijp(QWidget *parent = 0);
  ~tokijp();

  QString jptolatin(QString text);
  QString latintojp(QString text);
private slots:

  void on_ltj_clicked();
  void on_jtl_clicked();

private:
  Ui::tokijp *ui;
};

#endif // TOKIJP_H
