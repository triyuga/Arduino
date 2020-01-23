# Misc Arduino Tinkering

Me hacking on Arduino https://www.arduino.cc/

This repo is being developed using the `vscode-arduino` plugin for VS Code, which depends on the [Arduino IDE](https://www.arduino.cc/en/Main/Software).

The `/examples` dir is pulled from the Arduino-IDE app here `/Applications/Arduino.app/Contents/Java/examples`

The `/examples.config` dir contains example `.vscode` config files with comments about my learnings.

## Gotchas

* When running `upload` in `vscode-arduino` it doesn't necessarily upload the currently editing sketch, rather it uploads the sketch referenced by the `sketch` setting in `.vscode/arduino.json`.


## Projects

* [Misc Study]()
* [Who's using my wasshing machine?!](./projects/whos-using-my-washing-machine.md)
* [Silly Soundboard](./projects/silly-soundboard.md)


# TODO

* Automate `.vscode/arduino.json` `sketch` setting to currently editing file, or confirm that it's not possible...
* Include a sibling file in sketch upload, referenced by main sketch.
* Connect speaker/headphones and emit sound...

# Shopping

* 3mm headphone jack module
* computer speakers
* power supply for board