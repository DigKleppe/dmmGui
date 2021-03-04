cmake_minimum_required(VERSION 3.5)

add_definitions(-D ESP32 -D ARDUINO=200 -D ARDUINO_ARCH_ESP32 -D ESP_PLATFORM) 
set(COMPONENT_PRIV_REQUIRES  "gui")
list(APPEND EXTRA_COMPONENT_DIRS components/gui components/lvgl_esp32_drivers components/lvgl_esp32_drivers/lvgl_touch components/lvgl_esp32_drivers/lvgl_tft)
  
include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(dmm)



