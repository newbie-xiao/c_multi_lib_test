#ifndef XSF_A_H
#define XSF_A_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef XXX_EXPORT
#define XXX_EXPORT __attribute__((visibility ("default")))
#endif
#ifndef XXX_LOCAL
#define XXX_LOCAL __attribute__((visibility("hidden")))
#endif

XXX_EXPORT void print_a();

#ifdef __cplusplus
}
#endif

#endif //XSF_A_H
