//
// Created by Mindaugas K on 7/25/2019.
//

#ifndef FRUIT_INHERIT_2_GRANNYSMITH_H
#define FRUIT_INHERIT_2_GRANNYSMITH_H

#include "Apple.h"

class GrannySmith: public Apple {
public:
   explicit GrannySmith(std::string color="green")
        :Apple("granny smith apple", color)
    {}
};


#endif //FRUIT_INHERIT_2_GRANNYSMITH_H
