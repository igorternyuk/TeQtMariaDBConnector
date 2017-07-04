#include "widget.h"
#include "ui_widget.h"
#include <QSqlTableModel>
#include <QMessageBox>
#include <QSqlError>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    mDatabase = QSqlDatabase::addDatabase("QMYSQL");
    mDatabase.setHostName("127.0.0.1");
    mDatabase.setDatabaseName("db_qt_test");
    mDatabase.setPort(3306);
    mDatabase.setUserName("igor");
    mDatabase.setPassword("1319");
    if(!mDatabase.open()){
        QMessageBox::critical(
            this,
            "Error",
            mDatabase.lastError().text()
        );
        return;
    }
    mModel = new QSqlTableModel(this);
    mModel->setTable("persona");
    mModel->select();
    ui->tableView->setModel(mModel);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btnInsert_clicked()
{
    mModel->insertRow(mModel->rowCount());
}

void Widget::on_btnUpdate_clicked()
{
    mModel->removeRow(ui->tableView->currentIndex().row());
}

void Widget::on_btnDelete_clicked()
{
    mModel->select();
}
