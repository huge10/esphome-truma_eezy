#pragma once

#include "esphome/components/binary_sensor/binary_sensor.h"
#include "esphome/components/truma_eezy/TrumaEezyApp.h"

namespace esphome {
namespace truma_eezy {

class TrumaCpPlusBinarySensor : public PollingComponent,
                                public binary_sensor::BinarySensor,
                                public Parented<TrumaEezyApp> {
 public:
  void update() override;
  void dump_config() override;

 protected:
 private:
};
}  // namespace truma_eezy
}  // namespace esphome