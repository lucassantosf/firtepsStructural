#ifndef TREINAR_H
#define TREINAR_H

#include <QMainWindow>

namespace Ui {
class Treinar;
}

class Treinar : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Treinar(QWidget *parent = 0);
    ~Treinar();
    
private slots:
    void on_goButton_clicked();

private:
    Ui::Treinar *ui;
};

#endif // TREINAR_H
