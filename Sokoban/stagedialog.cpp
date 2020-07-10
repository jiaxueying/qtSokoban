#include "stagedialog.h"
#include "ui_stagedialog.h"

stageDialog::stageDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::stageDialog)
{
    ui->setupUi(this);
}

stageDialog::~stageDialog()
{
    delete ui;
}
