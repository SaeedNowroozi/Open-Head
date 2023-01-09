#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:

    void onAboutActionTriggered();

private:
    Ui::MainWindow *ui;
    QMenu *m_helpMenu = nullptr;
    QAction *m_aboutAction = nullptr;
    QAction *m_disableDemoModeAction = nullptr;
    QAction *m_enableDemoModeAction = nullptr;
};
#endif // MAINWINDOW_H
