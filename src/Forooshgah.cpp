#include "../include/Forooshgah.h"
#include "ui_store.h"

Forooshgah::Forooshgah(Information * in, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Forooshgah)
{
    InfPtr = in;
    ui->setupUi(this);
    ui->labelAadiNumber->setText(QString::number(InfPtr->WareHouse.NormalFlowerCount));
    ui->labelRareNumber->setText(QString::number(InfPtr->WareHouse.RareFlowerCount));
    ui->labelZinatiNumber->setText(QString::number(InfPtr->WareHouse.DecorativeFlowerCount));

    ui->labelKokabNumber->setText(QString::number(InfPtr->WareHouse.KokabCount));
    ui->labelLaleNumber->setText(QString::number(InfPtr->WareHouse.LalehCount));
    ui->labelLiliumNumber->setText(QString::number(InfPtr->WareHouse.LiliumCount));
    ui->labelMagnoliaNumber->setText(QString::number(InfPtr->WareHouse.MagnloiaCount));
    ui->labelLaleNumber->setText(QString::number(InfPtr->WareHouse.LalehCount));
    ui->labelSonbolNumber->setText(QString::number(InfPtr->WareHouse.SonbolCount));
    ui->labelOrkideNumber->setText(QString::number(InfPtr->WareHouse.OrkidehCount));
    ui->labelNargesNumber->setText(QString::number(InfPtr->WareHouse.NargesCount));
    ui->labelMaryamNumber->setText(QString::number(InfPtr->WareHouse.MaryamCount));

    this->setWindowTitle("فروشگاه");
}

Forooshgah::Forooshgah(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Forooshgah)
{

    ui->setupUi(this);
}
Forooshgah::~Forooshgah()
{
    delete ui;
}

void Forooshgah::on_pushButtonBuyKhak_clicked()
{
    InfPtr->WareHouse.Soil++;
    ui->labelKhakNumber->setText(QString::number(InfPtr->WareHouse.Soil));
    InfPtr->WareHouse.Money -= 450;
}

void Forooshgah::on_pushButtonBuyAb_clicked()
{
    InfPtr->WareHouse.Water++;
    ui->labelAbNumber->setText(QString::number(InfPtr->WareHouse.Water));
    InfPtr->WareHouse.Money -= 250;
}

void Forooshgah::on_pushButtonBuyPoison_clicked()
{
    InfPtr->WareHouse.Poison++;
    ui->labelPoisonNumber->setText(QString::number(InfPtr->WareHouse.Poison));
    InfPtr->WareHouse.Money -= 500;
}

void Forooshgah::on_pushButtonBuyAadi_clicked()
{
    InfPtr->Flowers.push_back(new Kokab);
    InfPtr->WareHouse.NormalFlowerCount++;
    InfPtr->WareHouse.KokabCount++;
    ui->labelAadiNumber->setText(QString::number(InfPtr->WareHouse.NormalFlowerCount));
    InfPtr->WareHouse.Money -= 1000;
}

void Forooshgah::on_pushButtonBuyZinati_clicked()
{
    InfPtr->Flowers.push_back(new Orkideh);
    InfPtr->WareHouse.DecorativeFlowerCount++;
    ui->labelZinatiNumber->setText(QString::number(InfPtr->WareHouse.DecorativeFlowerCount));
    InfPtr->WareHouse.Money -= 20000;
}

void Forooshgah::on_pushButtonBuyNader_clicked()
{
    InfPtr->Flowers.push_back(new Laleh);
    InfPtr->WareHouse.RareFlowerCount++;
    ui->labelRareNumber->setText(QString::number(InfPtr->WareHouse.RareFlowerCount));
    InfPtr->WareHouse.Money -= 5000;
}

void Forooshgah::on_pushButtonOrkideWH_8_clicked()
{

}
