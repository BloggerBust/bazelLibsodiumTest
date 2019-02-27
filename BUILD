load("@rules_foreign_cc//tools/build_defs:configure.bzl", "configure_make")
configure_make(
    name = "libsodium_configure",
    lib_source = "@org_libsodium//:libsodium_all",
    configure_command = "configure",
    configure_in_place = False,
    out_lib_dir = "lib",
    shared_libraries = ["libsodium.so"],
    visibility = ["//visibility:public"]
    
)

load("@rules_foreign_cc//tools/build_defs:cmake.bzl", "cmake_external")
cmake_external(
    name = "libsodium_make",
    lib_source = "@org_libsodium//:libsodium_all",
    deps = [":libsodium_configure"],
    visibility = ["//visibility:public"]
)
