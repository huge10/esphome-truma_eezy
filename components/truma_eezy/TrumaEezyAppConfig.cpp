#include "TrumaEezyAppConfig.h"
#include "esphome/core/log.h"
#include "helpers.h"

namespace esphome {
namespace truma_eezy {

static const char *const TAG = "truma_eezy.TrumaEezyAppConfig";

void TrumaEezyAppConfig::dump_data() const {
  ESP_LOGD(TAG, "StatusFrameConfig Offset: %.1f", temp_code_to_decimal(this->data_.temp_offset));
}

}  // namespace truma_eezy
}  // namespace esphome