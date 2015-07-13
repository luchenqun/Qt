#include "QtExcel.h"
#include "ExcelEngine.h"
#include <QVariant>
#include <QApplication>
#include <QDir>
#include <QDebug>
#include <QTableWidget>

QtExcel::QtExcel(QWidget *parent)
    : QWidget(parent)
{

    ExcelEngine excel; //创建excl对象
    QDir dir;
    QString path = dir.currentPath();

    bool openRet = excel.Open((path + "/debug/1.xls"), 1, false); //打开指定的xls文件的指定sheet，且指定是否可见

    QTableWidget *w = new QTableWidget(this);
    w->setMinimumSize(800, 600);

//    for(int i=1; i<=17; i++)
//    {
//        for(int j=1; j<=12; j++)
//        {
//            qDebug() << i << " " << j << " " << excel.GetCellData(i,j).toString();
//        }
//    }
//     excel.Save(); //保存
    excel.ReadDataToTable(w); //导入到widget中
     excel.Close();
}

QtExcel::~QtExcel()
{

}
