#include <cstdint>

enum class SkyMapType : uint32_t {
  WORLD_EMPTY = 0,
  CANDLE_SPACE = 1,
  DAWN = 2,
  MAIN_STREET = 3,
  PRAIRIE = 4,
  RAIN = 5,
  SUNSET = 6,
  DUSK = 7,
  NIGHT = 8,
  STORM = 9,
  ORBIT_SPECIAL = 10,
  TRIALS = 11,
  ART_EVENTS = 12,
  OTHER = 13
};