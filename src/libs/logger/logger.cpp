#include "spdlog/spdlog.h"

#include "logger.h"

namespace logger {
void print(const char* message) { spdlog::info(message); }
} // namespace logger