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


