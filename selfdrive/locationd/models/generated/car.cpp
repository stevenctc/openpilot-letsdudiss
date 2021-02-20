
extern "C"{

double mass;

void set_mass(double x){ mass = x;}

double rotational_inertia;

void set_rotational_inertia(double x){ rotational_inertia = x;}

double center_to_front;

void set_center_to_front(double x){ center_to_front = x;}

double center_to_rear;

void set_center_to_rear(double x){ center_to_rear = x;}

double stiffness_front;

void set_stiffness_front(double x){ stiffness_front = x;}

double stiffness_rear;

void set_stiffness_rear(double x){ stiffness_rear = x;}

}
extern "C" {
#include <math.h>
/******************************************************************************
 *                      Code generated with sympy 1.6.1                       *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                         This file is part of 'ekf'                         *
 ******************************************************************************/
void err_fun(double *nom_x, double *delta_x, double *out_8625829478581046741) {
   out_8625829478581046741[0] = delta_x[0] + nom_x[0];
   out_8625829478581046741[1] = delta_x[1] + nom_x[1];
   out_8625829478581046741[2] = delta_x[2] + nom_x[2];
   out_8625829478581046741[3] = delta_x[3] + nom_x[3];
   out_8625829478581046741[4] = delta_x[4] + nom_x[4];
   out_8625829478581046741[5] = delta_x[5] + nom_x[5];
   out_8625829478581046741[6] = delta_x[6] + nom_x[6];
   out_8625829478581046741[7] = delta_x[7] + nom_x[7];
}
void inv_err_fun(double *nom_x, double *true_x, double *out_8421544381487539951) {
   out_8421544381487539951[0] = -nom_x[0] + true_x[0];
   out_8421544381487539951[1] = -nom_x[1] + true_x[1];
   out_8421544381487539951[2] = -nom_x[2] + true_x[2];
   out_8421544381487539951[3] = -nom_x[3] + true_x[3];
   out_8421544381487539951[4] = -nom_x[4] + true_x[4];
   out_8421544381487539951[5] = -nom_x[5] + true_x[5];
   out_8421544381487539951[6] = -nom_x[6] + true_x[6];
   out_8421544381487539951[7] = -nom_x[7] + true_x[7];
}
void H_mod_fun(double *state, double *out_8226752495886197199) {
   out_8226752495886197199[0] = 1.0;
   out_8226752495886197199[1] = 0.0;
   out_8226752495886197199[2] = 0.0;
   out_8226752495886197199[3] = 0.0;
   out_8226752495886197199[4] = 0.0;
   out_8226752495886197199[5] = 0.0;
   out_8226752495886197199[6] = 0.0;
   out_8226752495886197199[7] = 0.0;
   out_8226752495886197199[8] = 0.0;
   out_8226752495886197199[9] = 1.0;
   out_8226752495886197199[10] = 0.0;
   out_8226752495886197199[11] = 0.0;
   out_8226752495886197199[12] = 0.0;
   out_8226752495886197199[13] = 0.0;
   out_8226752495886197199[14] = 0.0;
   out_8226752495886197199[15] = 0.0;
   out_8226752495886197199[16] = 0.0;
   out_8226752495886197199[17] = 0.0;
   out_8226752495886197199[18] = 1.0;
   out_8226752495886197199[19] = 0.0;
   out_8226752495886197199[20] = 0.0;
   out_8226752495886197199[21] = 0.0;
   out_8226752495886197199[22] = 0.0;
   out_8226752495886197199[23] = 0.0;
   out_8226752495886197199[24] = 0.0;
   out_8226752495886197199[25] = 0.0;
   out_8226752495886197199[26] = 0.0;
   out_8226752495886197199[27] = 1.0;
   out_8226752495886197199[28] = 0.0;
   out_8226752495886197199[29] = 0.0;
   out_8226752495886197199[30] = 0.0;
   out_8226752495886197199[31] = 0.0;
   out_8226752495886197199[32] = 0.0;
   out_8226752495886197199[33] = 0.0;
   out_8226752495886197199[34] = 0.0;
   out_8226752495886197199[35] = 0.0;
   out_8226752495886197199[36] = 1.0;
   out_8226752495886197199[37] = 0.0;
   out_8226752495886197199[38] = 0.0;
   out_8226752495886197199[39] = 0.0;
   out_8226752495886197199[40] = 0.0;
   out_8226752495886197199[41] = 0.0;
   out_8226752495886197199[42] = 0.0;
   out_8226752495886197199[43] = 0.0;
   out_8226752495886197199[44] = 0.0;
   out_8226752495886197199[45] = 1.0;
   out_8226752495886197199[46] = 0.0;
   out_8226752495886197199[47] = 0.0;
   out_8226752495886197199[48] = 0.0;
   out_8226752495886197199[49] = 0.0;
   out_8226752495886197199[50] = 0.0;
   out_8226752495886197199[51] = 0.0;
   out_8226752495886197199[52] = 0.0;
   out_8226752495886197199[53] = 0.0;
   out_8226752495886197199[54] = 1.0;
   out_8226752495886197199[55] = 0.0;
   out_8226752495886197199[56] = 0.0;
   out_8226752495886197199[57] = 0.0;
   out_8226752495886197199[58] = 0.0;
   out_8226752495886197199[59] = 0.0;
   out_8226752495886197199[60] = 0.0;
   out_8226752495886197199[61] = 0.0;
   out_8226752495886197199[62] = 0.0;
   out_8226752495886197199[63] = 1.0;
}
void f_fun(double *state, double dt, double *out_4656292143583307115) {
   out_4656292143583307115[0] = state[0];
   out_4656292143583307115[1] = state[1];
   out_4656292143583307115[2] = state[2];
   out_4656292143583307115[3] = state[3];
   out_4656292143583307115[4] = state[4];
   out_4656292143583307115[5] = dt*((-state[4] + (-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])/(mass*state[4]))*state[6] + stiffness_front*(-state[2] - state[3] + state[7])*state[0]/(mass*state[1]) + (-stiffness_front*state[0] - stiffness_rear*state[0])*state[5]/(mass*state[4])) + state[5];
   out_4656292143583307115[6] = dt*(center_to_front*stiffness_front*(-state[2] - state[3] + state[7])*state[0]/(rotational_inertia*state[1]) + (-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])*state[5]/(rotational_inertia*state[4]) + (-pow(center_to_front, 2)*stiffness_front*state[0] - pow(center_to_rear, 2)*stiffness_rear*state[0])*state[6]/(rotational_inertia*state[4])) + state[6];
   out_4656292143583307115[7] = state[7];
}
void F_fun(double *state, double dt, double *out_7308664989110014043) {
   out_7308664989110014043[0] = 1;
   out_7308664989110014043[1] = 0;
   out_7308664989110014043[2] = 0;
   out_7308664989110014043[3] = 0;
   out_7308664989110014043[4] = 0;
   out_7308664989110014043[5] = 0;
   out_7308664989110014043[6] = 0;
   out_7308664989110014043[7] = 0;
   out_7308664989110014043[8] = 0;
   out_7308664989110014043[9] = 1;
   out_7308664989110014043[10] = 0;
   out_7308664989110014043[11] = 0;
   out_7308664989110014043[12] = 0;
   out_7308664989110014043[13] = 0;
   out_7308664989110014043[14] = 0;
   out_7308664989110014043[15] = 0;
   out_7308664989110014043[16] = 0;
   out_7308664989110014043[17] = 0;
   out_7308664989110014043[18] = 1;
   out_7308664989110014043[19] = 0;
   out_7308664989110014043[20] = 0;
   out_7308664989110014043[21] = 0;
   out_7308664989110014043[22] = 0;
   out_7308664989110014043[23] = 0;
   out_7308664989110014043[24] = 0;
   out_7308664989110014043[25] = 0;
   out_7308664989110014043[26] = 0;
   out_7308664989110014043[27] = 1;
   out_7308664989110014043[28] = 0;
   out_7308664989110014043[29] = 0;
   out_7308664989110014043[30] = 0;
   out_7308664989110014043[31] = 0;
   out_7308664989110014043[32] = 0;
   out_7308664989110014043[33] = 0;
   out_7308664989110014043[34] = 0;
   out_7308664989110014043[35] = 0;
   out_7308664989110014043[36] = 1;
   out_7308664989110014043[37] = 0;
   out_7308664989110014043[38] = 0;
   out_7308664989110014043[39] = 0;
   out_7308664989110014043[40] = dt*(stiffness_front*(-state[2] - state[3] + state[7])/(mass*state[1]) + (-stiffness_front - stiffness_rear)*state[5]/(mass*state[4]) + (-center_to_front*stiffness_front + center_to_rear*stiffness_rear)*state[6]/(mass*state[4]));
   out_7308664989110014043[41] = -dt*stiffness_front*(-state[2] - state[3] + state[7])*state[0]/(mass*pow(state[1], 2));
   out_7308664989110014043[42] = -dt*stiffness_front*state[0]/(mass*state[1]);
   out_7308664989110014043[43] = -dt*stiffness_front*state[0]/(mass*state[1]);
   out_7308664989110014043[44] = dt*((-1 - (-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])/(mass*pow(state[4], 2)))*state[6] - (-stiffness_front*state[0] - stiffness_rear*state[0])*state[5]/(mass*pow(state[4], 2)));
   out_7308664989110014043[45] = dt*(-stiffness_front*state[0] - stiffness_rear*state[0])/(mass*state[4]) + 1;
   out_7308664989110014043[46] = dt*(-state[4] + (-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])/(mass*state[4]));
   out_7308664989110014043[47] = dt*stiffness_front*state[0]/(mass*state[1]);
   out_7308664989110014043[48] = dt*(center_to_front*stiffness_front*(-state[2] - state[3] + state[7])/(rotational_inertia*state[1]) + (-center_to_front*stiffness_front + center_to_rear*stiffness_rear)*state[5]/(rotational_inertia*state[4]) + (-pow(center_to_front, 2)*stiffness_front - pow(center_to_rear, 2)*stiffness_rear)*state[6]/(rotational_inertia*state[4]));
   out_7308664989110014043[49] = -center_to_front*dt*stiffness_front*(-state[2] - state[3] + state[7])*state[0]/(rotational_inertia*pow(state[1], 2));
   out_7308664989110014043[50] = -center_to_front*dt*stiffness_front*state[0]/(rotational_inertia*state[1]);
   out_7308664989110014043[51] = -center_to_front*dt*stiffness_front*state[0]/(rotational_inertia*state[1]);
   out_7308664989110014043[52] = dt*(-(-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])*state[5]/(rotational_inertia*pow(state[4], 2)) - (-pow(center_to_front, 2)*stiffness_front*state[0] - pow(center_to_rear, 2)*stiffness_rear*state[0])*state[6]/(rotational_inertia*pow(state[4], 2)));
   out_7308664989110014043[53] = dt*(-center_to_front*stiffness_front*state[0] + center_to_rear*stiffness_rear*state[0])/(rotational_inertia*state[4]);
   out_7308664989110014043[54] = dt*(-pow(center_to_front, 2)*stiffness_front*state[0] - pow(center_to_rear, 2)*stiffness_rear*state[0])/(rotational_inertia*state[4]) + 1;
   out_7308664989110014043[55] = center_to_front*dt*stiffness_front*state[0]/(rotational_inertia*state[1]);
   out_7308664989110014043[56] = 0;
   out_7308664989110014043[57] = 0;
   out_7308664989110014043[58] = 0;
   out_7308664989110014043[59] = 0;
   out_7308664989110014043[60] = 0;
   out_7308664989110014043[61] = 0;
   out_7308664989110014043[62] = 0;
   out_7308664989110014043[63] = 1;
}
void h_25(double *state, double *unused, double *out_6304255038708295138) {
   out_6304255038708295138[0] = state[6];
}
void H_25(double *state, double *unused, double *out_6004005699855046890) {
   out_6004005699855046890[0] = 0;
   out_6004005699855046890[1] = 0;
   out_6004005699855046890[2] = 0;
   out_6004005699855046890[3] = 0;
   out_6004005699855046890[4] = 0;
   out_6004005699855046890[5] = 0;
   out_6004005699855046890[6] = 1;
   out_6004005699855046890[7] = 0;
}
void h_24(double *state, double *unused, double *out_1187527390453608991) {
   out_1187527390453608991[0] = state[4];
   out_1187527390453608991[1] = state[5];
}
void H_24(double *state, double *unused, double *out_8162703101869569629) {
   out_8162703101869569629[0] = 0;
   out_8162703101869569629[1] = 0;
   out_8162703101869569629[2] = 0;
   out_8162703101869569629[3] = 0;
   out_8162703101869569629[4] = 1;
   out_8162703101869569629[5] = 0;
   out_8162703101869569629[6] = 0;
   out_8162703101869569629[7] = 0;
   out_8162703101869569629[8] = 0;
   out_8162703101869569629[9] = 0;
   out_8162703101869569629[10] = 0;
   out_8162703101869569629[11] = 0;
   out_8162703101869569629[12] = 0;
   out_8162703101869569629[13] = 1;
   out_8162703101869569629[14] = 0;
   out_8162703101869569629[15] = 0;
}
void h_30(double *state, double *unused, double *out_5175173870320223984) {
   out_5175173870320223984[0] = state[4];
}
void H_30(double *state, double *unused, double *out_3609893211094136390) {
   out_3609893211094136390[0] = 0;
   out_3609893211094136390[1] = 0;
   out_3609893211094136390[2] = 0;
   out_3609893211094136390[3] = 0;
   out_3609893211094136390[4] = 1;
   out_3609893211094136390[5] = 0;
   out_3609893211094136390[6] = 0;
   out_3609893211094136390[7] = 0;
}
void h_26(double *state, double *unused, double *out_7393284715830612544) {
   out_7393284715830612544[0] = state[7];
}
void H_26(double *state, double *unused, double *out_6738145218915295453) {
   out_6738145218915295453[0] = 0;
   out_6738145218915295453[1] = 0;
   out_6738145218915295453[2] = 0;
   out_6738145218915295453[3] = 0;
   out_6738145218915295453[4] = 0;
   out_6738145218915295453[5] = 0;
   out_6738145218915295453[6] = 0;
   out_6738145218915295453[7] = 1;
}
void h_27(double *state, double *unused, double *out_7140815767340410833) {
   out_7140815767340410833[0] = state[3];
}
void H_27(double *state, double *unused, double *out_4897475198930761702) {
   out_4897475198930761702[0] = 0;
   out_4897475198930761702[1] = 0;
   out_4897475198930761702[2] = 0;
   out_4897475198930761702[3] = 1;
   out_4897475198930761702[4] = 0;
   out_4897475198930761702[5] = 0;
   out_4897475198930761702[6] = 0;
   out_4897475198930761702[7] = 0;
}
void h_29(double *state, double *unused, double *out_8591447159969294000) {
   out_8591447159969294000[0] = state[1];
}
void H_29(double *state, double *unused, double *out_3035334597238600215) {
   out_3035334597238600215[0] = 0;
   out_3035334597238600215[1] = 1;
   out_3035334597238600215[2] = 0;
   out_3035334597238600215[3] = 0;
   out_3035334597238600215[4] = 0;
   out_3035334597238600215[5] = 0;
   out_3035334597238600215[6] = 0;
   out_3035334597238600215[7] = 0;
}
void h_28(double *state, double *unused, double *out_1578785904195055854) {
   out_1578785904195055854[0] = state[5];
   out_1578785904195055854[1] = state[6];
}
void H_28(double *state, double *unused, double *out_1144870623633074763) {
   out_1144870623633074763[0] = 0;
   out_1144870623633074763[1] = 0;
   out_1144870623633074763[2] = 0;
   out_1144870623633074763[3] = 0;
   out_1144870623633074763[4] = 0;
   out_1144870623633074763[5] = 1;
   out_1144870623633074763[6] = 0;
   out_1144870623633074763[7] = 0;
   out_1144870623633074763[8] = 0;
   out_1144870623633074763[9] = 0;
   out_1144870623633074763[10] = 0;
   out_1144870623633074763[11] = 0;
   out_1144870623633074763[12] = 0;
   out_1144870623633074763[13] = 0;
   out_1144870623633074763[14] = 1;
   out_1144870623633074763[15] = 0;
}
}

