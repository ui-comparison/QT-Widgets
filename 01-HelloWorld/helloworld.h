#ifndef HELLOWORLD_H
#define HELLOWORLD_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class HelloWorld;
}
QT_END_NAMESPACE

class HelloWorld : public QMainWindow
{
    Q_OBJECT

public:
    HelloWorld(QWidget *parent = nullptr);
    ~HelloWorld();

private slots:
    void on_quitBtn_clicked();

    void on_inputEdt_textChanged(const QString &arg1);

private:
    Ui::HelloWorld *ui;
    void update_text();
};
#endif // HELLOWORLD_H
