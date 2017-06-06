#ifndef FILE_I_O
#define FILE_IO
extern struct file {
      char* file_path;
      char file_buffer[500];
}STATO;

//Kullaimin kolay olmasi icin daha iyi
typedef struct file STATO_FILE;

//FILE I/O operations
STATO_FILE read_file(char* file_path,char* status);

#endif
