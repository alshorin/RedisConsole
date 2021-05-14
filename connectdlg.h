#ifndef CONNECTDLG_H
#define CONNECTDLG_H

//#include <QtGui>
#include <QDialog>
#include <QLineEdit>
#include <QDialogButtonBox>
#include <QIntValidator>
#include <QFormLayout>
#include <QLabel>
#include <QMessageBox>
#include <QPushButton>

class ConnectDlg : public QDialog
{
    Q_OBJECT
public:
    explicit ConnectDlg(QWidget *parent = 0);
    QString getHost();
    QString getPort();
    QString getDbNumber();
    QString getPrefix();
private:
    QLineEdit *host;
    QLineEdit *port;
    QLineEdit *dbNumber;
    QLineEdit *prefix;
    QDialogButtonBox *buttonBox;
private slots:
    void onOpen();

signals:

public slots:

};

#endif // CONNECTDLG_H
