//
// Created by Mindaugas K on 7/29/2019.
//

#ifndef PAIR_TEMPLATE_STRINGVALUEPAIR_H
#define PAIR_TEMPLATE_STRINGVALUEPAIR_H

#include "Pair2.h"
#include <string>
template <class S>
class StringValuePair: public Pair2<std::string,S>  {
public:
    StringValuePair(const std::string& key, const S& value)
        :Pair2<std::string, S>(key, value)
    {}
};


#endif //PAIR_TEMPLATE_STRINGVALUEPAIR_H
