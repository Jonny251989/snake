#ifndef SCOREMODEL_H
#define SCOREMODEL_H

#include <QObject>
#include <string>
#include <vector>
#include <QFile>
#include <QByteArray>
#include <QTextStream>
#include <QDebug>
#include "item.h"
#include <fstream>

static const std::string m_filename = "./model/scoremodel/score.txt";

class ScoreModel : public QObject {
    Q_OBJECT
public:
    struct PlayerResult {
        std::string name;
        int score;
        std::string type;
        int speed;

        PlayerResult(std::string name_ = "None", int score_ = 0, std::string type_ = "No type", int speed_ = 0) {
            name = name_;
            score = score_;
            type = type_;
            speed = speed_;
        }
    };

    ScoreModel();

    static std::vector<PlayerResult> get_scores();
    static int insertion_position(int score);
    static void insertion_result(std::string, int, std::string, int);
    static QString nameToMozesType(int arg);
    static void update_scores(std::vector<PlayerResult> scores);


private:

};

#endif // SCOREMODEL_H
