#ifndef XSF_MATH_H
#define XSF_MATH_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef XXX_EXPORT
#define XXX_EXPORT __attribute__((visibility ("default")))
#endif
#ifndef XXX_LOCAL
#define XXX_LOCAL __attribute__((visibility("hidden")))
#endif

double add(double a, double b);//加法
double sub(double a, double b);//减法
double mul(double a, double b);//乘法
double div(double a, double b);//除法
void print();
void math_a_test();
#ifdef __cplusplus
}
#endif

#endif //XSF_MATH_H
