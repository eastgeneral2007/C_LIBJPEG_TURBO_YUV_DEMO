// codes copied from https://blog.csdn.net/subfate/article/details/46794639

#ifndef TEST_JPG_TURBO_TJ_TEST_H
#define TEST_JPG_TURBO_TJ_TEST_H
typedef unsigned char uchar;

typedef struct tjp_info {
    int outwidth;
    int outheight;
    unsigned long jpg_size;
}tjp_info_t;

/*获取当前ms数*/
int get_timer_now ();
int tj_test();
uchar *read_file2buffer(char *filepath, tjp_info_t *tinfo);
void write_buffer2file(char *filename, uchar *buffer, unsigned long size);
#endif //TEST_JPG_TURBO_TJ_TEST_H
