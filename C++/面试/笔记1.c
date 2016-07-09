// clickcounter.h
#ifndef CLICKCOUNTER_H
#define CLICKCOUNTER_H

#include < QPushButton > 
#include < QLable >
 class ClickCounter : public QWidget
 {
	 Q_OBJECT
		 public:
		 ClickCounter( QWidget *parent=0,const char *name=0 );
	 public slots:
		 void incrementCount();
	 private:
		 int counter;
	 QLabel *label;
	 QPushButton * button;


 };
 
#endif



//clickcount.cpp
#include < stdio.h >
#include "clickcounter.h "
ClickCounter::ClickCounter(QWidget *parent,const char *name)
{
	setMiniNumSize(120,125);
	setMaxiNumSize(120,125);

	counter=0;
	button= new QPushButton("增加一个数",this);
	button->setGeometry(10,10,100,50);
	label= new QLable("0",this);
	lable->setGeometry(15,70,90,40);
	lable->setAlignment(AlignHCenter|AlignVCenter);
	//QObject
	connect(button,SIGNAL(clicked()),this,SLOT(increamCounter()));

}

void ClickCounter::incrementCount()
{

char str[30];
sprintf(str,"%d",++counter);
label->setText(str);



}



//main.cpp


#include "clickcounter.h"
int main(int argc,char **argv)
{
	QApplication app(argc,argv);
	ClickCounter clickCount;
	app.setMainWedget(&clickCount);
	clickCount.show();
	return app.exec();

}