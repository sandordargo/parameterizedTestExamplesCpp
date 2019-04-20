To compile and run your tests, you you will need:
  - make, cmake and a C++ compiler (like gcc) is installed on your system and is in the PATH
  - The GTest framework in the directory gtest.


More Verbose Instructions
-------------------------

Create a clone of both parameterizedTestExamplesCpp and googletest in a directory we'll call ${ROOT_INSTALL_DIR}:

    cd ${ROOT_INSTALL_DIR}
    git clone https://github.com/sandordargo/parameterizedTestExamplesCpp
    git clone https://github.com/google/googletest

Make googletest by running make in subfolder googletest/googletest/make:

    cd googletest/googletest/make
    make

Create a softlink in the parameterizedTestExamplesCpp clone pointing at the googletest code:

    cd ${ROOT_INSTALL_DIR}/parameterizedTestExamplesCpp
    ln -s ${ROOT_INSTALL_DIR}/googletest/googletest gtest

Make the parameterizedTestExamplesCpp:

    mkdir build
    cd build
    cmake -G "Unix Makefiles" ..
    make

Then you should be able to run the tests:

    ./ParameterizedTestExamples

If you have been successful, then you should see all the tests passing.
