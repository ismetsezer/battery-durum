#include "battery.h"
#include "file.h"
#include <string.h>
#include <stdlib.h>

BATTERY  get_battery_information(){
   BATTERY battery;
    //Battery Status
    STATO_FILE file = read_file(BATTERY_STATUS_DIR, "r");
    battery.status = (char*)malloc(100 * sizeof(char));
    strcpy(battery.status,file.file_buffer);

  //Battery Capacity Level
   file = read_file(BATTERY_CAPACITY_LEVEL_DIR,"r");
   battery.capacity_level = (char*)malloc(100 * sizeof(char));
   strcpy(battery.capacity_level,file.file_buffer);

//Battery Current Capacity (%)
 file = read_file(BATTERY_CAPACITY_DIR,"r");
 battery.capacity = atoi(file.file_buffer);

//Battery Charge Full (V)
file = read_file(BATTERY_CHARGE_FULL_DIR,"r");
battery.charge_full = atoi(file.file_buffer);


///Battery Charge Now (V)
file = read_file(BATTERY_CHARGE_NOW_DIR,"r");
battery.charge_now = atoi(file.file_buffer);


///Battery Current Now (V)
file = read_file(BATTERY_CURRENT_NOW_DIR,"r");
battery.current_now = atoi(file.file_buffer);

//Battery Type
file = read_file(BATTERY_TYPE_DIR,"r");
battery.type = (char*) malloc( 100 * sizeof(char));
strcpy(battery.type,file.file_buffer);

//Battery Technology
file = read_file(BATTERY_TECHNOLOGY_DIR,"r");
battery.techology = (char*) malloc( 100 * sizeof(char));
strcpy(battery.techology,file.file_buffer);

//Battery Model Name
file = read_file(BATTERY_MODEL_NAME_DIR,"r");
battery.model_name = (char*) malloc( 100 * sizeof(char));
strcpy(battery.model_name,file.file_buffer);


//Battery manufacturer
file = read_file(BATTERY_MANUFACTURER_DIR,"r");
battery.manufacturer = (char*) malloc( 100 * sizeof(char));
strcpy(battery.manufacturer,file.file_buffer);

//Battety Voltage Now
file = read_file(BATTERY_VOLTAGE_NOW_DIR,"r");
battery.voltage_now = atoi(file.file_buffer);

return battery;
}
