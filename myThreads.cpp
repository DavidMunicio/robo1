#include "myThreads.h"

myThreads::myThreads(): QThread() {

}

myThreads::~myThreads() {}

void myThreads::run() {
  
  qDebug() << "Hola desde la funcion start() del thread con id " << this->currentThreadId();
  //emit y connect
  emit mysignal();
}

void myThreads::stop() {
  qDebug() << "Hola desde la funcion stop() del thread con id " << this->currentThreadId();
}
