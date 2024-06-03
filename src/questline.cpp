#include <string>
#include "questline.h"

using namespace std;

Questline::Questline(){}

Questline::Questline(string id, string name) {
    this->id = id; 
    this->name = name; 
}

void Questline::add(Quest q) {
    quests.push_back(q);
}
    
Quest Questline::get(int idx) {
    return quests[idx];
}

string Questline::getName() {
    return this->name; 
}