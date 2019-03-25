((nil . ((projectile-project-compilation-cmd . "env TMPDIR=~/dev/tmp bazel build --experimental_cc_skylark_api_enabled_packages=@rules_foreign_cc//tools/build_defs,tools/build_defs,@foreign_cc_impl //src:main --verbose_failures --sandbox_debug")
         (projectile-project-run-cmd . "bazel run --experimental_cc_skylark_api_enabled_packages=@rules_foreign_cc//tools/build_defs,tools/build_defs,@foreign_cc_impl //src:main")
         ))
 )
