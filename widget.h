#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSqlDatabase>

namespace Ui {
class Widget;
}

class QSqlTableModel;

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_btnInsert_clicked();

    void on_btnUpdate_clicked();

    void on_btnDelete_clicked();

private:
    Ui::Widget *ui;
    QSqlTableModel *mModel;
    QSqlDatabase mDatabase;
};

#endif // WIDGET_H
