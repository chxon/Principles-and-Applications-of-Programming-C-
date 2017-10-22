cmake_minimum_required(VERSION 3.8)
project(ChinTamagotchi)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        bin/ChinTamagotchiDebug.app/Contents/Frameworks/GLUT.framework/Versions/A/Headers/copy.h
        bin/ChinTamagotchiDebug.app/Contents/Frameworks/GLUT.framework/Versions/A/Headers/extrude.h
        bin/ChinTamagotchiDebug.app/Contents/Frameworks/GLUT.framework/Versions/A/Headers/glsmap.h
        bin/ChinTamagotchiDebug.app/Contents/Frameworks/GLUT.framework/Versions/A/Headers/glsmapint.h
        bin/ChinTamagotchiDebug.app/Contents/Frameworks/GLUT.framework/Versions/A/Headers/glut.h
        bin/ChinTamagotchiDebug.app/Contents/Frameworks/GLUT.framework/Versions/A/Headers/glutbitmap.h
        bin/ChinTamagotchiDebug.app/Contents/Frameworks/GLUT.framework/Versions/A/Headers/glutf90.h
        bin/ChinTamagotchiDebug.app/Contents/Frameworks/GLUT.framework/Versions/A/Headers/glutstroke.h
        bin/ChinTamagotchiDebug.app/Contents/Frameworks/GLUT.framework/Versions/A/Headers/gutil.h
        bin/ChinTamagotchiDebug.app/Contents/Frameworks/GLUT.framework/Versions/A/Headers/intersect.h
        bin/ChinTamagotchiDebug.app/Contents/Frameworks/GLUT.framework/Versions/A/Headers/port.h
        bin/ChinTamagotchiDebug.app/Contents/Frameworks/GLUT.framework/Versions/A/Headers/rot.h
        bin/ChinTamagotchiDebug.app/Contents/Frameworks/GLUT.framework/Versions/A/Headers/segment.h
        bin/ChinTamagotchiDebug.app/Contents/Frameworks/GLUT.framework/Versions/A/Headers/tube.h
        bin/ChinTamagotchiDebug.app/Contents/Frameworks/GLUT.framework/Versions/A/Headers/tube_gc.h
        bin/ChinTamagotchiDebug.app/Contents/Frameworks/GLUT.framework/Versions/A/Headers/vvector.h
        bin/ChinTamagotchiDebug.app/Contents/Frameworks/GLUT.framework/Versions/Current/Headers/copy.h
        bin/ChinTamagotchiDebug.app/Contents/Frameworks/GLUT.framework/Versions/Current/Headers/extrude.h
        bin/ChinTamagotchiDebug.app/Contents/Frameworks/GLUT.framework/Versions/Current/Headers/glsmap.h
        bin/ChinTamagotchiDebug.app/Contents/Frameworks/GLUT.framework/Versions/Current/Headers/glsmapint.h
        bin/ChinTamagotchiDebug.app/Contents/Frameworks/GLUT.framework/Versions/Current/Headers/glut.h
        bin/ChinTamagotchiDebug.app/Contents/Frameworks/GLUT.framework/Versions/Current/Headers/glutbitmap.h
        bin/ChinTamagotchiDebug.app/Contents/Frameworks/GLUT.framework/Versions/Current/Headers/glutf90.h
        bin/ChinTamagotchiDebug.app/Contents/Frameworks/GLUT.framework/Versions/Current/Headers/glutstroke.h
        bin/ChinTamagotchiDebug.app/Contents/Frameworks/GLUT.framework/Versions/Current/Headers/gutil.h
        bin/ChinTamagotchiDebug.app/Contents/Frameworks/GLUT.framework/Versions/Current/Headers/intersect.h
        bin/ChinTamagotchiDebug.app/Contents/Frameworks/GLUT.framework/Versions/Current/Headers/port.h
        bin/ChinTamagotchiDebug.app/Contents/Frameworks/GLUT.framework/Versions/Current/Headers/rot.h
        bin/ChinTamagotchiDebug.app/Contents/Frameworks/GLUT.framework/Versions/Current/Headers/segment.h
        bin/ChinTamagotchiDebug.app/Contents/Frameworks/GLUT.framework/Versions/Current/Headers/tube.h
        bin/ChinTamagotchiDebug.app/Contents/Frameworks/GLUT.framework/Versions/Current/Headers/tube_gc.h
        bin/ChinTamagotchiDebug.app/Contents/Frameworks/GLUT.framework/Versions/Current/Headers/vvector.h
        src/main.cpp
        src/ofApp.cpp
        src/ofApp.h)

add_executable(ChinTamagotchi ${SOURCE_FILES})