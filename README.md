# Cpp Cmake template
- Cmake, make 用

# Ubuntu
`
sudo apt-get update
sudo apt-get install cmake make
sudo apt-get install -y build-essential
`

# Git
`
git init 
git remote add origin https://github.com/kuru-bushi/Cpp.git
git checkout -b main
git checkout -b main
git fetch # 必要..?
git add .
git commit -m "comment"
git push origin main
`

# Cmake
cd src/templateApp
cmake -S . -B ../../build
cd ../../build
make
Main # add_executable に書かれたプロジェクトの名前

# Cmake torch
cmake .. -DCMAKE_PREFIX_PATH=../include/libtorch

# nvidia
https://blog.mahoroi.com/posts/2019/12/docker-gpus-nvidia/

# コマンド
sudo docker run --rm --gpus all nvidia/cuda:12.3.2-cudnn9-runtime-ubuntu22.04 nvidia-smi
sudo docker run -v ./:/home --name test_cpp --gpus all nvidia/cuda:12.3.2-cudnn9-runtime-ubuntu22.04 nvidia-smi 
sudo docker run -v ./:/home --name test_cpp --gpus all ubuntu:latest /bin/bash

- 動いた
    sudo docker run -v ./:/home -it  --name tst --gpus all ubuntu:latest 



/bin/bash とは
コンテナを起動して最初に動かすコマンド
# docker 基礎
docker build ./
    - Dockerfile をビルドする

# 環境
nvidia-smi

```
Sat Mar 30 04:25:46 2024       
+---------------------------------------------------------------------------------------+
| NVIDIA-SMI 545.23.07              Driver Version: 546.12       CUDA Version: 12.3     |
|-----------------------------------------+----------------------+----------------------+
| GPU  Name                 Persistence-M | Bus-Id        Disp.A | Volatile Uncorr. ECC |
| Fan  Temp   Perf          Pwr:Usage/Cap |         Memory-Usage | GPU-Util  Compute M. |
|                                         |                      |               MIG M. |
|=========================================+======================+======================|
|   0  NVIDIA GeForce RTX 3080        On  | 00000000:01:00.0  On |                  N/A |
| 30%   33C    P8              27W / 320W |   1092MiB / 10240MiB |      7%      Default |
|                                         |                      |                  N/A |
+-----------------------------------------+----------------------+----------------------+
                                                                                         
+---------------------------------------------------------------------------------------+
| Processes:                                                                            |
|  GPU   GI   CI        PID   Type   Process name                            GPU Memory |
|        ID   ID                                                             Usage      |
|=======================================================================================|
|  No running processes found                                                           |
+---------------------------------------------------------------------------------------+
```
```
root@6c0a153d4a93:/home/src/torch_tutorial# cmake .. -DCMAKE_PREFIX_PATH=/home/include/libtorch
CMake Error: The source directory "/home/src" does not appear to contain CMakeLists.txt.
Specify --help for usage, or press the help button on the CMake GUI.
root@6c0a153d4a93:/home/src/torch_tutorial# cd build/
root@6c0a153d4a93:/home/src/torch_tutorial/build# cmake .. -DCMAKE_PREFIX_PATH=/home/include/libtorch
-- The CXX compiler identification is GNU 11.4.0
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/g++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
CUDA_TOOLKIT_ROOT_DIR not found or specified
-- Could NOT find CUDA (missing: CUDA_TOOLKIT_ROOT_DIR CUDA_NVCC_EXECUTABLE CUDA_INCLUDE_DIRS CUDA_CUDART_LIBRARY) 
CMake Warning at /home/include/libtorch/share/cmake/Caffe2/public/cuda.cmake:31 (message):
  Caffe2: CUDA cannot be found.  Depending on whether you are building Caffe2
  or a Caffe2 dependent library, the next warning / error will give you more
  info.
Call Stack (most recent call first):
  /home/include/libtorch/share/cmake/Caffe2/Caffe2Config.cmake:87 (include)
  /home/include/libtorch/share/cmake/Torch/TorchConfig.cmake:68 (find_package)
  CMakeLists.txt:7 (find_package)


CMake Error at /home/include/libtorch/share/cmake/Caffe2/Caffe2Config.cmake:91 (message):
  Your installed Caffe2 version uses CUDA but I cannot find the CUDA
  libraries.  Please set the proper CUDA prefixes and / or install CUDA.
Call Stack (most recent call first):
  /home/include/libtorch/share/cmake/Torch/TorchConfig.cmake:68 (find_package)
  CMakeLists.txt:7 (find_package)


-- Configuring incomplete, errors occurred!
See also "/home/src/torch_tutorial/build/CMakeFiles/CMakeOutput.log".
```

### AwsLambda env(Mac)
- (参考) https://github.com/awslabs/aws-lambda-cpp/tree/master/examples/api-gateway
- (参考) https://dev.classmethod.jp/articles/aws-lambda-cpp-http-api/
`
brew install cmake
`

`
% git clone https://github.com/awslabs/aws-c-common
% cd aws-c-common
% mkdir build
% cd build
% cmake -DCMAKE_PREFIX_PATH=/usr/local/lib/cmake -DCMAKE_INSTALL_PREFIX=/usr/local/lib/cmake ../
% make
% make install
`

# 
`
% git clone https://github.com/awslabs/aws-checksums
% cd aws-checksums
% mkdir build
% cd build
% which cmake
% cmake -DCMAKE_PREFIX_PATH={cmake のパス} -DCMAKE_INSTALL_PREFIX={cmake のパス} ../
% make
% make install
`

% git clone https://github.com/awslabs/aws-c-common
% cd aws-c-common
% mkdir build
% cd build
% cmake -DCMAKE_PREFIX_PATH=/usr/local/lib/cmake -DCMAKE_INSTALL_PREFIX=/usr/local/lib/cmake ../
% make
% make install

cmake -DCMAKE_PREFIX_PATH=/opt/homebrew/bin/cmake -DCMAKE_INSTALL_PREFIX=/opt/homebrew/bin/cmake ..

`
mkdir AwsSdk & cd AwsSdk
git clone https://github.com/aws/aws-sdk-cpp.git
cd aws-sdk-cpp
cmake .. -DBUILD_ONLY="core" \
  -DCMAKE_BUILD_TYPE=Release \
  -DBUILD_SHARED_LIBS=OFF \
  -DCUSTOM_MEMORY_MANAGEMENT=OFF \
  -DCMAKE_INSTALL_PREFIX=~/installmkdir build & cd build
`


- 
- 

