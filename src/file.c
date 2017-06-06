#include <stdio.h>
#include <stdlib.h>
#include "file.h"


STATO_FILE read_file(char* file_path,char* file_status){
  STATO_FILE file;
  FILE *fp = fopen(file_path,file_status);
if(fp == NULL){
  perror("FILE EXIST");
  exit(1);
}

  fgets(file.file_buffer,500,(FILE*)fp);
  file.file_path = file_path;
  fclose(fp);
  return file;
}
