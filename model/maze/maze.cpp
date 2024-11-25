#include "maze.h"

Mazes::Mazes(QObject *parent, std::string type_): QObject(parent), type(type_){
    if(type != "Без лабиринта")
        this->readFileWithMazes();
}

void Mazes::readFileWithMazes(){
    std::string type_ = gettypeafterupdate(type);
    std::string filepath = "/typeofmozes/" + type_ + ".txt";
    std::cout <<"filepath: "<<filepath<<"\n";
    std::ifstream in(filepath);
    if (in.is_open()){
        char oneChar;
        int countOfRows = 10, countOfColumns = 10;

       while(true){
            for( int rows = 0; rows < countOfRows; ++rows ){
                for( int columns = 0; columns < countOfColumns; ++columns ){
                    in >> oneChar;
                    if (oneChar == '1') 
                        labirint.push_front(Item(columns, rows));  
                }
            }
            break;
       }
       in.close();
    }
}

std::string Mazes::gettypeafterupdate(std::string type){
    if (type == "Без лабиринта")
        return "0";
    else if (type == "С бортами")
        return "1";
    else if (type == "Тип 1")
        return "2";
    else if (type == "Тип 2")
        return "3";
    else if (type == "Тип 3")
        return "4";
    else if (type == "Тип 4")
        return "5";
    else if (type == "Тип 5")
        return "6";
    else
        return "0";
}
std::string Mazes::gettype(){
    return type;
}

std::list<Item> Mazes::getMaze(){
    return labirint;
}

Mazes::~Mazes(){

}