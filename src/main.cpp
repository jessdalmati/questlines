#include <string>
#include <iostream>
#include "questbook.h"

int main() {
    Questbook questbook;
    questbook.addQuestline("Q01", "Quest 1");
    questbook.addQuest("Q01", "hello world");
    cout << questbook.getQuest("Q01", 0).getDesc();
}