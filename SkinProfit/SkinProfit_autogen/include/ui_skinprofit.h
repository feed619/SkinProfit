/********************************************************************************
** Form generated from reading UI file 'skinprofit.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKINPROFIT_H
#define UI_SKINPROFIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SkinProfit
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *labelBouth;
    QLabel *labelProfit;
    QLabel *labelSold;
    QLabel *labelProfitPosent;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEditBouth;
    QLineEdit *lineEditSold;
    QLineEdit *lineEditProfit;
    QLineEdit *lineEditProfitPosent;

    void setupUi(QWidget *SkinProfit)
    {
        if (SkinProfit->objectName().isEmpty())
            SkinProfit->setObjectName("SkinProfit");
        SkinProfit->resize(512, 72);
        layoutWidget = new QWidget(SkinProfit);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 0, 491, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelBouth = new QLabel(layoutWidget);
        labelBouth->setObjectName("labelBouth");
        QFont font;
        font.setFamilies({QString::fromUtf8("Spirit")});
        font.setPointSize(13);
        font.setBold(false);
        font.setItalic(false);
        labelBouth->setFont(font);

        horizontalLayout->addWidget(labelBouth);

        labelProfit = new QLabel(layoutWidget);
        labelProfit->setObjectName("labelProfit");
        labelProfit->setFont(font);

        horizontalLayout->addWidget(labelProfit);

        labelSold = new QLabel(layoutWidget);
        labelSold->setObjectName("labelSold");
        labelSold->setFont(font);

        horizontalLayout->addWidget(labelSold);

        labelProfitPosent = new QLabel(layoutWidget);
        labelProfitPosent->setObjectName("labelProfitPosent");
        labelProfitPosent->setFont(font);

        horizontalLayout->addWidget(labelProfitPosent);

        layoutWidget1 = new QWidget(SkinProfit);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 20, 491, 61));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEditBouth = new QLineEdit(layoutWidget1);
        lineEditBouth->setObjectName("lineEditBouth");
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(false);
        lineEditBouth->setFont(font1);

        horizontalLayout_2->addWidget(lineEditBouth);

        lineEditSold = new QLineEdit(layoutWidget1);
        lineEditSold->setObjectName("lineEditSold");
        lineEditSold->setFont(font1);
        lineEditSold->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_2->addWidget(lineEditSold);

        lineEditProfit = new QLineEdit(layoutWidget1);
        lineEditProfit->setObjectName("lineEditProfit");
        lineEditProfit->setFont(font1);
        lineEditProfit->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEditProfit);

        lineEditProfitPosent = new QLineEdit(layoutWidget1);
        lineEditProfitPosent->setObjectName("lineEditProfitPosent");
        lineEditProfitPosent->setEnabled(true);
        lineEditProfitPosent->setFont(font1);
        lineEditProfitPosent->setMouseTracking(true);
        lineEditProfitPosent->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEditProfitPosent);


        retranslateUi(SkinProfit);

        QMetaObject::connectSlotsByName(SkinProfit);
    } // setupUi

    void retranslateUi(QWidget *SkinProfit)
    {
        SkinProfit->setWindowTitle(QCoreApplication::translate("SkinProfit", "SkinProfit", nullptr));
        labelBouth->setText(QCoreApplication::translate("SkinProfit", "\321\206\320\265\320\275\320\260 \320\277\320\276\320\272\321\203\320\277\320\272\320\270", nullptr));
        labelProfit->setText(QCoreApplication::translate("SkinProfit", "\321\206\320\265\320\275\320\260 \320\277\321\200\320\276\320\264\320\260\320\266\320\270", nullptr));
        labelSold->setText(QCoreApplication::translate("SkinProfit", "\320\261\320\260\320\273\320\260\320\275\321\201", nullptr));
        labelProfitPosent->setText(QCoreApplication::translate("SkinProfit", "     \320\262\321\213\320\263\320\276\320\264\320\260 %", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SkinProfit: public Ui_SkinProfit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKINPROFIT_H
