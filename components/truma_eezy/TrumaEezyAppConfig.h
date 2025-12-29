#pragma once

#include "TrumaStausFrameResponseStorage.h"
#include "TrumaStructs.h"

namespace esphome {
namespace truma_eezy {

class TrumaEezyAppConfig : public TrumaStausFrameStorage<StatusFrameConfig> {
  void dump_data() const override;
};

}  // namespace truma_eezy
}  // namespace esphome