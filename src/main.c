#include <stdio.h>
#include "battery.h"
#include "file.h"
#include <string.h>
void print_all(BATTERY battery);
void print_version();
void print_help();

int main(int argc , char* argv[]){
  BATTERY battery = get_battery_information();
  if(!argv[1]){
    print_all(battery);

  }else{
    if( strcmp(argv[1],"-v") == 0 || strcmp(argv[1],"--version") == 0){
      print_version();
    }else if(strcmp(argv[1],"-h") == 0 || strcmp(argv[1],"--help") == 0){
        print_help();
    }else if(strcmp(argv[1],"-b") == 0 || strcmp(argv[1],"--battery") == 0){
        printf("Kalan Sarj: \t %d\n",battery.capacity );
    }else if(strcmp(argv[1],"-s") == 0 || strcmp(argv[1],"--status") == 0){
      printf("Sarj Durumu:\t  %s \n",battery.status);
    }else if(strcmp(argv[1],"-m") == 0 || strcmp(argv[1],"--model") == 0){
      printf("Model:\t %s\n",battery.model_name);
    }else if(strcmp(argv[1],"-k") == 0 || strcmp(argv[1],"--manufacturer") == 0){
      printf("Ureticisi: \t %s \n",battery.manufacturer);
    }else if(strcmp(argv[1],"-t") == 0 || strcmp(argv[1],"--techology") == 0){
      printf("Teknoloji: \t %s \n",battery.techology);
    }else if(strcmp(argv[1],"-i") ==0 || strcmp(argv[1],"--type") == 0){
      printf("Tip:\t %s\n",battery.type);
    }else{
      print_help();
    }
  }


}

void print_all(BATTERY battery){
  printf("\n ---------------------------------------------------------- \n" );
  printf("Kalan Sarj:    %(%d) \n", battery.capacity);
  printf("Suan Ki Sarj :      %d\n",battery.charge_now);
  printf("Sarj Durumu:     %s\n",battery.status);
  printf("Full Sarj Voltaji:  %d\n",battery.charge_full);
  printf("Model:                 %s\n",battery.model_name );
  printf("Ureticisi:              %s\n",battery.manufacturer );
  printf("Teknolojisi:         %s\n",battery.techology );
  printf("Tip:                       %s\n",battery.type );
  printf("\n ---------------------------------------------------------- \n");

}


void print_version(){
    STATO_FILE  version = read_file("VERSION","r");
    printf("%s\n",version.file_buffer );
}

void print_help(){
  printf("\n Usage:  statobat [options] \n");
  printf("\n Options: \n" );
  printf("\t\t  --version [-v]  \t show version\n" );
  printf("\t\t  --battery [-b]  \t show battery charge \n");
  printf("\t\t  --techology [-t]  \t show battery techology \n");
  printf("\t\t  --manufacturer [-k]  \t show battery manufacturer \n");
  printf("\t\t  --model [-m]  \t show battery model \n");
  printf("\t\t  --type [-i]  \t\t show battery type \n");

}
