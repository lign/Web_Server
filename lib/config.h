#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define conf_file "./server.conf"

typedef struct server_setting {
	char *ip;
	char *root_folder;
	char *home_page;
	char *log_path;
	int port;
	int log_lvl;
	int min_thread;
	int max_thread;
	int min_process;
	int max_process;
} server_setting;

void write_parameter(char *line, struct server_setting *s);

struct server_setting *parse_config_file();