extern "C"{
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
}

#include <eigen3/Eigen/Dense>
#include <iostream>

typedef Eigen::Matrix<double, DIM, DIM, Eigen::RowMajor> DDM;
typedef Eigen::Matrix<double, EDIM, EDIM, Eigen::RowMajor> EEM;
typedef Eigen::Matrix<double, DIM, EDIM, Eigen::RowMajor> DEM;

void predict(double *in_x, double *in_P, double *in_Q, double dt) {
  typedef Eigen::Matrix<double, MEDIM, MEDIM, Eigen::RowMajor> RRM;

  double nx[DIM] = {0};
  double in_F[EDIM*EDIM] = {0};

  // functions from sympy
  f_fun(in_x, dt, nx);
  F_fun(in_x, dt, in_F);


  EEM F(in_F);
  EEM P(in_P);
  EEM Q(in_Q);

  RRM F_main = F.topLeftCorner(MEDIM, MEDIM);
  P.topLeftCorner(MEDIM, MEDIM) = (F_main * P.topLeftCorner(MEDIM, MEDIM)) * F_main.transpose();
  P.topRightCorner(MEDIM, EDIM - MEDIM) = F_main * P.topRightCorner(MEDIM, EDIM - MEDIM);
  P.bottomLeftCorner(EDIM - MEDIM, MEDIM) = P.bottomLeftCorner(EDIM - MEDIM, MEDIM) * F_main.transpose();

  P = P + dt*Q;

  // copy out state
  memcpy(in_x, nx, DIM * sizeof(double));
  memcpy(in_P, P.data(), EDIM * EDIM * sizeof(double));
}

