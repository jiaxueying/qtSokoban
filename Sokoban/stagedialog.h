#ifndef STAGEDIALOG_H
#define STAGEDIALOG_H

#include <QDialog>

namespace Ui {
class stageDialog;
}

class stageDialog : public QDialog
{
    Q_OBJECT

public:
    explicit stageDialog(QWidget *parent = nullptr);
    ~stageDialog();

private:
    Ui::stageDialog *ui;
};

#endif // STAGEDIALOG_H
