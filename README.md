# ESPHome Truma Eezy component

ESPHome component to remote control a Truma Eezy heater. Based on the work of [Fabian Schmidt](https://github.com/Fabian-Schmidt/esphome-truma_inetbox).

See [Daniel Fett](https://github.com/danielfett/inetbox.py)'s original Python implementation for hardware instructions.

## Example configuation

This example is for connecting ESPHome to the Truma Eezy.

```yaml
esphome:
  name: "esphome-eezy-control"

external_components:
  - source: github://huge10/esphome-truma_eezy
    components: ["truma_eezy"]
    ...
```