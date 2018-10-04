#include "source.h"
#include "ui_source.h"


source::source(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::source)
{
    ui->setupUi(this);
    random = 0;
}


void source::on_pushButton_clicked()
{
    random = rand() % 5;    // Get a random number, after this converted int integer
    switch(random)
    {
    case 0:
        ui->label->setText("That'll do");
        break;
    case 1:
        ui->label->setText("Hello world, and shut up");
        break;
    case 2:
        ui->label->setText("Sometimes I go in the park, and kill ducks. This is wrong./r I know...ahhaahahahah");
        break;
    case 3:
        ui->label->setText("What's happen???");
        break;
    default:
        ui->label->setText("NOT FOUND 404");
        break;
    }
}

source::~source()
{
    delete ui;
}

