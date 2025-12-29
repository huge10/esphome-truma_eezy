#pragma once

#include "esphome/components/binary_sensor/binary_sensor.h"
#include "esphome/components/truma_eezy/TrumaEezyApp.h"
#include "enum.h"

namespace esphome {
namespace truma_eezy {

class TrumaTimerBinarySensor : public Component, public binary_sensor::BinarySensor, public Parented<TrumaEezyApp> {
 public:
  void setup() override;
  void dump_config() override;

  void set_type(TRUMA_BINARY_SENSOR_TYPE val) { this->type_ = val; }

 protected:
  TRUMA_BINARY_SENSOR_TYPE type_;

 private:
};
}  // namespace truma_eezy
}  // namespace esphome