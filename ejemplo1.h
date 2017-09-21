#ifndef ejemplo1_H
#define ejemplo1_H

#include <QtGui>
#include "ui_counterDlg.h"
#include <unistd.h>
#include "myThreads.h"



class ejemplo1 : public QWidget, public Ui_Counter {
Q_OBJECT
public:
    myThreads t1;  
    QTimer timer;
    
    ejemplo1();
    virtual ~ejemplo1();
    
public slots:
	void inicio();
	void doButton();
	int incrementar();
};

#endif // ejemplo1_H
