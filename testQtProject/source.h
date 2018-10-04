#ifndef SOURCE_H
#define SOURCE_H

#include <QMainWindow>

namespace Ui
{
    class source;
}

class source : public QMainWindow
{
    Q_OBJECT

public:
    explicit source(QWidget *parent = 0);
    ~source();

private slots:
    void on_pushButton_clicked();

private:
    Ui::source *ui;
    int random;
};

#endif // SOURCE_H
