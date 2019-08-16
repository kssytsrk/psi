#ifndef CAPTCHADLG_H
#define CAPTCHADLG_H

#include <QDialog>

#include "xmpp_captcha.h"

class PsiAccount;
class XDataWidget;

namespace Ui {
    class CaptchaDlg;
}

class CaptchaDlg : public QDialog
{
    Q_OBJECT

public:
    explicit CaptchaDlg(QWidget *parent, const XMPP::CaptchaChallenge &challenge, PsiAccount *pa);
    ~CaptchaDlg();

public slots:
    void done(int r);

private:
    Ui::CaptchaDlg *ui;
    XMPP::CaptchaChallenge challenge;
    XDataWidget *dataWidget;
};

#endif // CAPTCHADLG_H
