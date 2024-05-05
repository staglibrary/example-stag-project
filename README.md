# Example STAG Project

This repository demonstrates how to configure your C++ project to use the STAG library.

## Installing STAG Dependencies

Before using STAG in your project, you should install the following dependencies.

- [Eigen](https://eigen.tuxfamily.org/index.php?title=Main_Page) (version >= 3.1)
- [Spectra](https://spectralib.org/) (version >= 1.0.1)

You should refer to their documentation for installation instructions,
although the following should work on a standard linux system.

```bash
# Create a directory to work in
mkdir libraries
cd libraries

# Install Eigen
wget https://gitlab.com/libeigen/eigen/-/archive/3.4.0/eigen-3.4.0.tar.gz
tar xzvf eigen-3.4.0.tar.gz
cd eigen-3.4.0
mkdir build_dir
cd build_dir
cmake ..
sudo make install
cd ../..

# Install Spectra
wget https://github.com/yixuan/spectra/archive/v1.0.1.tar.gz
tar xzvf v1.0.1.tar.gz
cd spectra-1.0.1
mkdir build_dir
cd build_dir
cmake ..
sudo make install
cd ../..
```

## Installing STAG

You should download the latest version of the STAG library. For example:

```bash
wget https://github.com/staglibrary/stag/archive/refs/tags/v2.0.0.tar.gz
tar xzvf v2.0.0.tar.gz
cd stag-2.0.0
```

Then, you can build and install STAG with cmake.

```bash
mkdir build_dir
cd build_dir
cmake ..
sudo make install
```

## Building and Running the Example

Now you have installed STAG, you can build this project with cmake. From the root directory of this repository:

```bash
cmake -B build -S .
cmake --build build
```

Now, you can run the compiled executable.

```bash
cd build
./example_stag_project
```
