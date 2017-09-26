#include "myThreads.h"

myThreads::myThreads(): QThread(), Ui_Counter() {}
myThreads::~myThreads() {}

void myThreads::run () {
  qDebug() << "funcion run() del thread con id " << this->currentThreadId();

  for(int i = 0; i< 3; i++){
    setPeriod(1);
    emit mysignal();
  }
  
}

void myThreads::pause() {

}

void myThreads::setPeriod(int mili) {
  sleep(mili);
}

