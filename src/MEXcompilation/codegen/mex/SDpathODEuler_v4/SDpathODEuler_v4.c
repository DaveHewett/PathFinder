/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * SDpathODEuler_v4.c
 *
 * Code generation for function 'SDpathODEuler_v4'
 *
 */

/* Include files */
#include "SDpathODEuler_v4.h"
#include "SDpathODEuler_v4_data.h"
#include "SDpathODEuler_v4_emxutil.h"
#include "SDpathODEuler_v4_types.h"
#include "abs.h"
#include "eml_int_forloop_overflow_check.h"
#include "indexShapeCheck.h"
#include "mod.h"
#include "polyval.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Type Definitions */
#ifndef typedef_captured_var
#define typedef_captured_var
typedef struct {
  real_T contents;
} captured_var;
#endif /* typedef_captured_var */

#ifndef typedef_b_captured_var
#define typedef_b_captured_var
typedef struct {
  creal_T contents;
} b_captured_var;
#endif /* typedef_b_captured_var */

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    93,                 /* lineNo */
    "SDpathODEuler_v4", /* fcnName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pathName
                                                                        */
};

static emlrtRSInfo b_emlrtRSI = {
    92,                 /* lineNo */
    "SDpathODEuler_v4", /* fcnName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pathName
                                                                        */
};

static emlrtRSInfo c_emlrtRSI = {
    75,                 /* lineNo */
    "SDpathODEuler_v4", /* fcnName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pathName
                                                                        */
};

static emlrtRSInfo d_emlrtRSI = {
    72,                 /* lineNo */
    "SDpathODEuler_v4", /* fcnName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pathName
                                                                        */
};

static emlrtRSInfo e_emlrtRSI = {
    66,                 /* lineNo */
    "SDpathODEuler_v4", /* fcnName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pathName
                                                                        */
};

static emlrtRSInfo f_emlrtRSI = {
    58,                 /* lineNo */
    "SDpathODEuler_v4", /* fcnName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pathName
                                                                        */
};

static emlrtRSInfo g_emlrtRSI = {
    55,                 /* lineNo */
    "SDpathODEuler_v4", /* fcnName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pathName
                                                                        */
};

static emlrtRSInfo h_emlrtRSI = {
    48,                 /* lineNo */
    "SDpathODEuler_v4", /* fcnName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pathName
                                                                        */
};

static emlrtRSInfo i_emlrtRSI = {
    29,                 /* lineNo */
    "SDpathODEuler_v4", /* fcnName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pathName
                                                                        */
};

static emlrtRSInfo j_emlrtRSI = {
    28,                 /* lineNo */
    "SDpathODEuler_v4", /* fcnName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pathName
                                                                        */
};

static emlrtRSInfo k_emlrtRSI = {
    9,                  /* lineNo */
    "SDpathODEuler_v4", /* fcnName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pathName
                                                                        */
};

static emlrtRSInfo l_emlrtRSI = {
    7,                                                           /* lineNo */
    "ref/ref",                                                   /* fcnName */
    "/home/andrew/matlab/toolbox/eml/eml/+coder/+internal/ref.m" /* pathName */
};

static emlrtRSInfo p_emlrtRSI = {
    15,                                                        /* lineNo */
    "min",                                                     /* fcnName */
    "/home/andrew/matlab/toolbox/eml/lib/matlab/datafun/min.m" /* pathName */
};

static emlrtRSInfo q_emlrtRSI = {
    46,         /* lineNo */
    "minOrMax", /* fcnName */
    "/home/andrew/matlab/toolbox/eml/eml/+coder/+internal/minOrMax.m" /* pathName
                                                                       */
};

static emlrtRSInfo r_emlrtRSI = {
    92,        /* lineNo */
    "minimum", /* fcnName */
    "/home/andrew/matlab/toolbox/eml/eml/+coder/+internal/minOrMax.m" /* pathName
                                                                       */
};

static emlrtRSInfo s_emlrtRSI = {
    204,             /* lineNo */
    "unaryMinOrMax", /* fcnName */
    "/home/andrew/matlab/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m" /* pathName
                                                                            */
};

static emlrtRSInfo t_emlrtRSI = {
    893,                    /* lineNo */
    "minRealVectorOmitNaN", /* fcnName */
    "/home/andrew/matlab/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m" /* pathName
                                                                            */
};

static emlrtRSInfo u_emlrtRSI = {
    62,                      /* lineNo */
    "vectorMinOrMaxInPlace", /* fcnName */
    "/home/andrew/matlab/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo v_emlrtRSI = {
    54,                      /* lineNo */
    "vectorMinOrMaxInPlace", /* fcnName */
    "/home/andrew/matlab/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo w_emlrtRSI = {
    103,         /* lineNo */
    "findFirst", /* fcnName */
    "/home/andrew/matlab/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo x_emlrtRSI = {
    120,                        /* lineNo */
    "minOrMaxRealVectorKernel", /* fcnName */
    "/home/andrew/matlab/toolbox/eml/eml/+coder/+internal/"
    "vectorMinOrMaxInPlace.m" /* pathName */
};

static emlrtRSInfo y_emlrtRSI = {
    103,                           /* lineNo */
    "SDpathODEuler_v4/halt_euler", /* fcnName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pathName
                                                                        */
};

static emlrtRSInfo ab_emlrtRSI = {
    107,                           /* lineNo */
    "SDpathODEuler_v4/halt_euler", /* fcnName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pathName
                                                                        */
};

static emlrtRSInfo bb_emlrtRSI = {
    12,                  /* lineNo */
    "beyondNoReturn_v2", /* fcnName */
    "/home/andrew/OneDrive/PathFinder/src/contours/beyondNoReturn_v2.m" /* pathName
                                                                         */
};

static emlrtRSInfo cb_emlrtRSI = {
    16,                  /* lineNo */
    "beyondNoReturn_v2", /* fcnName */
    "/home/andrew/OneDrive/PathFinder/src/contours/beyondNoReturn_v2.m" /* pathName
                                                                         */
};

static emlrtRSInfo db_emlrtRSI = {
    21,                  /* lineNo */
    "beyondNoReturn_v2", /* fcnName */
    "/home/andrew/OneDrive/PathFinder/src/contours/beyondNoReturn_v2.m" /* pathName
                                                                         */
};

static emlrtRSInfo eb_emlrtRSI = {
    23,                  /* lineNo */
    "beyondNoReturn_v2", /* fcnName */
    "/home/andrew/OneDrive/PathFinder/src/contours/beyondNoReturn_v2.m" /* pathName
                                                                         */
};

static emlrtRSInfo fb_emlrtRSI = {
    9,                                                         /* lineNo */
    "angle",                                                   /* fcnName */
    "/home/andrew/matlab/toolbox/eml/lib/matlab/elfun/angle.m" /* pathName */
};

static emlrtRSInfo gb_emlrtRSI = {
    10,                                                      /* lineNo */
    "exp",                                                   /* fcnName */
    "/home/andrew/matlab/toolbox/eml/lib/matlab/elfun/exp.m" /* pathName */
};

static emlrtRSInfo hb_emlrtRSI = {
    33,                           /* lineNo */
    "applyScalarFunctionInPlace", /* fcnName */
    "/home/andrew/matlab/toolbox/eml/eml/+coder/+internal/"
    "applyScalarFunctionInPlace.m" /* pathName */
};

static emlrtRSInfo ib_emlrtRSI = {
    17,                                                        /* lineNo */
    "min",                                                     /* fcnName */
    "/home/andrew/matlab/toolbox/eml/lib/matlab/datafun/min.m" /* pathName */
};

static emlrtRSInfo jb_emlrtRSI = {
    40,         /* lineNo */
    "minOrMax", /* fcnName */
    "/home/andrew/matlab/toolbox/eml/eml/+coder/+internal/minOrMax.m" /* pathName
                                                                       */
};

static emlrtRSInfo kb_emlrtRSI = {
    90,        /* lineNo */
    "minimum", /* fcnName */
    "/home/andrew/matlab/toolbox/eml/eml/+coder/+internal/minOrMax.m" /* pathName
                                                                       */
};

static emlrtRSInfo lb_emlrtRSI = {
    169,             /* lineNo */
    "unaryMinOrMax", /* fcnName */
    "/home/andrew/matlab/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m" /* pathName
                                                                            */
};

static emlrtRSInfo mb_emlrtRSI = {
    44,                                                          /* lineNo */
    "mpower",                                                    /* fcnName */
    "/home/andrew/matlab/toolbox/eml/lib/matlab/matfun/mpower.m" /* pathName */
};

static emlrtRSInfo nb_emlrtRSI = {
    71,                                                      /* lineNo */
    "power",                                                 /* fcnName */
    "/home/andrew/matlab/toolbox/eml/lib/matlab/ops/power.m" /* pathName */
};

