workspace(name = "com_github_bloggerbust_bazelLibsodiumTest")
load('@bazel_tools//tools/build_defs/repo:http.bzl', 'http_archive')

# For bazel 0.23 and above get master archive
# http_archive(
#    name = "rules_foreign_cc",
#    strip_prefix = "rules_foreign_cc-master",
#    url = "https://github.com/bazelbuild/rules_foreign_cc/archive/master.zip",
#    sha256 = "SET THIS TO CURRENT sha 256 hash of master.zip"
# )

# for bazel 0.22 and below use last supported commit
http_archive(
   name = "rules_foreign_cc",
   strip_prefix = "rules_foreign_cc-a3593905f73ce19c09d21f9968f1d3f5bc115157",
   url = "https://github.com/bazelbuild/rules_foreign_cc/archive/a3593905f73ce19c09d21f9968f1d3f5bc115157.zip",
   sha256 = "6f3484eacc172c90d605e79130f9f01ec827a98b99c499c396eddc597a9c219d"
)

load("@rules_foreign_cc//:workspace_definitions.bzl", "rules_foreign_cc_dependencies")
rules_foreign_cc_dependencies()

all_content = """filegroup(name = "libsodium_all", srcs = glob(["**"]), visibility = ["//visibility:public"])"""

http_archive(
  name = "org_libsodium",
  url = "https://github.com/jedisct1/libsodium/releases/download/1.0.17/libsodium-1.0.17.tar.gz",
  sha256 = "0cc3dae33e642cc187b5ceb467e0ad0e1b51dcba577de1190e9ffa17766ac2b1",
  strip_prefix = "libsodium-1.0.17",
  build_file_content = all_content
)