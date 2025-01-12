/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * SDpathODEuler_v4_initialize.c
 *
 * Code generation for function 'SDpathODEuler_v4_initialize'
 *
 */

/* Include files */
#include "SDpathODEuler_v4_initialize.h"
#include "SDpathODEuler_v4_data.h"
#include "_coder_SDpathODEuler_v4_mex.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void SDpathODEuler_v4_initialize(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mex_InitInfAndNan();
  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, NULL);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (SDpathODEuler_v4_initialize.c) */
