# minimal_test_package
This package contains a mixture of nosetests(unittest) and gtest
was used for checking https://github.com/ros-industrial/industrial_ci/pull/504


## Usage
```
colcon build --cmake-target tests && colcon test && colcon test-result --all --verbose
```