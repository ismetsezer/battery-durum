#ifndef BATTERY_H
#define BATTERY_H


#define BATTERY_INFO_DIR  "/sys/class/power_supply/BAT1"
#define BATTERY_STATUS_DIR "/sys/class/power_supply/BAT1/status"
#define BATTERY_CAPACITY_DIR "/sys/class/power_supply/BAT1/capacity"
#define BATTERY_CAPACITY_LEVEL_DIR "/sys/class/power_supply/BAT1/capacity_level"
#define BATTERY_CHARGE_FULL_DIR "/sys/class/power_supply/BAT1/charge_full"
#define BATTERY_CHARGE_NOW_DIR "/sys/class/power_supply/BAT1/charge_now"
#define BATTERY_CURRENT_NOW_DIR "/sys/class/power_supply/BAT1/current_now"
#define BATTERY_TYPE_DIR "/sys/class/power_supply/BAT1/type"
#define BATTERY_TECHNOLOGY_DIR "/sys/class/power_supply/BAT1/technology"
#define BATTERY_MODEL_NAME_DIR "/sys/class/power_supply/BAT1/model_name"
#define BATTERY_MANUFACTURER_DIR "/sys/class/power_supply/BAT1/manufacturer"
#define BATTERY_VOLTAGE_NOW_DIR "/sys/class/power_supply/BAT1/voltage_now"

extern struct battery{
    int capacity;
    char* capacity_level;
    int charge_full;
    int charge_now;
   char* model_name;
   char* manufacturer;
   int current_now;
   char* status;
   char* techology;
   char* type;
   int voltage_now;
}battery;

typedef struct battery BATTERY;


BATTERY get_battery_information();


#endif
