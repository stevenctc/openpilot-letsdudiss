/******************************************************************************
 *                      Code generated with sympy 1.6.1                       *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                         This file is part of 'ekf'                         *
 ******************************************************************************/
void err_fun(double *nom_x, double *delta_x, double *out_8625829478581046741);
void inv_err_fun(double *nom_x, double *true_x, double *out_8421544381487539951);
void H_mod_fun(double *state, double *out_8226752495886197199);
void f_fun(double *state, double dt, double *out_4656292143583307115);
void F_fun(double *state, double dt, double *out_7308664989110014043);
void h_25(double *state, double *unused, double *out_6304255038708295138);
void H_25(double *state, double *unused, double *out_6004005699855046890);
void h_24(double *state, double *unused, double *out_1187527390453608991);
void H_24(double *state, double *unused, double *out_8162703101869569629);
void h_30(double *state, double *unused, double *out_5175173870320223984);
void H_30(double *state, double *unused, double *out_3609893211094136390);
void h_26(double *state, double *unused, double *out_7393284715830612544);
void H_26(double *state, double *unused, double *out_6738145218915295453);
void h_27(double *state, double *unused, double *out_7140815767340410833);
void H_27(double *state, double *unused, double *out_4897475198930761702);
void h_29(double *state, double *unused, double *out_8591447159969294000);
void H_29(double *state, double *unused, double *out_3035334597238600215);
void h_28(double *state, double *unused, double *out_1578785904195055854);
void H_28(double *state, double *unused, double *out_1144870623633074763);
#define DIM 8
#define EDIM 8
#define MEDIM 8
typedef void (*Hfun)(double *, double *, double *);

void predict(double *x, double *P, double *Q, double dt);
const static double MAHA_THRESH_25 = 3.841459;
void update_25(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_24 = 5.991465;
void update_24(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_30 = 3.841459;
void update_30(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_26 = 3.841459;
void update_26(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_27 = 3.841459;
void update_27(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_29 = 3.841459;
void update_29(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_28 = 5.991465;
void update_28(double *, double *, double *, double *, double *);
void set_mass(double x);

void set_rotational_inertia(double x);

void set_center_to_front(double x);

void set_center_to_rear(double x);

void set_stiffness_front(double x);

void set_stiffness_rear(double x);
