from conans import ConanFile, CMake, tools, python_requires


class InternshipConanPackage(ConanFile):
    name = "belgrade_internship"
    description = "Conan package example for the Belgrade internship program."
    url = "https://github.com/StefanPantic-TomTom/belgrade-internship-cmake"
    license = "MIT"

    settings = "os", "compiler", "build_type", "arch", "toolchain"
    options = {
        "shared": [True, False],
        "fPIC": [True, False],
        "build_testing": [True, False],
    }
    default_options = {
        "shared": True,
        "fPIC": True,
        "build_testing": True,
    }
    generators = "cmake", "cmake_find_package"
    requires = (
        "boost/[>=1.75.0]",
        "fmt/[>=7.1.3]",
    )
    build_requires = (
        "cmake-modules/[>=1.0.0]@tomtom/stable",
        "gtest/[>=1.10.0]",
    )

    exports_sources = [
        "CMakeLists.txt",
        "project/*",
    ]

    def package_id(self):
        # This option doesn't affect the produced binary, so be careful not to force rebuilds downstream from us
        del self.info.options.build_testing

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()

        if self.options.build_testing and self.should_test:
            self.run(
                f"ctest --build-config {self.settings.build_type} -j {tools.cpu_count()} --output-on-failure",
                run_environment=True,
            )

    def package(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.install()

    def package_info(self):
        self.cpp_info.name = self.name
        self.cpp_info.names["cmake_find_package"] = self.name

        self.cpp_info.components["lib_a"].names["cmake"] = "lib_a"
        self.cpp_info.components["lib_a"].names["cmake_find_package"] = "lib_a"
        self.cpp_info.components["lib_a"].libs = ["lib_a"]
        self.cpp_info.components["lib_a"].libdirs = ["lib"]
        self.cpp_info.components["lib_a"].includedirs = ["lib_a/include"]
        self.cpp_info.components["lib_a"].requires = [
            "fmt::fmt",
        ]

        self.cpp_info.components["lib_b"].names["cmake"] = "lib_b"
        self.cpp_info.components["lib_b"].names["cmake_find_package"] = "lib_b"
        self.cpp_info.components["lib_b"].libs = ["lib_b"]
        self.cpp_info.components["lib_b"].libdirs = ["lib"]
        self.cpp_info.components["lib_b"].includedirs = ["lib_b/include"]
        self.cpp_info.components["lib_b"].requires = [
            "boost::boost",
            # Internal dependency
            "lib_a",
        ]
