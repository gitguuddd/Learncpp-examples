//
// Created by Mindaugas K on 7/24/2019.
//

#include "Banana.h"
std::ostream& operator<<(std::ostream &out, const Banana& b){
    out<<"Banana("<<b.getName()<<", "<<b.getColor()<<")\n";
    return out;
}