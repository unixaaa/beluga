char a1[10] = "1234567890";
char a2[] = "1234567890"; char a2[11];
char a3[10] = "123456789";
char a4[10] = "1234567890a";                                                /* error */
char a5[10] = { "123456789" };
char a6[10] = { '1', '2', '3', };
char a7[10] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', 'a' };    /* error */
char a8[10] = { { '1' }, { '2' }, { '3' } };
char a9[10] = 'a';                                                          /* error */
int a10[5] = { 1, 2, 3, 4 };
int a11[5] = { 1, 2, 3, 4, 5, };
int a12[5] = { 1, 2, 3, 4, 5, 6, };                                         /* error */
struct t { double x; int *a; };
struct t a14[2] = { { 3.14, (void *)0 }, { -3.14, (void *)0 } };
struct t a15[2] = { 3.14, (void *)0, -3.14, (void *)0 };
struct t a16[1] = { { { 3.14 }, { (void *)0 } } };
int a17[] = { 1, 2, 3, 4, 5 }; int a17[5];
int a18[] = { { 1 }, { 2 } };
int a19[] = 1;                                                               /* error */