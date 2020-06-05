@echo off
git submodule update --init --recursive
rd /s /q Binaries
rd /s /q Build
rd /s /q Saved
rd /s /q Intermediate
rd /s /q .vs
del /s /q *.slo
del /s /q *.lo
del /s /q *.o
del /s /q *.obj
del /s /q *.gch
del /s /q *.pch
del /s /q *.so
del /s /q *.dylib
del /s /q *.dll
del /s /q *.mod
del /s /q *.lai
del /s /q *.la
del /s /q *.a
del /s /q *.lib
del /s /q *.exe
del /s /q *.out
del /s /q *.app
del /s /q *.ipa
del /s /q *.xcodeproj
del /s /q *.xcworkspace
del /s /q *.sln
del /s /q *.suo
del /s /q *.opensdf
del /s /q *.sdf
del /s /q *.VC.db
del /s /q *.VC.opendb
pause