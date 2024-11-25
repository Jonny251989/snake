#include "scoremodel.h"

ScoreModel::ScoreModel() { }

void ScoreModel::insertion_result(std::string name_, int score_, std::string type_, int speed_){
    std::vector<ScoreModel::PlayerResult> player_scores = get_scores();

    auto position = std::upper_bound(player_scores.begin(), player_scores.end(),
        PlayerResult {name_, score_, type_, speed_}, [](const PlayerResult plr1, const PlayerResult plr2 ){
      return  plr1.score > plr2.score;
    });
    player_scores.insert(position, PlayerResult {name_, score_, type_, speed_});
    update_scores(player_scores);
}

int ScoreModel::insertion_position(int score){
    std::vector<ScoreModel::PlayerResult> player_scores = get_scores();

    auto position = std::upper_bound(player_scores.begin(), player_scores.end(),
        PlayerResult {"", score, "", 0}, [](const PlayerResult plr1, const PlayerResult plr2 ){
      return  plr1.score > plr2.score;
    });
    return std::distance(player_scores.begin(), position );
}

std::vector<ScoreModel::PlayerResult> ScoreModel::get_scores(){
    std::ifstream ifst(m_filename);
    std::vector<ScoreModel::PlayerResult> player_scores;

    while (ifst) {
        ScoreModel::PlayerResult score;
        ifst >> std::ws;
        getline(ifst, score.name);

        ifst >> std::ws;
        ifst >> score.score;

        ifst >> std::ws;
        getline(ifst, score.type);

        ifst >> std::ws;
        ifst >> score.speed;
        if (ifst.fail())
            break;

        player_scores.push_back(score);
    }
    return player_scores;
}

void ScoreModel::update_scores(std::vector<ScoreModel::PlayerResult> scores){
    std::ofstream ofst;
    ofst.open(m_filename, std::ofstream::out | std::ofstream::trunc);

    for (auto &score : scores)
        ofst << score.name <<"\n"<<score.score<<"\n"<<score.type<<"\n"<< score.speed<<"\n";
}