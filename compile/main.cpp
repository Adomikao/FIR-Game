#include <QApplication>
#include "window.h"

//主程序入口
int main(int argc, char ** argv)
{
	QApplication app(argc, argv);
	Window gamewindow;
	gamewindow.show();
	return app.exec();
}
