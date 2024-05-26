#include <string>
#include "quest.h"

using namespace std;

class Questline {
    string name; 
    string id; 
    vector<Quest> quests;

public:
    Questline();
    Questline(string id, string name);
    void add(Quest q);
    Quest get(int idx);
};