/*
 * $Id: math_asinf.c,v 1.4 2023-07-16 12:04:23 clib2devs Exp $
 */

#ifndef _MATH_HEADERS_H
#include "math_headers.h"
#endif /* _MATH_HEADERS_H */

static const float
        one = 1.0000000000e+00, /* 0x3F800000 */
        huge = 1.000e+30,
        /* coefficient for R(x^2) */
        pS0 = 1.6666586697e-01,
        pS1 = -4.2743422091e-02,
        pS2 = -8.6563630030e-03,
        qS1 = -7.0662963390e-01;

static const double
        pio2 = 1.570796326794896558e+00;

float
asinf(float x) {
    double s;
    float t, w, p, q;
    int32_t hx, ix;
    GET_FLOAT_WORD(hx, x);
    ix = hx & 0x7fffffff;
    if (ix >= 0x3f800000) {             /* |x| >= 1 */
        if (ix == 0x3f800000)           /* |x| == 1 */
            return x * (float) pio2;    /* asin(+-1) = +-pi/2 with inexact */
        return (x - x) / (x - x);       /* asin(|x|>1) is NaN */
    } else if (ix < 0x3f000000) {       /* |x|<0.5 */
        if (ix < 0x39800000) {          /* |x| < 2**-12 */
            if (huge + x > one) return x;/* return x with inexact if x!=0*/
        }
        t = x * x;
        p = t * (pS0 + t * (pS1 + t * pS2));
        q = one + t * qS1;
        w = p / q;
        return x + x * w;
    }
    /* 1> |x|>= 0.5 */
    w = one - (float) fabsf(x);
    t = w * (float) 0.5;
    p = t * (pS0 + t * (pS1 + t * pS2));
    q = one + t * qS1;
    s = sqrt(t);
    w = p / q;
    t = pio2 - (double) 2.0 * (s + s * (double) w);
    if (hx > 0) return t; else return -t;
}