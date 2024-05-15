cmake_minimum_required(VERSION 3.5)

project(Vertanom VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Sql)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Sql)

set(PROJECT_SOURCES
        main.cpp
        login.cpp
        login.h
        login.ui
        mainpage.cpp
        mainpage.h
        mainpage.ui
        detabase.cpp
        detabase.h
        detabase.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Vertanom
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        mainpage.h mainpage.cpp mainpage.ui
        detabase.h detabase.cpp detabase.ui
        login.h login.cpp login.ui
        resource.qrc
        userprofile.h userprofile.cpp userprofile.ui
        aboutpage.h aboutpage.cpp aboutpage.ui
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET Vertanom APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(Vertanom SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(Vertanom
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(Vertanom PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(Vertanom PRIVATE Qt${QT_VERSION_MAJOR}::Sql)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.Vertanom)
endif()
set_target_properties(Vertanom PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS Vertanom
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Vertanom)
endif()