// note: extra_args dim only correct when null space projecting
// otherwise 1
template <int ZDIM, int EADIM, bool MAHA_TEST>
void update(double *in_x, double *in_P, Hfun h_fun, Hfun H_fun, Hfun Hea_fun, double *in_z, double *in_R, double *in_ea, double MAHA_THRESHOLD) {
  typedef Eigen::Matrix<double, ZDIM, ZDIM, Eigen::RowMajor> ZZM;
  typedef Eigen::Matrix<double, ZDIM, DIM, Eigen::RowMajor> ZDM;
  typedef Eigen::Matrix<double, Eigen::Dynamic, EDIM, Eigen::RowMajor> XEM;
  //typedef Eigen::Matrix<double, EDIM, ZDIM, Eigen::RowMajor> EZM;
  typedef Eigen::Matrix<double, Eigen::Dynamic, 1> X1M;
  typedef Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> XXM;

  double in_hx[ZDIM] = {0};
  double in_H[ZDIM * DIM] = {0};
  double in_H_mod[EDIM * DIM] = {0};
  double delta_x[EDIM] = {0};
  double x_new[DIM] = {0};


  // state x, P
  Eigen::Matrix<double, ZDIM, 1> z(in_z);
  EEM P(in_P);
  ZZM pre_R(in_R);

  // functions from sympy
  h_fun(in_x, in_ea, in_hx);
  H_fun(in_x, in_ea, in_H);
  ZDM pre_H(in_H);

  // get y (y = z - hx)
  Eigen::Matrix<double, ZDIM, 1> pre_y(in_hx); pre_y = z - pre_y;
  X1M y; XXM H; XXM R;
  if (Hea_fun){
    typedef Eigen::Matrix<double, ZDIM, EADIM, Eigen::RowMajor> ZAM;
    double in_Hea[ZDIM * EADIM] = {0};
    Hea_fun(in_x, in_ea, in_Hea);
    ZAM Hea(in_Hea);
    XXM A = Hea.transpose().fullPivLu().kernel();


    y = A.transpose() * pre_y;
    H = A.transpose() * pre_H;
    R = A.transpose() * pre_R * A;
  } else {
    y = pre_y;
    H = pre_H;
    R = pre_R;
  }
  // get modified H
  H_mod_fun(in_x, in_H_mod);
  DEM H_mod(in_H_mod);
  XEM H_err = H * H_mod;

  // Do mahalobis distance test
  if (MAHA_TEST){
    XXM a = (H_err * P * H_err.transpose() + R).inverse();
    double maha_dist = y.transpose() * a * y;
    if (maha_dist > MAHA_THRESHOLD){
      R = 1.0e16 * R;
    }
  }

  // Outlier resilient weighting
  double weight = 1;//(1.5)/(1 + y.squaredNorm()/R.sum());

  // kalman gains and I_KH
  XXM S = ((H_err * P) * H_err.transpose()) + R/weight;
  XEM KT = S.fullPivLu().solve(H_err * P.transpose());
  //EZM K = KT.transpose(); TODO: WHY DOES THIS NOT COMPILE?
  //EZM K = S.fullPivLu().solve(H_err * P.transpose()).transpose();
  //std::cout << "Here is the matrix rot:\n" << K << std::endl;
  EEM I_KH = Eigen::Matrix<double, EDIM, EDIM>::Identity() - (KT.transpose() * H_err);

  // update state by injecting dx
  Eigen::Matrix<double, EDIM, 1> dx(delta_x);
  dx  = (KT.transpose() * y);
  memcpy(delta_x, dx.data(), EDIM * sizeof(double));
  err_fun(in_x, delta_x, x_new);
  Eigen::Matrix<double, DIM, 1> x(x_new);

  // update cov
  P = ((I_KH * P) * I_KH.transpose()) + ((KT.transpose() * R) * KT);

  // copy out state
  memcpy(in_x, x.data(), DIM * sizeof(double));
  memcpy(in_P, P.data(), EDIM * EDIM * sizeof(double));
  memcpy(in_z, y.data(), y.rows() * sizeof(double));
}



