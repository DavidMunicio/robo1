#include <QtGui>


class myThreads : public QThread {
Q_OBJECT
signals:
  void mysignal();
public:
  myThreads();
  ~myThreads();
  void run();
  void stop();
};