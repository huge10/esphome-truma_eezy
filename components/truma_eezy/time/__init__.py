from esphome.components import time
import esphome.config_validation as cv
import esphome.codegen as cg
from esphome.const import (
    CONF_ID,
    CONF_TYPE,
)
from .. import truma_eezy_ns, CONF_TRUMA_EEZY_ID, TrumaEezyApp

DEPENDENCIES = ["truma_eezy"]
CODEOWNERS = ["@huge10"]

CONF_AUTO_DISABLE = "auto_disable"

TrumaTime = truma_eezy_ns.class_(
    "TrumaTime", time.RealTimeClock, cg.Component)

CONFIG_SCHEMA = time.TIME_SCHEMA.extend(
    {
        cv.GenerateID(): cv.declare_id(TrumaTime),
        cv.GenerateID(CONF_TRUMA_EEZY_ID): cv.use_id(TrumaEezyApp),
        cv.Optional(CONF_AUTO_DISABLE, default=True): cv.boolean,
    }
).extend(cv.polling_component_schema("never"))


async def to_code(config):
    var = cg.new_Pvariable(config[CONF_ID])
    await cg.register_component(var, config)
    await time.register_time(var, config)
    await cg.register_parented(var, config[CONF_TRUMA_EEZY_ID])

    if config[CONF_AUTO_DISABLE]:
        cg.add(var.set_auto_disable(config[CONF_AUTO_DISABLE]))
