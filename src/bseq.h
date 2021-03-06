/* 2/4/2019
In this file: define two struct vailbles: bseq_file_t (="struct bseq_file_s") and bseq1_t, which stores sequence details.
              define five functions: 
	      the implement of the functions are in the bseq.c file.
*/

#ifndef MM_BSEQ_H
#define MM_BSEQ_H

#include <stdint.h>
#include <stdio.h>

struct bseq_file_s;
typedef struct bseq_file_s bseq_file_t;

typedef struct {
	int rid;//, n_num, m_m, *pos_n;//rid: index of reads; n_num: number of N char; m_m: array size of pos_n; pos_n: store positon of N
	// uint32_v n_pos;
	char *seq;
	void *n_pos;//
	// void *p;
} bseq1_t;

bseq_file_t *bseq_open(const char *fn);
void bseq_close(bseq_file_t *fp);
bseq1_t *bseq_read(bseq_file_t *fp, int *n_, int seq_len);
void bseq_read_second(bseq1_t *&seqs, bseq_file_t *fp, int *n_, int seq_len);
int bseq_eof(bseq_file_t *fp);

#endif
