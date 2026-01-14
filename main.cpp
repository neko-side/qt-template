#include <QApplication>
#include <QWidget>

int main(int argc, char** argv) {
	QApplication* app = new QApplication(argc, argv);
	QWidget* widget = new QWidget();
	widget->setMinimumWidth(800);
	widget->setMinimumHeight(600);
	widget->setVisible(true);
	widget->showMaximized();
	return app->exec();
}