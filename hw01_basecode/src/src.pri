INCLUDEPATH += $$PWD
DEPENDPATH += $$PWD
#LIBS += -L$$PWD/lib -ltbb

SOURCES += \
    $$PWD/main.cpp \
    $$PWD/mainwindow.cpp \
    $$PWD/mygl.cpp \
    $$PWD/scene/camera.cpp \
    $$PWD/scene/scene.cpp \
    $$PWD/scene/geometry/cube.cpp \
    $$PWD/scene/geometry/mesh.cpp \
    $$PWD/scene/geometry/sphere.cpp \
    $$PWD/openGL/drawable.cpp \
    $$PWD/openGL/glwidget277.cpp \
    $$PWD/openGL/shaderprogram.cpp \
    $$PWD/raytracing/intersection.cpp \
    $$PWD/raytracing/ray.cpp \
    $$PWD/scene/transform.cpp \
    $$PWD/scene/geometry/square.cpp \
    $$PWD/tinyobj/tiny_obj_loader.cc \
    $$PWD/scene/materials/material.cpp \
    $$PWD/raytracing/film.cpp \
    $$PWD/raytracing/integrator.cpp \
    $$PWD/cameracontrolshelp.cpp \
    $$PWD/scene/materials/phongmaterial.cpp \
    $$PWD/scene/materials/lambertmaterial.cpp \
    $$PWD/scene/jsonreader.cpp

HEADERS += \
    $$PWD/mainwindow.h \
    $$PWD/mygl.h \
    $$PWD/scene/camera.h \
    $$PWD/la.h \
    $$PWD/drawable.h \
    $$PWD/scene/scene.h \
    $$PWD/scene/geometry/cube.h \
    $$PWD/scene/geometry/geometry.h \
    $$PWD/scene/geometry/mesh.h \
    $$PWD/scene/geometry/sphere.h \
    $$PWD/openGL/drawable.h \
    $$PWD/openGL/glwidget277.h \
    $$PWD/openGL/shaderprogram.h \
    $$PWD/raytracing/intersection.h \
    $$PWD/raytracing/ray.h \
    $$PWD/scene/transform.h \
    $$PWD/scene/geometry/square.h \
    $$PWD/tinyobj/tiny_obj_loader.h \
    $$PWD/scene/materials/material.h \
    $$PWD/raytracing/film.h \
    $$PWD/raytracing/integrator.h \
    $$PWD/cameracontrolshelp.h \
    $$PWD/scene/materials/lambertmaterial.h \
    $$PWD/scene/materials/phongmaterial.h \
    $$PWD/scene/jsonreader.h \
    $$PWD/scene/intersectable.h
