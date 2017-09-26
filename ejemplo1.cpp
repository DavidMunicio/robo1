#include "ejemplo1.h"


ejemplo1::ejemplo1(): Ui_Counter() {
  myThreads t1;
  
  setupUi(this);
  show();    
  
  connect(&t1, SIGNAL(mysignal()), this, SLOT(incrementar()));

  connect(button, SIGNAL(clicked()), this, SLOT(doButton()));
  
  t1.run();
}

ejemplo1::~ejemplo1() {}

void ejemplo1::doButton() {
  qDebug() << "doButton ";
}

void ejemplo1::incrementar() {
  qDebug() << "incrementar";
  int n = lcdNumber->intValue();
  n = n+1;
  lcdNumber->display(n);
}

void ejemplo1::tick(){
  
}