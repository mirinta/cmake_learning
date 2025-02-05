#include "spdlog/spdlog.h"

#include "math/add.h"
#include "logger/logger.h"

int main()
{
    logger::print("hello");
    spdlog::info(math::add(3, 4));
    return 0;
}
