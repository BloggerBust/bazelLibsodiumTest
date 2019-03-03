load("@rules_foreign_cc//tools/build_defs:configure.bzl", "configure_make")
configure_make(
    name = "libsodium_configure",
    lib_source = "@org_libsodium//:libsodium_all",
    out_lib_dir = "lib",
    shared_libraries = ["libsodium.so.23"],
    visibility = ["//visibility:public"]
    
)