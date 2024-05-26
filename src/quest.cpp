#include <string>
#include "quest.h"

Quest::Quest(string desc) {
    this->desc = desc; 
}
    
string Quest::getDesc() {
    return desc; 
}
