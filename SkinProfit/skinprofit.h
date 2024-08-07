#ifndef SKINPROFIT_H
#define SKINPROFIT_H

#include <QWidget>
#include "QSystemTrayIcon"
#include <QMenu>
#include "QCloseEvent"
QT_BEGIN_NAMESPACE
namespace Ui {
class SkinProfit;
}
QT_END_NAMESPACE

class SkinProfit : public QWidget
{
    Q_OBJECT

public:
    SkinProfit(QWidget *parent = nullptr);
    ~SkinProfit();

private slots:
    void on_lineEditSold_textChanged(const QString &arg1);

    void on_lineEditBouth_textChanged(const QString &arg1);

    void onTrayIconActivated(QSystemTrayIcon::ActivationReason reason) {
        if (reason == QSystemTrayIcon::Trigger) {
            showNormal();
        }
    }

private:
    QSystemTrayIcon *trayIcon;
    Ui::SkinProfit *ui;
public:
    void closeEvent(QCloseEvent *event) override {
        if (trayIcon->isVisible()) {
            hide();
            event->ignore();
        }
    }
};
#endif // SKINPROFIT_H
