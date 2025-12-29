#pragma once

#include "enum.h"
#include "esphome/components/number/number.h"
#include "esphome/components/truma_eezy/TrumaEezyApp.h"

namespace esphome {
namespace truma_eezy {


class TrumaAirconManualNumber : public Component, public number::Number, public Parented<TrumaEezyApp> {
 public:
  void setup() override;
  void dump_config() override;

  void set_type(TRUMA_NUMBER_TYPE val) { this->type_ = val; }

 protected:
  TRUMA_NUMBER_TYPE type_;

  void control(float value) override;

 private:
};
}  // namespace truma_eezy
}  // namespace esphome