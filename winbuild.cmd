@echo off
copy CMakeLists_Windows.txt CMakeLists.txt
del /s /q marcoin
echo d | xcopy /y /e \opt\marcoin marcoin
mkdir build
del /s /q build
cd build

cmake.exe -G  "Visual Studio 14 2015 Win64"  ..

msbuild MarcoinWallet.sln /p:Configuration=Release


