#include "coco.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	coco w;
	w.show();
	return a.exec();
}
