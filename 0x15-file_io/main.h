#ifndef MAIN_HEADER
#define MAIN_HEADER

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void close_fds(int ffd, int tfd);
void read_error(char *buff, char *filename);
void write_error(char *buff, char *filename);
void argc_error(void);

#endif /* MIAN_HEADER */

