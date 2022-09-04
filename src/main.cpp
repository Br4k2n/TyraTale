#include <tyra>
#include "Undertale.hpp"

int main() {
  Tyra::EngineOptions options;

options.loadUsbDriver = false;

  Tyra::Engine engine;
  tale::tale game(&engine);
  engine.run(&game);
  SleepThread();
  return 0;
}