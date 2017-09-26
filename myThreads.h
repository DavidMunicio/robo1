#include <QtGui>
#include "ui_counterDlg.h"

class myThreads : public QThread, public Ui_Counter {
Q_OBJECT
signals:
  void mysignal();
  
public:
  myThreads();
  ~myThreads();
 
  void run();
  void pause();
  void setPeriod( int seg );
};