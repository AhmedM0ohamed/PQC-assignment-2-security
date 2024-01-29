
#ifndef TOY_H
#define TOY_H
// Define necessary constants
#define TK_Q 97
#define TK_N 4
#define TK_K 3

// Function declarations
static void toy_fill(short *buf, int n);
static void toy_polmul_naive(short *dist, const short *a, const short *b, int add);
static void toy_mulmv(short *dst, const short *mat, const short *vec);
static void toy_mulmTv(short *dst, const short *mat, const short *vec);
static void toy_dot(short *dst, const short *v1, const short *v2);
static void toy_add(short *dst, const short *v1, const short *v2, int count, int v2_neg);
void toy_generate(short *A, short *t, short *s);
void toy_encryp(const short *A, const short *t, int plain, short *u, short *v);
int toy_decryp(const short *s, const short *u, const short *v);

#endif // TOY_H
