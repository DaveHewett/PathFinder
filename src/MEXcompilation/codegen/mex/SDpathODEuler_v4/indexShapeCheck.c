/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * indexShapeCheck.c
 *
 * Code generation for function 'indexShapeCheck'
 *
 */

/* Include files */
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo
    ec_emlrtRSI =
        {
            38,                /* lineNo */
            "indexShapeCheck", /* fcnName */
            "/home/andrew/matlab/toolbox/eml/eml/+coder/+internal/"
            "indexShapeCheck.m" /* pathName */
};

static emlrtRSInfo
    oc_emlrtRSI =
        {
            42,                /* lineNo */
            "indexShapeCheck", /* fcnName */
            "/home/andrew/matlab/toolbox/eml/eml/+coder/+internal/"
            "indexShapeCheck.m" /* pathName */
};

static emlrtRTEInfo
    c_emlrtRTEI =
        {
            122,           /* lineNo */
            5,             /* colNo */
            "errOrWarnIf", /* fName */
            "/home/andrew/matlab/toolbox/eml/eml/+coder/+internal/"
            "indexShapeCheck.m" /* pName */
};

/* Function Definitions */
void b_indexShapeCheck(const emlrtStack *sp, int32_T matrixSize,
                       const int32_T indexSize[2])
{
  emlrtStack st;
  boolean_T c;
  st.prev = sp;
  st.tls = sp->tls;
  if ((matrixSize == 1) && (indexSize[1] != 1)) {
    c = true;
  } else {
    c = false;
  }
  st.site = &oc_emlrtRSI;
  if (c) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
                                  "Coder:FE:PotentialVectorVector",
                                  "Coder:FE:PotentialVectorVector", 0);
  }
}

void indexShapeCheck(const emlrtStack *sp, int32_T matrixSize,
                     const int32_T indexSize[2])
{
  emlrtStack st;
  boolean_T c;
  st.prev = sp;
  st.tls = sp->tls;
  if ((matrixSize != 1) && (indexSize[1] != 1) && (matrixSize != 1)) {
    c = true;
  } else {
    c = false;
  }
  st.site = &ec_emlrtRSI;
  if (c) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
                                  "Coder:FE:PotentialMatrixMatrix_VM",
                                  "Coder:FE:PotentialMatrixMatrix_VM", 0);
  }
}

/* End of code generation (indexShapeCheck.c) */