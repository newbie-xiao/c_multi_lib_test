#ifndef XSF_B_H
#define XSF_B_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef XXX_EXPORT
#define XXX_EXPORT __attribute__((visibility ("default")))
#endif
#ifndef XXX_LOCAL
#define XXX_LOCAL __attribute__((visibility("hidden")))
#endif

XXX_EXPORT void print_b();

#ifdef __cplusplus
}
#endif

#endif //XSF_B_H
