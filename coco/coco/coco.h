#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_coco.h"

class coco : public QMainWindow
{
	Q_OBJECT

public:
	coco(QWidget *parent = Q_NULLPTR);

private:
	Ui::cocoClass ui;
};
