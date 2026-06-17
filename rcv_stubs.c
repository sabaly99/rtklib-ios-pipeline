#include "rtklib/src/rtklib.h"
int input_ubx  (raw_t *r, unsigned char c) { return 0; }
int input_ubxf (raw_t *r, FILE *f)         { return 0; }
int input_oem4 (raw_t *r, unsigned char c) { return 0; }
int input_oem4f(raw_t *r, FILE *f)         { return 0; }
int input_nvs  (raw_t *r, unsigned char c) { return 0; }
int input_nvsf (raw_t *r, FILE *f)         { return 0; }
int input_stq  (raw_t *r, unsigned char c) { return 0; }
int input_stqf (raw_t *r, FILE *f)         { return 0; }
int input_javad (raw_t *r, unsigned char c){ return 0; }
int input_javadf(raw_t *r, FILE *f)        { return 0; }
int input_sbp  (raw_t *r, unsigned char c) { return 0; }
int input_sbpf (raw_t *r, FILE *f)         { return 0; }
int input_cres (raw_t *r, unsigned char c) { return 0; }
int input_cresf(raw_t *r, FILE *f)         { return 0; }
int input_sbf  (raw_t *r, unsigned char c) { return 0; }
int input_sbff (raw_t *r, FILE *f)         { return 0; }
int input_bnx  (raw_t *r, unsigned char c) { return 0; }
int input_bnxf (raw_t *r, FILE *f)         { return 0; }
int input_rt17 (raw_t *r, unsigned char c) { return 0; }
int input_rt17f(raw_t *r, FILE *f)         { return 0; }
int init_rt17  (raw_t *r)                  { return 0; }
void free_rt17 (raw_t *r)                  { return;   }
int gen_ubx(const char *msg, unsigned char *buff) { return 0; }
int gen_stq(const char *msg, unsigned char *buff) { return 0; }
int gen_nvs(const char *msg, unsigned char *buff) { return 0; }
