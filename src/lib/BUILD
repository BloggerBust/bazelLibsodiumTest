cc_library(
    name = "test_libsodium",
    srcs = glob(["*.cpp"]), 
    hdrs = glob(["*.h", "src/libsodium/include/sodium/**/*.h", "src/libsodium/include/**/*.h", "src/libsodium/**/*.h"]),
    copts = ["-DLOGGER_ENABLE", "-iquote external/org_libsodium/src/libsodium/include/sodium", "-iquote external/org_libsodium/src/libsodium/include", "-iquote external/org_libsodium/src/libsodium/"],
    deps = ["//:libsodium_make"],
    visibility = ["//visibility:public"]
)