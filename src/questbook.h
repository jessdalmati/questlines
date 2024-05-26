#include <string>
#include "questline.h"

using namespace std;

class Questbook {
    unordered_map<string, Questline> questlines;

public:
    void addQuestline(string questline_id, string questline_name); 
    void addQuest(string questline_id, string quest_desc);  
    Quest getQuest(string questline_id, int idx);
};