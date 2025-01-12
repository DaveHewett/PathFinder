/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * anyNonFinite.c
 *
 * Code generation for function 'anyNonFinite'
 *
 */

/* Include files */
#include "anyNonFinite.h"
#include "eml_int_forloop_overflow_check.h"
#include "get_stepest_exits_on_ball_data.h"
#include "get_stepest_exits_on_ball_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo sb_emlrtRSI = {
    29,             /* lineNo */
    "anyNonFinite", /* fcnName */
    "/home/andrew/matlab/toolbox/eml/eml/+coder/+internal/anyNonFinite.m" /* pathName
                                                                           */
};

static emlrtRSInfo tb_emlrtRSI = {
    44,          /* lineNo */
    "vAllOrAny", /* fcnName */
    "/home/andrew/matlab/toolbox/eml/eml/+coder/+internal/vAllOrAny.m" /* pathName
                                                                        */
};

static emlrtRSInfo ub_emlrtRSI = {
    103,                  /* lineNo */
    "flatVectorAllOrAny", /* fcnName */
    "/home/andrew/matlab/toolbox/eml/eml/+coder/+internal/vAllOrAny.m" /* pathName
                                                                        */
};

/* Function Definitions */
boolean_T anyNonFinite(const emlrtStack *sp, const emxArray_creal_T *x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const creal_T *x_data;
  int32_T k;
  int32_T nx;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  x_data = x->data;
  st.site = &sb_emlrtRSI;
  b_st.site = &tb_emlrtRSI;
  nx = x->size[0] * x->size[1];
  p = true;
  c_st.site = &ub_emlrtRSI;
  if ((1 <= nx) && (nx > 2147483646)) {
    d_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }
  for (k = 0; k < nx; k++) {
    if ((!p) || (muDoubleScalarIsInf(x_data[k].re) ||
                 muDoubleScalarIsInf(x_data[k].im) ||
                 (muDoubleScalarIsNaN(x_data[k].re) ||
                  muDoubleScalarIsNaN(x_data[k].im)))) {
      p = false;
    }
  }
  return !p;
}

/* End of code generation (anyNonFinite.c) */
