#pragma once

#include "esphome/components/climate/climate.h"
#include "esphome/components/truma_eezy/TrumaEezyApp.h"

namespace esphome {
namespace truma_eezy {
class TrumaWaterClimate : public Component, public climate::Climate, public Parented<TrumaEezyApp> {
 public:
  void setup() override;

  void dump_config() override;

  void control(const climate::ClimateCall &call) override;

  climate::ClimateTraits traits() override;

 protected:
 private:
};
}  // namespace truma_eezy
}  // namespace esphome