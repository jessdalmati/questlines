#include <string>
#include <iostream>
#include "../lib/CLI11.hpp"
#include "questbook.h"

int main(int argc, char **argv) {
    Questbook questbook;
    CLI::App app{"qit"};
    app.require_subcommand();
    vector<string> v; 
    auto add = app.add_subcommand("add", "Nothing specified, nothing added.");
    add->add_flag("-l", v, "Add questline.")->expected(2);
    add->callback([&]() {
        questbook.addQuestline(v[0], v[1]);
        cout << questbook.list();
    });
    CLI11_PARSE(app, argc, argv);
    return 0; 
    //auto qit = app.add_subcommand("qit", "Questline interface.")
    // string quest; 
    // app.add_option("-q", quest, "Require quest description.")
    //     ->required();
    
    // questbook.addQuestline("Q01", "Quest 1");
    // questbook.addQuest("Q01", "hello world");
    // cout << questbook.getQuest("Q01", 0).getDesc();
}