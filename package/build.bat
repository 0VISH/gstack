@echo off

set outputDir=bin\win
if not exist %outputDir% mkdir %outputDir%

cl /nologo /EHsc package\main.cc /Fo:%outputDir%\package.obj /Fe:%outputDir%\package.exe