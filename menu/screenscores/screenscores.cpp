#include "screenscores.h"
#include "ui_screenscores.h"
#include "item.h"
#include <Qt>
#include <sstream>

ScreenScores::ScreenScores(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ScreenScores)
{
    ui->setupUi(this);
    for (size_t i = 0; i < MaxScoresCount; ++i) {
        ui->scoreTable->insertRow(ui->scoreTable->rowCount());

        ui->scoreTable->setItem(i, 0, new QTableWidgetItem(""));
        ui->scoreTable->setItem(i, 1, new QTableWidgetItem(""));
        ui->scoreTable->setItem(i, 2, new QTableWidgetItem(""));
        ui->scoreTable->setItem(i, 3, new QTableWidgetItem(""));
    }
    connect(ui->menu, SIGNAL(clicked()), this, SLOT(on_closed()));
}

void ScreenScores::reload_scores() {
    disabled_items();

    std::vector<ScoreModel::PlayerResult> scores = ScoreModel::get_scores();

    for (size_t i = 0; i < MaxScoresCount && i < scores.size(); ++i) {
        ui->scoreTable->item(i, 0)->setText(QString::fromStdString(scores[i].name));
        ui->scoreTable->item(i, 1)->setText(QString::number(scores[i].score));
        ui->scoreTable->item(i, 2)->setText(QString::fromStdString(scores[i].type));
        ui->scoreTable->item(i, 3)->setText(QString::number(scores[i].speed));
    }
    m_scorePos = -1;
}

void ScreenScores::showInsertScore(int score, std::string typeOfMaze, int speed) {
    reload_scores();

    m_scorePos = ScoreModel::insertion_position(score);

    if (m_scorePos < 0 || m_scorePos > MaxScoresCount)
        return;

    //ScoreModel::insertion_result("anonim", score, typeOfMaze, speed);

    auto scores = ScoreModel::get_scores();
    auto position = std::upper_bound(scores.begin(), scores.end(),
        ScoreModel::PlayerResult {"", score, typeOfMaze, speed}, [](const ScoreModel::PlayerResult plr1, const ScoreModel::PlayerResult plr2 ){
      return  plr1.score > plr2.score;
    });

    scores.insert(position, ScoreModel::PlayerResult {"", score, typeOfMaze, speed});

    for (size_t i = 0; i < MaxScoresCount && i < scores.size(); ++i) {
        ui->scoreTable->item(i, 0)->setText(QString::fromStdString (scores[i].name));
        ui->scoreTable->item(i, 1)->setText(QString::number(scores[i].score));
        ui->scoreTable->item(i, 2)->setText(QString::fromStdString(scores[i].type));
        ui->scoreTable->item(i, 3)->setText(QString::number(scores[i].speed));
    }
    auto item = ui->scoreTable->item(m_scorePos, 0);
    item->setFlags(item->flags() ^ Qt::ItemFlag::ItemIsEditable);
    ui->scoreTable->editItem(ui->scoreTable->item(m_scorePos, 0));
}

void ScreenScores::on_closed() {
    if (m_scorePos < 0 || m_scorePos > MaxScoresCount) {
        emit closed();
        return;
    }

    std::string name = (ui->scoreTable->item(m_scorePos, 0)->text()).toStdString();
    int score = ui->scoreTable->item(m_scorePos, 1)->text().toInt();
    std::string typeMaze = (ui->scoreTable->item(m_scorePos, 2)->text()).toStdString();
    int speed = ui->scoreTable->item(m_scorePos, 3)->text().toInt();

    if (isCorrectname(name)) {
        //ScoreModel::correction_result(score, name);

        ScoreModel::insertion_result(name, score, typeMaze, speed);

        emit closed();
    }
}

void ScreenScores::disabled_items() {
    for (size_t i = 0; i < MaxScoresCount; ++i) {
        auto item = ui->scoreTable->item(i, 0);
        ui->scoreTable->item(i, 0)->setFlags(item->flags() & (~Qt::ItemFlag::ItemIsEditable));

        item = ui->scoreTable->item(i, 1);
        ui->scoreTable->item(i, 1)->setFlags(item->flags() & (~Qt::ItemFlag::ItemIsEditable));

        item = ui->scoreTable->item(i, 2);
        ui->scoreTable->item(i, 2)->setFlags(item->flags() & (~Qt::ItemFlag::ItemIsEditable));

        item = ui->scoreTable->item(i, 3);
        ui->scoreTable->item(i, 3)->setFlags(item->flags() & (~Qt::ItemFlag::ItemIsEditable));
    }
}

bool ScreenScores::isCorrectname(std::string name) {
   auto it_not_space = std::find_if(name.begin(), name.end(), [](QChar c) {
        return c != ' ' && c != '\t';
    });

   return name.end() != it_not_space;
}

ScreenScores::~ScreenScores()
{
    delete ui;
}
