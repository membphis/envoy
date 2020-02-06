#include "extensions/filters/http/lua/lua_core.h"

#include "envoy/http/codes.h"

long envoy_time() {
  auto now = std::chrono::system_clock::now();
  return std::chrono::system_clock::to_time_t(now);
}
