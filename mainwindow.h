#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;


public:
    int open();
    int save();
    int save_as();
    int new_file();

public:
    int find();
    int delete_file();
    int paste();
    int copy();
    int select_all();


};

#endif // MAINWINDOW_H
