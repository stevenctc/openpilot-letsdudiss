/******************************************************************************
 *                      Code generated with sympy 1.6.1                       *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                         This file is part of 'ekf'                         *
 ******************************************************************************/
void err_fun(double *nom_x, double *delta_x, double *out_9194491402793676222);
void inv_err_fun(double *nom_x, double *true_x, double *out_3063511171396580314);
void H_mod_fun(double *state, double *out_2025184943026528362);
void f_fun(double *state, double dt, double *out_1864731935013564721);
void F_fun(double *state, double dt, double *out_4444904566559228177);
void h_3(double *state, double *unused, double *out_671371251959236604);
void H_3(double *state, double *unused, double *out_2149293032055382539);
void h_4(double *state, double *unused, double *out_4720425432685409056);
void H_4(double *state, double *unused, double *out_4330624266537074806);
void h_9(double *state, double *unused, double *out_6072347164904466379);
void H_9(double *state, double *unused, double *out_2390238660318149292);
void h_10(double *state, double *unused, double *out_3214413004645024018);
void H_10(double *state, double *unused, double *out_7805141826593557013);
void h_12(double *state, double *unused, double *out_4051631135899879019);
void H_12(double *state, double *unused, double *out_2174288628186502891);
void h_31(double *state, double *unused, double *out_1322998343986809889);
void H_31(double *state, double *unused, double *out_500801146956916930);
void h_32(double *state, double *unused, double *out_8251280573119734495);
void H_32(double *state, double *unused, double *out_8042808804354873010);
void h_13(double *state, double *unused, double *out_4816437591311904514);
void H_13(double *state, double *unused, double *out_3755915368457524593);
void h_14(double *state, double *unused, double *out_6072347164904466379);
void H_14(double *state, double *unused, double *out_2390238660318149292);
void h_19(double *state, double *unused, double *out_6975612164501309816);
void H_19(double *state, double *unused, double *out_6822918511420580473);
#define DIM 23
#define EDIM 22
#define MEDIM 22
typedef void (*Hfun)(double *, double *, double *);

void predict(double *x, double *P, double *Q, double dt);
const static double MAHA_THRESH_3 = 3.841459;
void update_3(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_4 = 7.814728;
void update_4(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_9 = 7.814728;
void update_9(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_10 = 7.814728;
void update_10(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_12 = 7.814728;
void update_12(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_31 = 7.814728;
void update_31(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_32 = 9.487729;
void update_32(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_13 = 7.814728;
void update_13(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_14 = 7.814728;
void update_14(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_19 = 7.814728;
void update_19(double *, double *, double *, double *, double *);