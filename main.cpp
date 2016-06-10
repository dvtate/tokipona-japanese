#include "tokijp.h"
#include <QApplication>

int main(int argc, char *argv[]){
  QApplication a(argc, argv);
  tokijp w;
  w.show();

  return a.exec();
}