static emlrtBCInfo emlrtBCI = {
    -1,                 /* iFirst */
    -1,                 /* iLast */
    93,                 /* lineNo */
    25,                 /* colNo */
    "h_log",            /* aName */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,                 /* iFirst */
    -1,                 /* iLast */
    93,                 /* lineNo */
    23,                 /* colNo */
    "h_log",            /* aName */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,                 /* iFirst */
    -1,                 /* iLast */
    92,                 /* lineNo */
    25,                 /* colNo */
    "p_log",            /* aName */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,                 /* iFirst */
    -1,                 /* iLast */
    92,                 /* lineNo */
    23,                 /* colNo */
    "p_log",            /* aName */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtECInfo emlrtECI = {
    -1,                 /* nDims */
    89,                 /* lineNo */
    13,                 /* colNo */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pName
                                                                        */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,                 /* iFirst */
    -1,                 /* iLast */
    89,                 /* lineNo */
    21,                 /* colNo */
    "h_log",            /* aName */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,                 /* iFirst */
    -1,                 /* iLast */
    89,                 /* lineNo */
    19,                 /* colNo */
    "h_log",            /* aName */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtECInfo b_emlrtECI = {
    -1,                 /* nDims */
    88,                 /* lineNo */
    13,                 /* colNo */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pName
                                                                        */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,                 /* iFirst */
    -1,                 /* iLast */
    88,                 /* lineNo */
    21,                 /* colNo */
    "p_log",            /* aName */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,                 /* iFirst */
    -1,                 /* iLast */
    88,                 /* lineNo */
    19,                 /* colNo */
    "p_log",            /* aName */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,                 /* iFirst */
    -1,                 /* iLast */
    36,                 /* lineNo */
    11,                 /* colNo */
    "h_log",            /* aName */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,                 /* iFirst */
    -1,                 /* iLast */
    35,                 /* lineNo */
    11,                 /* colNo */
    "p_log",            /* aName */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtECInfo c_emlrtECI = {
    2,                  /* nDims */
    29,                 /* lineNo */
    17,                 /* colNo */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pName
                                                                        */
};

static emlrtBCInfo k_emlrtBCI = {
    -1,                 /* iFirst */
    -1,                 /* iLast */
    29,                 /* lineNo */
    29,                 /* colNo */
    "dgCoeffs",         /* aName */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    -1,                 /* iFirst */
    -1,                 /* iLast */
    29,                 /* lineNo */
    26,                 /* colNo */
    "dgCoeffs",         /* aName */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtECInfo d_emlrtECI = {
    2,                  /* nDims */
    28,                 /* lineNo */
    16,                 /* colNo */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pName
                                                                        */
};

static emlrtBCInfo m_emlrtBCI = {
    -1,                 /* iFirst */
    -1,                 /* iLast */
    28,                 /* lineNo */
    27,                 /* colNo */
    "gCoeffs",          /* aName */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = {
    -1,                 /* iFirst */
    -1,                 /* iLast */
    28,                 /* lineNo */
    24,                 /* colNo */
    "gCoeffs",          /* aName */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtRTEInfo b_emlrtRTEI = {
    130,             /* lineNo */
    27,              /* colNo */
    "unaryMinOrMax", /* fName */
    "/home/andrew/matlab/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m" /* pName
                                                                            */
};

static emlrtBCInfo o_emlrtBCI = {
    -1,                 /* iFirst */
    -1,                 /* iLast */
    19,                 /* lineNo */
    24,                 /* colNo */
    "cover_radii",      /* aName */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = {
    -1,                 /* iFirst */
    -1,                 /* iLast */
    20,                 /* lineNo */
    17,                 /* colNo */
    "SPs",              /* aName */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtDCInfo emlrtDCI = {
    33,                 /* lineNo */
    5,                  /* colNo */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m", /* pName
                                                                         */
    1 /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = {
    33,                 /* lineNo */
    5,                  /* colNo */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m", /* pName
                                                                         */
    4 /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = {
    34,                 /* lineNo */
    5,                  /* colNo */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m", /* pName
                                                                         */
    1 /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = {
    34,                 /* lineNo */
    5,                  /* colNo */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m", /* pName
                                                                         */
    4 /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = {
    -1,                 /* iFirst */
    -1,                 /* iLast */
    54,                 /* lineNo */
    19,                 /* colNo */
    "p_log",            /* aName */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = {
    -1,                 /* iFirst */
    -1,                 /* iLast */
    63,                 /* lineNo */
    15,                 /* colNo */
    "p_log",            /* aName */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = {
    -1,                 /* iFirst */
    -1,                 /* iLast */
    64,                 /* lineNo */
    15,                 /* colNo */
    "h_log",            /* aName */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = {
    86,                 /* lineNo */
    13,                 /* colNo */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m", /* pName
                                                                         */
    1 /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = {
    86,                 /* lineNo */
    13,                 /* colNo */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m", /* pName
                                                                         */
    4 /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = {
    87,                 /* lineNo */
    13,                 /* colNo */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m", /* pName
                                                                         */
    1 /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = {
    87,                 /* lineNo */
    13,                 /* colNo */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m", /* pName
                                                                         */
    4 /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = {
    -1,                  /* iFirst */
    -1,                  /* iLast */
    13,                  /* lineNo */
    25,                  /* colNo */
    "V",                 /* aName */
    "beyondNoReturn_v2", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/beyondNoReturn_v2.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = {
    -1,                  /* iFirst */
    -1,                  /* iLast */
    21,                  /* lineNo */
    36,                  /* colNo */
    "g_coeffs",          /* aName */
    "beyondNoReturn_v2", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/beyondNoReturn_v2.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = {
    -1,                                                        /* iFirst */
    -1,                                                        /* iLast */
    6,                                                         /* lineNo */
    32,                                                        /* colNo */
    "cover_centres",                                           /* aName */
    "inAball",                                                 /* fName */
    "/home/andrew/OneDrive/PathFinder/src/topology/inAball.m", /* pName */
    0                                                          /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = {
    -1,                                                        /* iFirst */
    -1,                                                        /* iLast */
    6,                                                         /* lineNo */
    52,                                                        /* colNo */
    "cover_radii",                                             /* aName */
    "inAball",                                                 /* fName */
    "/home/andrew/OneDrive/PathFinder/src/topology/inAball.m", /* pName */
    0                                                          /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = {
    -1,                  /* iFirst */
    -1,                  /* iLast */
    23,                  /* lineNo */
    40,                  /* colNo */
    "g_coeffs",          /* aName */
    "beyondNoReturn_v2", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/beyondNoReturn_v2.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtRTEInfo e_emlrtRTEI = {
    15,                                                          /* lineNo */
    17,                                                          /* colNo */
    "ref",                                                       /* fName */
    "/home/andrew/matlab/toolbox/eml/eml/+coder/+internal/ref.m" /* pName */
};

static emlrtRTEInfo f_emlrtRTEI = {
    13,                 /* lineNo */
    9,                  /* colNo */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pName
                                                                        */
};

static emlrtRTEInfo g_emlrtRTEI = {
    14,                 /* lineNo */
    9,                  /* colNo */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pName
                                                                        */
};

static emlrtRTEInfo h_emlrtRTEI = {
    28,                 /* lineNo */
    37,                 /* colNo */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pName
                                                                        */
};

static emlrtRTEInfo i_emlrtRTEI = {
    28,                 /* lineNo */
    5,                  /* colNo */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pName
                                                                        */
};

static emlrtRTEInfo j_emlrtRTEI = {
    29,                 /* lineNo */
    39,                 /* colNo */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pName
                                                                        */
};

static emlrtRTEInfo k_emlrtRTEI = {
    29,                 /* lineNo */
    5,                  /* colNo */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pName
                                                                        */
};

static emlrtRTEInfo l_emlrtRTEI = {
    33,                 /* lineNo */
    5,                  /* colNo */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pName
                                                                        */
};

static emlrtRTEInfo m_emlrtRTEI = {
    34,                 /* lineNo */
    5,                  /* colNo */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pName
                                                                        */
};

static emlrtRTEInfo n_emlrtRTEI = {
    92,                 /* lineNo */
    5,                  /* colNo */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pName
                                                                        */
};

static emlrtRTEInfo o_emlrtRTEI = {
    93,                 /* lineNo */
    5,                  /* colNo */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pName
                                                                        */
};

static emlrtRTEInfo p_emlrtRTEI = {
    48,                 /* lineNo */
    70,                 /* colNo */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pName
                                                                        */
};

static emlrtRTEInfo q_emlrtRTEI = {
    84,                 /* lineNo */
    13,                 /* colNo */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pName
                                                                        */
};

static emlrtRTEInfo r_emlrtRTEI = {
    85,                 /* lineNo */
    13,                 /* colNo */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pName
                                                                        */
};

static emlrtRTEInfo s_emlrtRTEI = {
    86,                 /* lineNo */
    13,                 /* colNo */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pName
                                                                        */
};

static emlrtRTEInfo t_emlrtRTEI = {
    87,                 /* lineNo */
    13,                 /* colNo */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pName
                                                                        */
};

static emlrtRTEInfo u_emlrtRTEI = {
    2,                  /* lineNo */
    5,                  /* colNo */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pName
                                                                        */
};

static emlrtRTEInfo w_emlrtRTEI = {
    97,                 /* lineNo */
    23,                 /* colNo */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pName
                                                                        */
};

static emlrtRTEInfo x_emlrtRTEI = {
    98,                 /* lineNo */
    24,                 /* colNo */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pName
                                                                        */
};

static emlrtRTEInfo y_emlrtRTEI = {
    103,                /* lineNo */
    32,                 /* colNo */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pName
                                                                        */
};

static emlrtRTEInfo ab_emlrtRTEI = {
    103,                /* lineNo */
    37,                 /* colNo */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pName
                                                                        */
};

static emlrtRTEInfo bb_emlrtRTEI = {
    107,                /* lineNo */
    51,                 /* colNo */
    "SDpathODEuler_v4", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/SDpathODEuler_v4.m" /* pName
                                                                        */
};

static emlrtRTEInfo cb_emlrtRTEI = {
    76,                  /* lineNo */
    9,                   /* colNo */
    "eml_mtimes_helper", /* fName */
    "/home/andrew/matlab/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" /* pName
                                                                          */
};

static emlrtRTEInfo db_emlrtRTEI = {
    12,                  /* lineNo */
    35,                  /* colNo */
    "beyondNoReturn_v2", /* fName */
    "/home/andrew/OneDrive/PathFinder/src/contours/beyondNoReturn_v2.m" /* pName
                                                                         */
};

static emlrtRSInfo pb_emlrtRSI = {
    102,      /* lineNo */
    "intmod", /* fcnName */
    "/home/andrew/matlab/toolbox/eml/eml/+coder/+internal/+scalar/mod.m" /* pathName
                                                                          */
};

/* Function Declarations */
static void b_binary_expand_op(const emlrtStack *sp, c_captured_var *dgCoeffs,
                               const emxArray_creal_T *gCoeffs, int32_T i1,
                               const emxArray_real_T *r1);

static void binary_expand_op(const emlrtStack *sp, emxArray_creal_T *ddgCoeffs,
                             const c_captured_var *dgCoeffs, int32_T i1,
                             const emxArray_real_T *r1);

static int64_T div_s64_floor(const emlrtStack *sp, int64_T numerator,
                             int64_T denominator);

static creal_T get_Newton_step(const emlrtStack *sp, b_captured_var *g_h,
                               const c_captured_var *gCoeffs,
                               const b_captured_var *h, b_captured_var *dg_h,
                               const c_captured_var *dgCoeffs,
                               const b_captured_var *g_se,
                               const captured_var *p);

static void halt_euler(const emlrtStack *sp, const b_captured_var *h,
                       const c_captured_var *SPs,
                       const d_captured_var *cover_radii,
                       const c_captured_var *valleys,
                       const c_captured_var *gCoeffs,
                       const captured_var *r_star, boolean_T *inball_yn,
                       boolean_T *in_no_return_yn);

/* Function Definitions */
static void b_binary_expand_op(const emlrtStack *sp, c_captured_var *dgCoeffs,
                               const emxArray_creal_T *gCoeffs, int32_T i1,
                               const emxArray_real_T *r1)
{
  const creal_T *gCoeffs_data;
  const real_T *r;
  real_T d;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  r = r1->data;
  gCoeffs_data = gCoeffs->data;
  i = dgCoeffs->contents->size[0] * dgCoeffs->contents->size[1];
  dgCoeffs->contents->size[0] = 1;
  if (r1->size[1] == 1) {
    dgCoeffs->contents->size[1] = i1 + 1;
  } else {
    dgCoeffs->contents->size[1] = r1->size[1];
  }
  emxEnsureCapacity_creal_T(sp, dgCoeffs->contents, i, &i_emlrtRTEI);
  stride_0_1 = (i1 + 1 != 1);
  stride_1_1 = (r1->size[1] != 1);
  if (r1->size[1] == 1) {
    loop_ub = i1 + 1;
  } else {
    loop_ub = r1->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    d = r[i * stride_1_1];
    dgCoeffs->contents->data[i].re = d * gCoeffs_data[i * stride_0_1].re;
    dgCoeffs->contents->data[i].im = d * gCoeffs_data[i * stride_0_1].im;
  }
}

static void binary_expand_op(const emlrtStack *sp, emxArray_creal_T *ddgCoeffs,
                             const c_captured_var *dgCoeffs, int32_T i1,
                             const emxArray_real_T *r1)
{
  creal_T *ddgCoeffs_data;
  const real_T *r;
  real_T d;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  r = r1->data;
  i = ddgCoeffs->size[0] * ddgCoeffs->size[1];
  ddgCoeffs->size[0] = 1;
  if (r1->size[1] == 1) {
    ddgCoeffs->size[1] = i1 + 1;
  } else {
    ddgCoeffs->size[1] = r1->size[1];
  }
  emxEnsureCapacity_creal_T(sp, ddgCoeffs, i, &k_emlrtRTEI);
  ddgCoeffs_data = ddgCoeffs->data;
  stride_0_1 = (i1 + 1 != 1);
  stride_1_1 = (r1->size[1] != 1);
  if (r1->size[1] == 1) {
    loop_ub = i1 + 1;
  } else {
    loop_ub = r1->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    d = r[i * stride_1_1];
    ddgCoeffs_data[i].re = d * dgCoeffs->contents->data[i * stride_0_1].re;
    ddgCoeffs_data[i].im = d * dgCoeffs->contents->data[i * stride_0_1].im;
  }
}

static int64_T div_s64_floor(const emlrtStack *sp, int64_T numerator,
                             int64_T denominator)
{
  int64_T quotient;
  uint64_T absDenominator;
  uint64_T absNumerator;
  uint64_T tempAbsQuotient;
  boolean_T quotientNeedsNegation;
  if (denominator == 0L) {
    emlrtDivisionByZeroErrorR2012b(NULL, (emlrtCTX)sp);
  } else {
    if (numerator < 0L) {
      absNumerator = ~(uint64_T)numerator + 1UL;
    } else {
      absNumerator = (uint64_T)numerator;
    }
    if (denominator < 0L) {
      absDenominator = ~(uint64_T)denominator + 1UL;
    } else {
      absDenominator = (uint64_T)denominator;
    }
    quotientNeedsNegation = ((numerator < 0L) != (denominator < 0L));
    tempAbsQuotient = absNumerator / absDenominator;
    if (quotientNeedsNegation) {
      absNumerator %= absDenominator;
      if (absNumerator > 0UL) {
        tempAbsQuotient++;
      }
      quotient = -(int64_T)tempAbsQuotient;
    } else {
      quotient = (int64_T)tempAbsQuotient;
    }
  }
  return quotient;
}

static creal_T get_Newton_step(const emlrtStack *sp, b_captured_var *g_h,
                               const c_captured_var *gCoeffs,
                               const b_captured_var *h, b_captured_var *dg_h,
                               const c_captured_var *dgCoeffs,
                               const b_captured_var *g_se,
                               const captured_var *p)
{
  emxArray_creal_T *b_p;
  creal_T step;
  creal_T *p_data;
  real_T ai;
  real_T ar;
  real_T im;
  real_T re;
  real_T x_im_tmp;
  real_T x_re;
  real_T x_re_tmp;
  int32_T i;
  int32_T loop_ub;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_creal_T(sp, &b_p, 2, &w_emlrtRTEI);
  /*     %% indended functions */
  i = b_p->size[0] * b_p->size[1];
  b_p->size[0] = 1;
  b_p->size[1] = gCoeffs->contents->size[1];
  emxEnsureCapacity_creal_T(sp, b_p, i, &w_emlrtRTEI);
  p_data = b_p->data;
  loop_ub = gCoeffs->contents->size[1];
  for (i = 0; i < loop_ub; i++) {
    p_data[i] = gCoeffs->contents->data[i];
  }
  x_re_tmp = h->contents.re;
  x_im_tmp = h->contents.im;
  if (b_p->size[1] != 0) {
    re = p_data[0].re;
    im = p_data[0].im;
    i = b_p->size[1];
    for (loop_ub = 0; loop_ub <= i - 2; loop_ub++) {
      x_re = x_re_tmp * re - x_im_tmp * im;
      im = x_re_tmp * im + x_im_tmp * re;
      re = x_re + p_data[loop_ub + 1].re;
      im += p_data[loop_ub + 1].im;
    }
  }
  g_h->contents.re = re;
  g_h->contents.im = im;
  i = b_p->size[0] * b_p->size[1];
  b_p->size[0] = 1;
  b_p->size[1] = dgCoeffs->contents->size[1];
  emxEnsureCapacity_creal_T(sp, b_p, i, &x_emlrtRTEI);
  p_data = b_p->data;
  loop_ub = dgCoeffs->contents->size[1];
  for (i = 0; i < loop_ub; i++) {
    p_data[i] = dgCoeffs->contents->data[i];
  }
  if (b_p->size[1] != 0) {
    re = p_data[0].re;
    im = p_data[0].im;
    i = b_p->size[1];
    for (loop_ub = 0; loop_ub <= i - 2; loop_ub++) {
      x_re = x_re_tmp * re - x_im_tmp * im;
      im = x_re_tmp * im + x_im_tmp * re;
      re = x_re + p_data[loop_ub + 1].re;
      im += p_data[loop_ub + 1].im;
    }
  }
  emxFree_creal_T(sp, &b_p);
  dg_h->contents.re = re;
  dg_h->contents.im = im;
  ar = (g_h->contents.re - g_se->contents.re) - 0.0 * p->contents;
  ai = (g_h->contents.im - g_se->contents.im) - p->contents;
  x_im_tmp = dg_h->contents.re;
  re = dg_h->contents.im;
  if (re == 0.0) {
    if (ai == 0.0) {
      step.re = ar / x_im_tmp;
      step.im = 0.0;
    } else if (ar == 0.0) {
      step.re = 0.0;
      step.im = ai / x_im_tmp;
    } else {
      step.re = ar / x_im_tmp;
      step.im = ai / x_im_tmp;
    }
  } else if (x_im_tmp == 0.0) {
    if (ar == 0.0) {
      step.re = ai / re;
      step.im = 0.0;
    } else if (ai == 0.0) {
      step.re = 0.0;
      step.im = -(ar / re);
    } else {
      step.re = ai / re;
      step.im = -(ar / re);
    }
  } else {
    x_re = muDoubleScalarAbs(x_im_tmp);
    im = muDoubleScalarAbs(re);
    if (x_re > im) {
      x_re_tmp = re / x_im_tmp;
      im = x_im_tmp + x_re_tmp * re;
      step.re = (ar + x_re_tmp * ai) / im;
      step.im = (ai - x_re_tmp * ar) / im;
    } else if (im == x_re) {
      if (x_im_tmp > 0.0) {
        x_re_tmp = 0.5;
      } else {
        x_re_tmp = -0.5;
      }
      if (re > 0.0) {
        im = 0.5;
      } else {
        im = -0.5;
      }
      step.re = (ar * x_re_tmp + ai * im) / x_re;
      step.im = (ai * x_re_tmp - ar * im) / x_re;
    } else {
      x_re_tmp = x_im_tmp / re;
      im = re + x_re_tmp * x_im_tmp;
      step.re = (x_re_tmp * ar + ai) / im;
      step.im = (x_re_tmp * ai - ar) / im;
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return step;
}

static void halt_euler(const emlrtStack *sp, const b_captured_var *h,
                       const c_captured_var *SPs,
                       const d_captured_var *cover_radii,
                       const c_captured_var *valleys,
                       const c_captured_var *gCoeffs,
                       const captured_var *r_star, boolean_T *inball_yn,
                       boolean_T *in_no_return_yn)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  emxArray_creal_T *cover_centres;
  emxArray_creal_T *y;
  emxArray_real_T *b_cover_radii;
  creal_T *cover_centres_data;
  creal_T *y_data;
  real_T varargin_1[3];
  real_T R;
  real_T r;
  real_T theta_diff;
  real_T x_re_tmp;
  real_T *cover_radii_data;
  int32_T a;
  int32_T idx;
  int32_T k;
  int32_T nx;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_creal_T(sp, &cover_centres, 1, &y_emlrtRTEI);
  st.site = &y_emlrtRSI;
  theta_diff = h->contents.re;
  r = h->contents.im;
  k = cover_centres->size[0];
  cover_centres->size[0] = SPs->contents->size[0];
  emxEnsureCapacity_creal_T(&st, cover_centres, k, &y_emlrtRTEI);
  cover_centres_data = cover_centres->data;
  nx = SPs->contents->size[0];
  for (k = 0; k < nx; k++) {
    cover_centres_data[k] = SPs->contents->data[k];
  }
  emxInit_real_T(&st, &b_cover_radii, 1, &ab_emlrtRTEI);
  k = b_cover_radii->size[0];
  b_cover_radii->size[0] = cover_radii->contents->size[0];
  emxEnsureCapacity_real_T(&st, b_cover_radii, k, &ab_emlrtRTEI);
  cover_radii_data = b_cover_radii->data;
  nx = cover_radii->contents->size[0];
  for (k = 0; k < nx; k++) {
    cover_radii_data[k] = cover_radii->contents->data[k];
  }
  /* returns 1 if SD path is in a ball, 0 otherwise */
  *inball_yn = false;
  nx = 1;
  exitg1 = false;
  while ((!exitg1) && (nx - 1 <= cover_centres->size[0] - 1)) {
    if ((nx < 1) || (nx > cover_centres->size[0])) {
      emlrtDynamicBoundsCheckR2012b(nx, 1, cover_centres->size[0], &v_emlrtBCI,
                                    &st);
    }
    if (nx > cover_centres->size[0]) {
      emlrtDynamicBoundsCheckR2012b(nx, 1, cover_centres->size[0], &v_emlrtBCI,
                                    &st);
    }
    if (nx > b_cover_radii->size[0]) {
      emlrtDynamicBoundsCheckR2012b(nx, 1, b_cover_radii->size[0], &w_emlrtBCI,
                                    &st);
    }
    if (muDoubleScalarHypot(theta_diff - cover_centres_data[nx - 1].re,
                            r - cover_centres_data[nx - 1].im) <
        cover_radii_data[nx - 1]) {
      *inball_yn = true;
      exitg1 = true;
    } else {
      nx++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }
  }
  if (*inball_yn) {
    *in_no_return_yn = false;
  } else {
    st.site = &ab_emlrtRSI;
    k = cover_centres->size[0];
    cover_centres->size[0] = valleys->contents->size[0];
    emxEnsureCapacity_creal_T(&st, cover_centres, k, &bb_emlrtRTEI);
    cover_centres_data = cover_centres->data;
    nx = valleys->contents->size[0];
    for (k = 0; k < nx; k++) {
      cover_centres_data[k] = valleys->contents->data[k];
    }
    /* function corresponding to an event which would halt ODE solve, because SD
     */
    /* path is at 'point of no return'. */
    /*  the 'no return test' */
    *in_no_return_yn = false;
    R = muDoubleScalarHypot(theta_diff, r);
    if (R > r_star->contents) {
      emxInit_creal_T(&st, &y, 1, &db_emlrtRTEI);
      /*  first test, based on length of z */
      /*  now check that path is sufficiently close to monomial SD path */
      b_st.site = &bb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      nx = cover_centres->size[0];
      k = b_cover_radii->size[0];
      b_cover_radii->size[0] = cover_centres->size[0];
      emxEnsureCapacity_real_T(&c_st, b_cover_radii, k, &v_emlrtRTEI);
      cover_radii_data = b_cover_radii->data;
      d_st.site = &o_emlrtRSI;
      if ((1 <= cover_centres->size[0]) &&
          (cover_centres->size[0] > 2147483646)) {
        e_st.site = &m_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }
      for (k = 0; k < nx; k++) {
        cover_radii_data[k] = muDoubleScalarAtan2(cover_centres_data[k].im,
                                                  cover_centres_data[k].re);
      }
      k = y->size[0];
      y->size[0] = b_cover_radii->size[0];
      emxEnsureCapacity_creal_T(&st, y, k, &cb_emlrtRTEI);
      y_data = y->data;
      nx = b_cover_radii->size[0];
      for (k = 0; k < nx; k++) {
        y_data[k].re = cover_radii_data[k] * 0.0;
        y_data[k].im = cover_radii_data[k];
      }
      x_re_tmp = muDoubleScalarAtan2(r, theta_diff);
      theta_diff = x_re_tmp * 0.0;
      b_st.site = &bb_emlrtRSI;
      c_st.site = &bb_emlrtRSI;
      d_st.site = &gb_emlrtRSI;
      nx = y->size[0];
      e_st.site = &hb_emlrtRSI;
      if ((1 <= y->size[0]) && (y->size[0] > 2147483646)) {
        f_st.site = &m_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }
      for (k = 0; k < nx; k++) {
        if (y_data[k].im == 0.0) {
          y_data[k].re = muDoubleScalarExp(y_data[k].re);
          y_data[k].im = 0.0;
        } else if (muDoubleScalarIsInf(y_data[k].im) &&
                   muDoubleScalarIsInf(y_data[k].re) && (y_data[k].re < 0.0)) {
          y_data[k].re = 0.0;
          y_data[k].im = 0.0;
        } else {
          r = muDoubleScalarExp(y_data[k].re / 2.0);
          y_data[k].re = r * (r * muDoubleScalarCos(y_data[k].im));
          y_data[k].im = r * (r * muDoubleScalarSin(y_data[k].im));
        }
      }
      if (x_re_tmp == 0.0) {
        theta_diff = muDoubleScalarExp(theta_diff);
        r = 0.0;
      } else {
        r = muDoubleScalarExp(theta_diff / 2.0);
        theta_diff = r * (r * muDoubleScalarCos(x_re_tmp));
        r *= r * muDoubleScalarSin(x_re_tmp);
      }
      nx = y->size[0];
      for (k = 0; k < nx; k++) {
        y_data[k].re -= theta_diff;
        y_data[k].im -= r;
      }
      c_st.site = &bb_emlrtRSI;
      b_abs(&c_st, y, b_cover_radii);
      cover_radii_data = b_cover_radii->data;
      c_st.site = &ib_emlrtRSI;
      d_st.site = &jb_emlrtRSI;
      e_st.site = &kb_emlrtRSI;
      emxFree_creal_T(&e_st, &y);
      if (b_cover_radii->size[0] < 1) {
        emlrtErrorWithMessageIdR2018a(
            &e_st, &b_emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
            "Coder:toolbox:eml_min_or_max_varDimZero", 0);
      }
      f_st.site = &lb_emlrtRSI;
      nx = b_cover_radii->size[0];
      if (b_cover_radii->size[0] <= 2) {
        if (b_cover_radii->size[0] == 1) {
          idx = 1;
        } else if ((cover_radii_data[0] > cover_radii_data[1]) ||
                   (muDoubleScalarIsNaN(cover_radii_data[0]) &&
                    (!muDoubleScalarIsNaN(cover_radii_data[1])))) {
          idx = 2;
        } else {
          idx = 1;
        }
      } else {
        g_st.site = &v_emlrtRSI;
        if (!muDoubleScalarIsNaN(cover_radii_data[0])) {
          idx = 1;
        } else {
          idx = 0;
          h_st.site = &w_emlrtRSI;
          if (b_cover_radii->size[0] > 2147483646) {
            i_st.site = &m_emlrtRSI;
            check_forloop_overflow_error(&i_st);
          }
          k = 2;
          exitg1 = false;
          while ((!exitg1) && (k <= nx)) {
            if (!muDoubleScalarIsNaN(cover_radii_data[k - 1])) {
              idx = k;
              exitg1 = true;
            } else {
              k++;
            }
          }
        }
        if (idx == 0) {
          idx = 1;
        } else {
          g_st.site = &u_emlrtRSI;
          theta_diff = cover_radii_data[idx - 1];
          a = idx + 1;
          h_st.site = &x_emlrtRSI;
          if ((idx + 1 <= b_cover_radii->size[0]) &&
              (b_cover_radii->size[0] > 2147483646)) {
            i_st.site = &m_emlrtRSI;
            check_forloop_overflow_error(&i_st);
          }
          for (k = a; k <= nx; k++) {
            r = cover_radii_data[k - 1];
            if (theta_diff > r) {
              theta_diff = r;
              idx = k;
            }
          }
        }
      }
      if ((idx < 1) || (idx > cover_centres->size[0])) {
        emlrtDynamicBoundsCheckR2012b(idx, 1, cover_centres->size[0],
                                      &t_emlrtBCI, &st);
      }
      b_st.site = &cb_emlrtRSI;
      theta_diff = b_mod(x_re_tmp) -
                   b_mod(muDoubleScalarAtan2(cover_centres_data[idx - 1].im,
                                             cover_centres_data[idx - 1].re));
      varargin_1[0] = muDoubleScalarAbs(theta_diff);
      varargin_1[1] = muDoubleScalarAbs(theta_diff - 6.2831853071795862);
      varargin_1[2] = muDoubleScalarAbs(theta_diff + 6.2831853071795862);
      c_st.site = &p_emlrtRSI;
      d_st.site = &q_emlrtRSI;
      e_st.site = &r_emlrtRSI;
      f_st.site = &s_emlrtRSI;
      g_st.site = &t_emlrtRSI;
      if (!muDoubleScalarIsNaN(varargin_1[0])) {
        idx = 1;
      } else {
        idx = 0;
        k = 2;
        exitg1 = false;
        while ((!exitg1) && (k < 4)) {
          if (!muDoubleScalarIsNaN(varargin_1[k - 1])) {
            idx = k;
            exitg1 = true;
          } else {
            k++;
          }
        }
      }
      if (idx == 0) {
        theta_diff = varargin_1[0];
      } else {
        h_st.site = &u_emlrtRSI;
        theta_diff = varargin_1[idx - 1];
        a = idx + 1;
        for (k = a; k < 4; k++) {
          r = varargin_1[k - 1];
          if (theta_diff > r) {
            theta_diff = r;
          }
        }
      }
      /*          theta_diff = max(theta_in_diff,pi/(4*order)); */
      if (theta_diff <
          3.1415926535897931 / (2.0 * (real_T)cover_centres->size[0])) {
        /*  now check Dave's refined polynomial condition */
        k = gCoeffs->contents->size[1];
        if (1 > k) {
          emlrtDynamicBoundsCheckR2012b(1, 1, k, &u_emlrtBCI, &st);
        }
        b_st.site = &db_emlrtRSI;
        c_st.site = &mb_emlrtRSI;
        d_st.site = &nb_emlrtRSI;
        theta_diff =
            (real_T)cover_centres->size[0] *
            muDoubleScalarHypot(gCoeffs->contents->data[0].re,
                                gCoeffs->contents->data[0].im) *
            muDoubleScalarPower(R, (real_T)cover_centres->size[0] - 1.0) *
            muDoubleScalarMin(
                0.70710678118654746,
                muDoubleScalarCos((real_T)cover_centres->size[0] * theta_diff));
        nx = 0;
        exitg1 = false;
        while ((!exitg1) && (nx <= cover_centres->size[0] - 2)) {
          k = gCoeffs->contents->size[1];
          idx = (gCoeffs->contents->size[1] - nx) - 1;
          if ((idx < 1) || (idx > k)) {
            emlrtDynamicBoundsCheckR2012b(idx, 1, k, &x_emlrtBCI, &st);
          }
          k = gCoeffs->contents->size[1];
          a = (gCoeffs->contents->size[1] - nx) - 1;
          if ((a < 1) || (a > k)) {
            emlrtDynamicBoundsCheckR2012b(a, 1, k, &x_emlrtBCI, &st);
          }
          b_st.site = &eb_emlrtRSI;
          c_st.site = &mb_emlrtRSI;
          d_st.site = &nb_emlrtRSI;
          theta_diff -= ((real_T)nx + 1.0) *
                        muDoubleScalarHypot(gCoeffs->contents->data[idx - 1].re,
                                            gCoeffs->contents->data[a - 1].im) *
                        muDoubleScalarPower(R, ((real_T)nx + 1.0) - 1.0);
          if (theta_diff <= 0.0) {
            /*  G isn't getting any bigger */
            exitg1 = true;
          } else {
            nx++;
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&st);
            }
          }
        }
        *in_no_return_yn = (theta_diff > 0.0);
      }
    }
  }
  emxFree_real_T(sp, &b_cover_radii);
  emxFree_creal_T(sp, &cover_centres);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void SDpathODEuler_v4(
    const emlrtStack *sp, const creal_T h0, const emxArray_creal_T *gCoeffs,
    const emxArray_creal_T *SPs, const emxArray_real_T *cover_radii,
    const emxArray_creal_T *valleys, real_T base_step_size, int64_T n_max,
    real_T r_star, real_T Newton_small_threshold, real_T Newton_big_threshold,
    emxArray_real_T *p_log_out, emxArray_creal_T *h_log_out)
{
  b_captured_var dg_h;
  b_captured_var g_h;
  b_captured_var g_se;
  b_captured_var h;
  c_captured_var b_SPs;
  c_captured_var b_gCoeffs;
  c_captured_var b_valleys;
  c_captured_var dgCoeffs;
  captured_var b_r_star;
  captured_var p;
  d_captured_var b_cover_radii;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  emxArray_creal_T *ddgCoeffs;
  emxArray_creal_T *h_log;
  emxArray_creal_T *h_log_copy;
  emxArray_real_T *p_log;
  emxArray_real_T *p_log_copy;
  emxArray_real_T *r;
  const creal_T *SPs_data;
  const creal_T *gCoeffs_data;
  const creal_T *valleys_data;
  creal_T F_h;
  creal_T dc;
  creal_T *ddgCoeffs_data;
  creal_T *h_log_data;
  int64_T x;
  const real_T *cover_radii_data;
  real_T brm;
  real_T dg_h_im;
  real_T dg_h_re;
  real_T p_step_size;
  real_T sgnbi;
  real_T z_re;
  real_T *p_log_data;
  real_T *p_log_out_data;
  int32_T iv[2];
  int32_T a;
  int32_T idx;
  int32_T k;
  int32_T last;
  uint32_T n;
  boolean_T continue_loop;
  boolean_T exitg1;
  boolean_T in_no_return_yn;
  boolean_T inball_yn;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  valleys_data = valleys->data;
  cover_radii_data = cover_radii->data;
  SPs_data = SPs->data;
  gCoeffs_data = gCoeffs->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInitStruct_captured_var2(sp, &b_gCoeffs, &u_emlrtRTEI);
  st.site = &k_emlrtRSI;
  b_st.site = &l_emlrtRSI;
  a = b_gCoeffs.contents->size[0] * b_gCoeffs.contents->size[1];
  b_gCoeffs.contents->size[0] = 1;
  b_gCoeffs.contents->size[1] = gCoeffs->size[1];
  emxEnsureCapacity_creal_T(&st, b_gCoeffs.contents, a, &e_emlrtRTEI);
  last = gCoeffs->size[1];
  for (a = 0; a < last; a++) {
    b_gCoeffs.contents->data[a] = gCoeffs_data[a];
  }
  emxInitStruct_captured_var(&st, &b_SPs, &u_emlrtRTEI);
  st.site = &k_emlrtRSI;
  b_st.site = &l_emlrtRSI;
  a = b_SPs.contents->size[0];
  b_SPs.contents->size[0] = SPs->size[0];
  emxEnsureCapacity_creal_T(&st, b_SPs.contents, a, &e_emlrtRTEI);
  last = SPs->size[0];
  for (a = 0; a < last; a++) {
    b_SPs.contents->data[a] = SPs_data[a];
  }
  emxInitStruct_captured_var1(&st, &b_cover_radii, &u_emlrtRTEI);
  st.site = &k_emlrtRSI;
  b_st.site = &l_emlrtRSI;
  a = b_cover_radii.contents->size[0];
  b_cover_radii.contents->size[0] = cover_radii->size[0];
  emxEnsureCapacity_real_T(&st, b_cover_radii.contents, a, &e_emlrtRTEI);
  last = cover_radii->size[0];
  for (a = 0; a < last; a++) {
    b_cover_radii.contents->data[a] = cover_radii_data[a];
  }
  emxInitStruct_captured_var(&st, &b_valleys, &u_emlrtRTEI);
  st.site = &k_emlrtRSI;
  b_st.site = &l_emlrtRSI;
  a = b_valleys.contents->size[0];
  b_valleys.contents->size[0] = valleys->size[0];
  emxEnsureCapacity_creal_T(&st, b_valleys.contents, a, &e_emlrtRTEI);
  last = valleys->size[0];
  for (a = 0; a < last; a++) {
    b_valleys.contents->data[a] = valleys_data[a];
  }
  st.site = &k_emlrtRSI;
  b_st.site = &l_emlrtRSI;
  b_r_star.contents = r_star;
  st.site = &k_emlrtRSI;
  b_st.site = &l_emlrtRSI;
  st.site = &k_emlrtRSI;
  b_st.site = &l_emlrtRSI;
  st.site = &k_emlrtRSI;
  b_st.site = &l_emlrtRSI;
  st.site = &k_emlrtRSI;
  b_st.site = &l_emlrtRSI;
  st.site = &k_emlrtRSI;
  b_st.site = &l_emlrtRSI;
  st.site = &k_emlrtRSI;
  b_st.site = &l_emlrtRSI;
  /*  version three adds error checking at each step */
  /* computes NSD path h(p) and h'(p) */
  /* excluded_SPs_indices */
  if (SPs->size[0] == 0) {
    a = b_SPs.contents->size[0];
    b_SPs.contents->size[0] = 1;
    emxEnsureCapacity_creal_T(sp, b_SPs.contents, a, &f_emlrtRTEI);
    b_SPs.contents->data[0].re = rtInf;
    b_SPs.contents->data[0].im = 0.0;
    /*  bodge to speed things up further down */
    a = b_cover_radii.contents->size[0];
    b_cover_radii.contents->size[0] = 1;
    emxEnsureCapacity_real_T(sp, b_cover_radii.contents, a, &g_emlrtRTEI);
    b_cover_radii.contents->data[0] = 0.0;
  }
  a = b_SPs.contents->size[0];
  for (last = 0; last < a; last++) {
    /*  another bodge to stop stationary points being treated like critical */
    /*  points */
    if (last + 1 > b_cover_radii.contents->size[0]) {
      emlrtDynamicBoundsCheckR2012b(last + 1, 1,
                                    b_cover_radii.contents->size[0],
                                    &o_emlrtBCI, (emlrtCTX)sp);
    }
    if (b_cover_radii.contents->data[last] == 0.0) {
      /*  || ismember(n,excluded_SPs_indices) */
      if (last + 1 > b_SPs.contents->size[0]) {
        emlrtDynamicBoundsCheckR2012b(last + 1, 1, b_SPs.contents->size[0],
                                      &p_emlrtBCI, (emlrtCTX)sp);
      }
      b_SPs.contents->data[last].re = rtInf;
      if (last + 1 > b_SPs.contents->size[0]) {
        emlrtDynamicBoundsCheckR2012b(last + 1, 1, b_SPs.contents->size[0],
                                      &p_emlrtBCI, (emlrtCTX)sp);
      }
      b_SPs.contents->data[last].im = 0.0;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  g_se.contents = polyval(gCoeffs, h0);
  /*  value of g at steepest exit */
  /* ODE for path of steepest descent: */
  if (1 > gCoeffs->size[1] - 1) {
    last = 0;
  } else {
    if (1 > gCoeffs->size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, gCoeffs->size[1], &n_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if ((gCoeffs->size[1] - 1 < 1) ||
        (gCoeffs->size[1] - 1 > gCoeffs->size[1])) {
      emlrtDynamicBoundsCheckR2012b(gCoeffs->size[1] - 1, 1, gCoeffs->size[1],
                                    &m_emlrtBCI, (emlrtCTX)sp);
    }
    last = gCoeffs->size[1] - 1;
  }
  st.site = &j_emlrtRSI;
  emxInit_real_T(&st, &r, 2, &u_emlrtRTEI);
  p_log_out_data = r->data;
  if (gCoeffs->size[1] - 1 < 1) {
    r->size[0] = 1;
    r->size[1] = 0;
  } else {
    a = r->size[0] * r->size[1];
    r->size[0] = 1;
    r->size[1] = (int32_T) - (1.0 - ((real_T)gCoeffs->size[1] - 1.0)) + 1;
    emxEnsureCapacity_real_T(&st, r, a, &h_emlrtRTEI);
    p_log_out_data = r->data;
    idx = (int32_T) - (1.0 - ((real_T)gCoeffs->size[1] - 1.0));
    for (a = 0; a <= idx; a++) {
      p_log_out_data[a] = ((real_T)gCoeffs->size[1] - 1.0) - (real_T)a;
    }
  }
  if ((last != r->size[1]) && ((last != 1) && (r->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(last, r->size[1], &d_emlrtECI, (emlrtCTX)sp);
  }
  emxInitStruct_captured_var2(sp, &dgCoeffs, &i_emlrtRTEI);
  if (last == r->size[1]) {
    a = dgCoeffs.contents->size[0] * dgCoeffs.contents->size[1];
    dgCoeffs.contents->size[0] = 1;
    dgCoeffs.contents->size[1] = last;
    emxEnsureCapacity_creal_T(sp, dgCoeffs.contents, a, &i_emlrtRTEI);
    for (a = 0; a < last; a++) {
      dgCoeffs.contents->data[a].re = p_log_out_data[a] * gCoeffs_data[a].re;
      dgCoeffs.contents->data[a].im = p_log_out_data[a] * gCoeffs_data[a].im;
    }
  } else {
    st.site = &j_emlrtRSI;
    b_binary_expand_op(&st, &dgCoeffs, gCoeffs, last - 1, r);
  }
  if (1 > dgCoeffs.contents->size[1] - 1) {
    last = 0;
  } else {
    if (1 > dgCoeffs.contents->size[1]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, dgCoeffs.contents->size[1],
                                    &l_emlrtBCI, (emlrtCTX)sp);
    }
    if ((dgCoeffs.contents->size[1] - 1 < 1) ||
        (dgCoeffs.contents->size[1] - 1 > dgCoeffs.contents->size[1])) {
      emlrtDynamicBoundsCheckR2012b(dgCoeffs.contents->size[1] - 1, 1,
                                    dgCoeffs.contents->size[1], &k_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    last = dgCoeffs.contents->size[1] - 1;
  }
  st.site = &i_emlrtRSI;
  if (gCoeffs->size[1] - 2 < 1) {
    r->size[0] = 1;
    r->size[1] = 0;
  } else {
    a = r->size[0] * r->size[1];
    r->size[0] = 1;
    r->size[1] =
        (int32_T) - (1.0 - (((real_T)gCoeffs->size[1] - 1.0) - 1.0)) + 1;
    emxEnsureCapacity_real_T(&st, r, a, &j_emlrtRTEI);
    p_log_out_data = r->data;
    idx = (int32_T) - (1.0 - (((real_T)gCoeffs->size[1] - 1.0) - 1.0));
    for (a = 0; a <= idx; a++) {
      p_log_out_data[a] = (((real_T)gCoeffs->size[1] - 1.0) - 1.0) - (real_T)a;
    }
  }
  if ((last != r->size[1]) && ((last != 1) && (r->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(last, r->size[1], &c_emlrtECI, (emlrtCTX)sp);
  }
  emxInit_creal_T(sp, &ddgCoeffs, 2, &k_emlrtRTEI);
  if (last == r->size[1]) {
    a = ddgCoeffs->size[0] * ddgCoeffs->size[1];
    ddgCoeffs->size[0] = 1;
    ddgCoeffs->size[1] = last;
    emxEnsureCapacity_creal_T(sp, ddgCoeffs, a, &k_emlrtRTEI);
    ddgCoeffs_data = ddgCoeffs->data;
    for (a = 0; a < last; a++) {
      ddgCoeffs_data[a].re = p_log_out_data[a] * dgCoeffs.contents->data[a].re;
      ddgCoeffs_data[a].im = p_log_out_data[a] * dgCoeffs.contents->data[a].im;
    }
  } else {
    st.site = &i_emlrtRSI;
    binary_expand_op(&st, ddgCoeffs, &dgCoeffs, last - 1, r);
  }
  emxFree_real_T(sp, &r);
  emxInit_real_T(sp, &p_log, 1, &l_emlrtRTEI);
  /*  main loop */
  h.contents = h0;
  if (!(n_max >= 0.0)) {
    emlrtNonNegativeCheckR2012b((real_T)n_max, &b_emlrtDCI, (emlrtCTX)sp);
  }
  p_step_size = (real_T)(int64_T)muDoubleScalarFloor((real_T)n_max);
  if (p_step_size != (int32_T)muDoubleScalarFloor(p_step_size)) {
    emlrtIntegerCheckR2012b(p_step_size, &emlrtDCI, (emlrtCTX)sp);
  }
  a = p_log->size[0];
  p_log->size[0] = (int32_T)(int64_T)muDoubleScalarFloor(p_step_size);
  emxEnsureCapacity_real_T(sp, p_log, a, &l_emlrtRTEI);
  p_log_data = p_log->data;
  if (!(n_max >= 0.0)) {
    emlrtNonNegativeCheckR2012b((real_T)n_max, &b_emlrtDCI, (emlrtCTX)sp);
  }
  if (p_step_size != (int32_T)muDoubleScalarFloor(p_step_size)) {
    emlrtIntegerCheckR2012b(p_step_size, &emlrtDCI, (emlrtCTX)sp);
  }
  last = (int32_T)(int64_T)muDoubleScalarFloor(p_step_size);
  for (a = 0; a < last; a++) {
    p_log_data[a] = 0.0;
  }
  emxInit_creal_T(sp, &h_log, 1, &m_emlrtRTEI);
  if (!(n_max >= 0.0)) {
    emlrtNonNegativeCheckR2012b((real_T)n_max, &d_emlrtDCI, (emlrtCTX)sp);
  }
  if (p_step_size != (int32_T)muDoubleScalarFloor(p_step_size)) {
    emlrtIntegerCheckR2012b(p_step_size, &c_emlrtDCI, (emlrtCTX)sp);
  }
  a = h_log->size[0];
  h_log->size[0] = (int32_T)(int64_T)muDoubleScalarFloor(p_step_size);
  emxEnsureCapacity_creal_T(sp, h_log, a, &m_emlrtRTEI);
  h_log_data = h_log->data;
  if (!(n_max >= 0.0)) {
    emlrtNonNegativeCheckR2012b((real_T)n_max, &d_emlrtDCI, (emlrtCTX)sp);
  }
  if (p_step_size != (int32_T)muDoubleScalarFloor(p_step_size)) {
    emlrtIntegerCheckR2012b(p_step_size, &c_emlrtDCI, (emlrtCTX)sp);
  }
  last = (int32_T)(int64_T)muDoubleScalarFloor(p_step_size);
  for (a = 0; a < last; a++) {
    h_log_data[a].re = 0.0;
    h_log_data[a].im = 2.2204460492503131E-16;
  }
  if (1 > (int32_T)n_max) {
    emlrtDynamicBoundsCheckR2012b(1, 1, (int32_T)n_max, &j_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  p_log_data[0] = 0.0;
  if (1 > h_log->size[0]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, h_log->size[0], &i_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  h_log_data[0] = h0;
  n = 1U;
  dg_h.contents = polyval(dgCoeffs.contents, h0);
  continue_loop = true;
  emxInit_real_T(sp, &p_log_copy, 1, &q_emlrtRTEI);
  emxInit_creal_T(sp, &h_log_copy, 1, &r_emlrtRTEI);
  while (continue_loop) {
    /*  get ingreidents which will be used multiple times */
    n++;
    /*  Forward Euler step */
    if (dg_h.contents.im == 0.0) {
      F_h.re = 0.0;
      F_h.im = 1.0 / dg_h.contents.re;
    } else if (dg_h.contents.re == 0.0) {
      F_h.re = 1.0 / dg_h.contents.im;
      F_h.im = 0.0;
    } else {
      brm = muDoubleScalarAbs(dg_h.contents.re);
      p_step_size = muDoubleScalarAbs(dg_h.contents.im);
      if (brm > p_step_size) {
        p_step_size = dg_h.contents.im / dg_h.contents.re;
        brm = dg_h.contents.re + p_step_size * dg_h.contents.im;
        F_h.re = p_step_size / brm;
        F_h.im = (1.0 - p_step_size * 0.0) / brm;
      } else if (p_step_size == brm) {
        if (dg_h.contents.re > 0.0) {
          p_step_size = 0.5;
        } else {
          p_step_size = -0.5;
        }
        if (dg_h.contents.im > 0.0) {
          sgnbi = 0.5;
        } else {
          sgnbi = -0.5;
        }
        F_h.re = (0.0 * p_step_size + sgnbi) / brm;
        F_h.im = (p_step_size - 0.0 * sgnbi) / brm;
      } else {
        p_step_size = dg_h.contents.re / dg_h.contents.im;
        brm = dg_h.contents.im + p_step_size * dg_h.contents.re;
        F_h.re = (p_step_size * 0.0 + 1.0) / brm;
        F_h.im = p_step_size / brm;
      }
    }
    dg_h_re = dg_h.contents.re * dg_h.contents.re -
              dg_h.contents.im * dg_h.contents.im;
    p_step_size = dg_h.contents.re * dg_h.contents.im;
    dg_h_im = p_step_size + p_step_size;
    dc = polyval(ddgCoeffs, h.contents);
    if (dc.im == 0.0) {
      if (dg_h_im == 0.0) {
        z_re = dg_h_re / dc.re;
        brm = 0.0;
      } else if (dg_h_re == 0.0) {
        z_re = 0.0;
        brm = dg_h_im / dc.re;
      } else {
        z_re = dg_h_re / dc.re;
        brm = dg_h_im / dc.re;
      }
    } else if (dc.re == 0.0) {
      if (dg_h_re == 0.0) {
        z_re = dg_h_im / dc.im;
        brm = 0.0;
      } else if (dg_h_im == 0.0) {
        z_re = 0.0;
        brm = -(dg_h_re / dc.im);
      } else {
        z_re = dg_h_im / dc.im;
        brm = -(dg_h_re / dc.im);
      }
    } else {
      brm = muDoubleScalarAbs(dc.re);
      p_step_size = muDoubleScalarAbs(dc.im);
      if (brm > p_step_size) {
        p_step_size = dc.im / dc.re;
        brm = dc.re + p_step_size * dc.im;
        z_re = (dg_h_re + p_step_size * dg_h_im) / brm;
        brm = (dg_h_im - p_step_size * dg_h_re) / brm;
      } else if (p_step_size == brm) {
        if (dc.re > 0.0) {
          p_step_size = 0.5;
        } else {
          p_step_size = -0.5;
        }
        if (dc.im > 0.0) {
          sgnbi = 0.5;
        } else {
          sgnbi = -0.5;
        }
        z_re = (dg_h_re * p_step_size + dg_h_im * sgnbi) / brm;
        brm = (dg_h_im * p_step_size - dg_h_re * sgnbi) / brm;
      } else {
        p_step_size = dc.re / dc.im;
        brm = dc.im + p_step_size * dc.re;
        z_re = (p_step_size * dg_h_re + dg_h_im) / brm;
        brm = (p_step_size * dg_h_im - dg_h_re) / brm;
      }
    }
    st.site = &h_emlrtRSI;
    a = h_log_copy->size[0];
    h_log_copy->size[0] = b_SPs.contents->size[0];
    emxEnsureCapacity_creal_T(&st, h_log_copy, a, &p_emlrtRTEI);
    ddgCoeffs_data = h_log_copy->data;
    last = b_SPs.contents->size[0];
    for (a = 0; a < last; a++) {
      ddgCoeffs_data[a].re = b_SPs.contents->data[a].re - h.contents.re;
      ddgCoeffs_data[a].im = b_SPs.contents->data[a].im - h.contents.im;
    }
    b_st.site = &h_emlrtRSI;
    b_abs(&b_st, h_log_copy, p_log_copy);
    p_log_out_data = p_log_copy->data;
    b_st.site = &p_emlrtRSI;
    c_st.site = &q_emlrtRSI;
    d_st.site = &r_emlrtRSI;
    if (p_log_copy->size[0] < 1) {
      emlrtErrorWithMessageIdR2018a(
          &d_st, &b_emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }
    e_st.site = &s_emlrtRSI;
    f_st.site = &t_emlrtRSI;
    last = p_log_copy->size[0];
    if (p_log_copy->size[0] <= 2) {
      if (p_log_copy->size[0] == 1) {
        sgnbi = p_log_out_data[0];
      } else if ((p_log_out_data[0] > p_log_out_data[1]) ||
                 (muDoubleScalarIsNaN(p_log_out_data[0]) &&
                  (!muDoubleScalarIsNaN(p_log_out_data[1])))) {
        sgnbi = p_log_out_data[1];
      } else {
        sgnbi = p_log_out_data[0];
      }
    } else {
      g_st.site = &v_emlrtRSI;
      if (!muDoubleScalarIsNaN(p_log_out_data[0])) {
        idx = 1;
      } else {
        idx = 0;
        h_st.site = &w_emlrtRSI;
        if (p_log_copy->size[0] > 2147483646) {
          i_st.site = &m_emlrtRSI;
          check_forloop_overflow_error(&i_st);
        }
        k = 2;
        exitg1 = false;
        while ((!exitg1) && (k <= last)) {
          if (!muDoubleScalarIsNaN(p_log_out_data[k - 1])) {
            idx = k;
            exitg1 = true;
          } else {
            k++;
          }
        }
      }
      if (idx == 0) {
        sgnbi = p_log_out_data[0];
      } else {
        g_st.site = &u_emlrtRSI;
        sgnbi = p_log_out_data[idx - 1];
        a = idx + 1;
        h_st.site = &x_emlrtRSI;
        if ((idx + 1 <= p_log_copy->size[0]) &&
            (p_log_copy->size[0] > 2147483646)) {
          i_st.site = &m_emlrtRSI;
          check_forloop_overflow_error(&i_st);
        }
        for (k = a; k <= last; k++) {
          p_step_size = p_log_out_data[k - 1];
          if (sgnbi > p_step_size) {
            sgnbi = p_step_size;
          }
        }
      }
    }
    p_step_size =
        base_step_size *
        muDoubleScalarMin(2.0 * muDoubleScalarHypot(z_re, brm),
                          sgnbi / muDoubleScalarHypot(F_h.re, F_h.im));
    h.contents.re += p_step_size * F_h.re;
    h.contents.im += p_step_size * F_h.im;
    /*  error checking */
    g_h.contents = polyval(b_gCoeffs.contents, h.contents);
    dg_h.contents = polyval(dgCoeffs.contents, h.contents);
    if (((int32_T)(n - 1U) < 1) || ((int32_T)(n - 1U) > p_log->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(n - 1U), 1, p_log->size[0],
                                    &q_emlrtBCI, (emlrtCTX)sp);
    }
    p.contents = p_log_data[(int32_T)n - 2] + p_step_size;
    st.site = &g_emlrtRSI;
    F_h =
        get_Newton_step(&st, &g_h, &b_gCoeffs, &h, &dg_h, &dgCoeffs, &g_se, &p);
    while (muDoubleScalarHypot(F_h.re, F_h.im) > Newton_big_threshold) {
      h.contents.re -= F_h.re;
      h.contents.im -= F_h.im;
      st.site = &f_emlrtRSI;
      F_h = get_Newton_step(&st, &g_h, &b_gCoeffs, &h, &dg_h, &dgCoeffs, &g_se,
                            &p);
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }
    /*  might as well apply Newton once more */
    h.contents.re -= F_h.re;
    h.contents.im -= F_h.im;
    if (((int32_T)n < 1) || ((int32_T)n > p_log->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, p_log->size[0], &r_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    p_log_data[(int32_T)n - 1] = p.contents;
    if (((int32_T)n < 1) || ((int32_T)n > h_log->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, h_log->size[0], &s_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    h_log_data[(int32_T)n - 1].re = h.contents.re;
    if (((int32_T)n < 1) || ((int32_T)n > h_log->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, h_log->size[0], &s_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    h_log_data[(int32_T)n - 1].im = h.contents.im;
    st.site = &e_emlrtRSI;
    halt_euler(&st, &h, &b_SPs, &b_cover_radii, &b_valleys, &b_gCoeffs,
               &b_r_star, &inball_yn, &in_no_return_yn);
    if ((!inball_yn) && (!in_no_return_yn)) {
      continue_loop = false;
    }
    if (inball_yn) {
      /*  only refine endpoint to fine level if in a ball */
      /*  beyore actually halting the process, refine this endpoint */
      st.site = &d_emlrtRSI;
      F_h = get_Newton_step(&st, &g_h, &b_gCoeffs, &h, &dg_h, &dgCoeffs, &g_se,
                            &p);
      while (muDoubleScalarHypot(F_h.re, F_h.im) > Newton_small_threshold) {
        h.contents.re -= F_h.re;
        h.contents.im -= F_h.im;
        st.site = &c_emlrtRSI;
        F_h = get_Newton_step(&st, &g_h, &b_gCoeffs, &h, &dg_h, &dgCoeffs,
                              &g_se, &p);
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtCTX)sp);
        }
      }
      /*  might as well apply Newton once more */
      h.contents.re -= F_h.re;
      h.contents.im -= F_h.im;
    }
    x = n;
    if (n_max != 0L) {
      st.site = &pb_emlrtRSI;
      x -= div_s64_floor(&st, x, n_max) * n_max;
    }
    if (x == 0L) {
      /*  need to add more points */
      /*              success = false; */
      /*              break */
      a = p_log_copy->size[0];
      p_log_copy->size[0] = p_log->size[0];
      emxEnsureCapacity_real_T(sp, p_log_copy, a, &q_emlrtRTEI);
      p_log_out_data = p_log_copy->data;
      last = p_log->size[0];
      for (a = 0; a < last; a++) {
        p_log_out_data[a] = p_log_data[a];
      }
      a = h_log_copy->size[0];
      h_log_copy->size[0] = h_log->size[0];
      emxEnsureCapacity_creal_T(sp, h_log_copy, a, &r_emlrtRTEI);
      ddgCoeffs_data = h_log_copy->data;
      last = h_log->size[0];
      for (a = 0; a < last; a++) {
        ddgCoeffs_data[a] = h_log_data[a];
      }
      if (n_max > MAX_int64_T - n) {
        x = MAX_int64_T;
      } else {
        x = n_max + n;
      }
      if (!(x >= 0.0)) {
        emlrtNonNegativeCheckR2012b((real_T)x, &f_emlrtDCI, (emlrtCTX)sp);
      }
      p_step_size = (real_T)(int64_T)muDoubleScalarFloor((real_T)x);
      if (p_step_size != (int32_T)muDoubleScalarFloor(p_step_size)) {
        emlrtIntegerCheckR2012b(p_step_size, &e_emlrtDCI, (emlrtCTX)sp);
      }
      a = p_log->size[0];
      p_log->size[0] = (int32_T)(int64_T)muDoubleScalarFloor(p_step_size);
      emxEnsureCapacity_real_T(sp, p_log, a, &s_emlrtRTEI);
      p_log_data = p_log->data;
      if (!(x >= 0.0)) {
        emlrtNonNegativeCheckR2012b((real_T)x, &f_emlrtDCI, (emlrtCTX)sp);
      }
      if (p_step_size != (int32_T)muDoubleScalarFloor(p_step_size)) {
        emlrtIntegerCheckR2012b(p_step_size, &e_emlrtDCI, (emlrtCTX)sp);
      }
      last = (int32_T)(int64_T)muDoubleScalarFloor(p_step_size);
      for (a = 0; a < last; a++) {
        p_log_data[a] = 0.0;
      }
      if (n_max > MAX_int64_T - n) {
        x = MAX_int64_T;
      } else {
        x = n_max + n;
      }
      if (!(x >= 0.0)) {
        emlrtNonNegativeCheckR2012b((real_T)x, &h_emlrtDCI, (emlrtCTX)sp);
      }
      p_step_size = (real_T)(int64_T)muDoubleScalarFloor((real_T)x);
      if (p_step_size != (int32_T)muDoubleScalarFloor(p_step_size)) {
        emlrtIntegerCheckR2012b(p_step_size, &g_emlrtDCI, (emlrtCTX)sp);
      }
      a = h_log->size[0];
      h_log->size[0] = (int32_T)(int64_T)muDoubleScalarFloor(p_step_size);
      emxEnsureCapacity_creal_T(sp, h_log, a, &t_emlrtRTEI);
      h_log_data = h_log->data;
      if (!(x >= 0.0)) {
        emlrtNonNegativeCheckR2012b((real_T)x, &h_emlrtDCI, (emlrtCTX)sp);
      }
      if (p_step_size != (int32_T)muDoubleScalarFloor(p_step_size)) {
        emlrtIntegerCheckR2012b(p_step_size, &g_emlrtDCI, (emlrtCTX)sp);
      }
      last = (int32_T)(int64_T)muDoubleScalarFloor(p_step_size);
      for (a = 0; a < last; a++) {
        h_log_data[a].re = 0.0;
        h_log_data[a].im = 0.0;
      }
      if (n_max > MAX_int64_T - n) {
        x = MAX_int64_T;
      } else {
        x = n_max + n;
      }
      if (1 > (int32_T)x) {
        emlrtDynamicBoundsCheckR2012b(1, 1, (int32_T)x, &h_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if (n_max > MAX_int64_T - n) {
        x = MAX_int64_T;
      } else {
        x = n_max + n;
      }
      if (((int32_T)n < 1) || ((int32_T)n > (int32_T)x)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, (int32_T)x, &g_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if ((int32_T)n != p_log_copy->size[0]) {
        emlrtSubAssignSizeCheck1dR2017a((int32_T)n, p_log_copy->size[0],
                                        &b_emlrtECI, (emlrtCTX)sp);
      }
      last = (int32_T)n;
      for (a = 0; a < last; a++) {
        p_log_data[a] = p_log_out_data[a];
      }
      if (1 > h_log->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, h_log->size[0], &f_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if (((int32_T)n < 1) || ((int32_T)n > h_log->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, h_log->size[0],
                                      &e_emlrtBCI, (emlrtCTX)sp);
      }
      if ((int32_T)n != h_log_copy->size[0]) {
        emlrtSubAssignSizeCheck1dR2017a((int32_T)n, h_log_copy->size[0],
                                        &emlrtECI, (emlrtCTX)sp);
      }
      last = (int32_T)n;
      for (a = 0; a < last; a++) {
        h_log_data[a] = ddgCoeffs_data[a];
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_creal_T(sp, &h_log_copy);
  emxFree_real_T(sp, &p_log_copy);
  emxFree_creal_T(sp, &ddgCoeffs);
  emxFreeStruct_captured_var(sp, &dgCoeffs);
  emxFreeStruct_captured_var(sp, &b_gCoeffs);
  emxFreeStruct_captured_var(sp, &b_SPs);
  emxFreeStruct_captured_var1(sp, &b_cover_radii);
  emxFreeStruct_captured_var(sp, &b_valleys);
  if (1 > p_log->size[0]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, p_log->size[0], &d_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  last = (int32_T)n;
  if (((int32_T)n < 1) || ((int32_T)n > p_log->size[0])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, p_log->size[0], &c_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  iv[0] = 1;
  iv[1] = (int32_T)n;
  st.site = &b_emlrtRSI;
  indexShapeCheck(&st, p_log->size[0], iv);
  a = p_log_out->size[0];
  p_log_out->size[0] = (int32_T)n;
  emxEnsureCapacity_real_T(sp, p_log_out, a, &n_emlrtRTEI);
  p_log_out_data = p_log_out->data;
  for (a = 0; a < last; a++) {
    p_log_out_data[a] = p_log_data[a];
  }
  emxFree_real_T(sp, &p_log);
  if (1 > h_log->size[0]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, h_log->size[0], &b_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  if (((int32_T)n < 1) || ((int32_T)n > h_log->size[0])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, h_log->size[0], &emlrtBCI,
                                  (emlrtCTX)sp);
  }
  iv[0] = 1;
  iv[1] = (int32_T)n;
  st.site = &emlrtRSI;
  indexShapeCheck(&st, h_log->size[0], iv);
  a = h_log_out->size[0];
  h_log_out->size[0] = (int32_T)n;
  emxEnsureCapacity_creal_T(sp, h_log_out, a, &o_emlrtRTEI);
  ddgCoeffs_data = h_log_out->data;
  for (a = 0; a < last; a++) {
    ddgCoeffs_data[a] = h_log_data[a];
  }
  emxFree_creal_T(sp, &h_log);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (SDpathODEuler_v4.c) */
