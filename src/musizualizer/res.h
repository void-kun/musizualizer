#ifndef RES_H
#define RES_H

#include <fmt/format.h>

#include <iostream>

enum class RETURN_STATUS { ERROR, SUCCESS };

inline void check_status(RETURN_STATUS &status, std::string const &msg) {
    switch (status) {
        case RETURN_STATUS::ERROR:
            std::cout << fmt::format(" \x1b[31;1m[ERROR]\x1b[0m : {}", msg);
            exit(-1);
        case RETURN_STATUS::SUCCESS:
            break;
    }
}

#endif