extern "C"{

      void update_25(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea) {
        update<1,3,0>(in_x, in_P, h_25, H_25, NULL, in_z, in_R, in_ea, MAHA_THRESH_25);
      }
    
      void update_24(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea) {
        update<2,3,0>(in_x, in_P, h_24, H_24, NULL, in_z, in_R, in_ea, MAHA_THRESH_24);
      }
    
      void update_30(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea) {
        update<1,3,0>(in_x, in_P, h_30, H_30, NULL, in_z, in_R, in_ea, MAHA_THRESH_30);
      }
    
      void update_26(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea) {
        update<1,3,0>(in_x, in_P, h_26, H_26, NULL, in_z, in_R, in_ea, MAHA_THRESH_26);
      }
    
      void update_27(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea) {
        update<1,3,0>(in_x, in_P, h_27, H_27, NULL, in_z, in_R, in_ea, MAHA_THRESH_27);
      }
    
      void update_29(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea) {
        update<1,3,0>(in_x, in_P, h_29, H_29, NULL, in_z, in_R, in_ea, MAHA_THRESH_29);
      }
    
      void update_28(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea) {
        update<2,3,0>(in_x, in_P, h_28, H_28, NULL, in_z, in_R, in_ea, MAHA_THRESH_28);
      }
    
}
