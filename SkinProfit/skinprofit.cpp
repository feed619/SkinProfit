#include "skinprofit.h"
#include "./ui_skinprofit.h"
#include "QDoubleValidator"
#include <QDir>

SkinProfit::SkinProfit(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SkinProfit)
{
    QString dirParh = QDir::currentPath();
    QString path = dirParh+"/../SkinProfit/image/logo.ico";


    trayIcon = new QSystemTrayIcon(this);
    trayIcon->setIcon(QIcon(path));  // Замените на путь к вашему значку

    // Создание контекстного меню для значка в трее
    QMenu *trayMenu = new QMenu(this);
    QAction *restoreAction = new QAction("Restore", this);
    QAction *quitAction = new QAction("Quit", this);
    trayMenu->addAction(restoreAction);
    trayMenu->addAction(quitAction);

    trayIcon->setContextMenu(trayMenu);

    // Подключение сигналов и слотов
    connect(restoreAction, &QAction::triggered, this, &QWidget::showNormal);
    connect(quitAction, &QAction::triggered, qApp, &QApplication::quit);
    connect(trayIcon, &QSystemTrayIcon::activated, this, &SkinProfit::onTrayIconActivated);

    trayIcon->show();




    ui->setupUi(this);
    ui->labelSold->setAlignment(Qt::AlignCenter);
    ui->labelBouth->setAlignment(Qt::AlignCenter);
    ui->labelProfit->setAlignment(Qt::AlignCenter);
    ui->labelProfitPosent->setAlignment(Qt::AlignCenter);

    ui->lineEditProfit->setAlignment(Qt::AlignCenter);
    ui->lineEditProfitPosent->setAlignment(Qt::AlignCenter);
    ui->lineEditBouth->setAlignment(Qt::AlignCenter);
    ui->lineEditSold->setAlignment(Qt::AlignCenter);

    QDoubleValidator *doubleValidator = new QDoubleValidator(-100000, 100000, 2, this);

    // Устанавливаем валидатор для QLineEdit
    ui->lineEditBouth->setValidator(doubleValidator);
    ui->lineEditSold->setValidator(doubleValidator);



}

SkinProfit::~SkinProfit()
{
    delete ui;
}

void SkinProfit::on_lineEditSold_textChanged(const QString &arg1)
{
    if(ui->lineEditSold->text().length() and ui->lineEditBouth->text().length())
    {
        float bouth = ui->lineEditBouth->text().toFloat();
        float sold= ui->lineEditSold->text().toFloat();

        float balance = sold*0.86958;
        float profitP =((balance/bouth)-1)*100;

        ui->lineEditProfit->setText(QString::number(balance));
        ui->lineEditProfitPosent->setText(QString::number(profitP));
    }
    else
    {
    ui->lineEditProfit->clear();
    ui->lineEditProfitPosent->clear();
    }
}


void SkinProfit::on_lineEditBouth_textChanged(const QString &arg1)
{
    if(ui->lineEditSold->text().length() and ui->lineEditBouth->text().length())
    {
        float bouth = ui->lineEditBouth->text().toFloat();
        float sold= ui->lineEditSold->text().toFloat();

        float balance = sold*0.86958;
        float profitP =((balance/bouth)-1)*100;

        ui->lineEditProfit->setText(QString::number(balance));
        ui->lineEditProfitPosent->setText(QString::number(profitP));
    }
    else
    {
        ui->lineEditProfit->clear();
        ui->lineEditProfitPosent->clear();
    }
}

