import os

from conans import ConanFile, CMake, tools, RunEnvironment


class BelgradeInternshipTestPackage(ConanFile):
    name = "belgrade_internship_test_package"
    description = "Conan test_package example for the Belgrade internship program."
    settings = "os", "compiler", "build_type", "arch", "toolchain"
    generators = "cmake", "cmake_find_package"

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()

    def test(self):
        if not tools.cross_building(self.settings):
            self.output.info(f"Current working directory: {os.getcwd()}")
            self.run(
                f"ctest --build-config {self.settings.build_type} -j {tools.cpu_count()} --output-on-failure",
                run_environment=True,
            )
