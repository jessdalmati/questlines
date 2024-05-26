#include <string>
#include "questbook.h"

using namespace std;

void Questbook::addQuestline(string questline_id, string questline_name) {
    questlines[questline_id] = Questline(questline_id, questline_name);
}

void Questbook::addQuest(string questline_id, string quest_desc) {
    questlines[questline_id].add(Quest(quest_desc));
}   

Quest Questbook::getQuest(string questline_id, int idx) {
    return questlines[questline_id].get(idx);
}