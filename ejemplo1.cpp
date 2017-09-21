#include "ejemplo1.h"


ejemplo1::ejemplo1(): Ui_Counter() {
  setupUi(this);
  show();
  
  //QTimer *timer = new QTimer();
  //connect(button, SIGNAL(clicked()), this, SLOT(doButton()));
  //connect(timer, SIGNAL(timeout()), this, SLOT(inicio()));
  //timer->start(1000);
  //myThreads t1;
  
  t1.run();
  
  qDebug() << "hola desde el thread en ejemplo.ccp ";
  
  connect(t1, SIGNAL(mysignal()), this, SLOT(incrementar()));
  
  t1.stop();
}

ejemplo1::~ejemplo1() {}

void ejemplo1::inicio () {
  //lcdNumber->display(incrementar());
  qDebug() << "signal enviada ";
}

void ejemplo1::doButton() {
  
  //lcdNumber->display(incrementar());
  //qDebug() << "click on button";
 
}

int ejemplo1::incrementar() {
  int n = lcdNumber->intValue();
  return (n = n+1);
}
