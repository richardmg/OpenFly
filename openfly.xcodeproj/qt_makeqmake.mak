#############################################################################
# Makefile for building: openfly.app/Contents/MacOS/openfly
# Generated by qmake (3.0) (Qt 5.0.0) on: Sat Nov 10 15:40:28 2012
# Project:  OpenFly.pro
# Template: app
# Command: /Volumes/Code/qt-shadowbuilds/qt-base-ios-device/bin/qmake -spec macx-xcode -o openfly.xcodeproj/project.pbxproj OpenFly.pro
#############################################################################

QMAKE    = /Volumes/Code/qt-shadowbuilds/qt-base-ios-device/bin/qmake
openfly.xcodeproj/project.pbxproj: OpenFly.pro ../../../qt-src/qt-base-ios/mkspecs/features/spec_pre.prf \
		../../../qt-src/qt-base-ios/mkspecs/common/shell-unix.conf \
		../../../qt-src/qt-base-ios/mkspecs/common/unix.conf \
		../../../qt-src/qt-base-ios/mkspecs/common/mac.conf \
		../../../qt-src/qt-base-ios/mkspecs/common/gcc-base.conf \
		../../../qt-src/qt-base-ios/mkspecs/common/gcc-base-macx.conf \
		../../../qt-src/qt-base-ios/mkspecs/common/g++-base.conf \
		../../../qt-src/qt-base-ios/mkspecs/common/g++-macx.conf \
		../../../qt-src/qt-base-ios/mkspecs/common/mac-minimum-version.conf \
		../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/qconfig.pri \
		../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules-inst/qt_lib_concurrent.pri \
		../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules/qt_lib_concurrent.pri \
		../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules-inst/qt_lib_core.pri \
		../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules/qt_lib_core.pri \
		../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules-inst/qt_lib_declarative.pri \
		../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules/qt_lib_declarative.pri \
		../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules-inst/qt_lib_gui.pri \
		../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules/qt_lib_gui.pri \
		../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules-inst/qt_lib_network.pri \
		../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules/qt_lib_network.pri \
		../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules-inst/qt_lib_opengl.pri \
		../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules/qt_lib_opengl.pri \
		../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules-inst/qt_lib_platformsupport.pri \
		../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules/qt_lib_platformsupport.pri \
		../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules-inst/qt_lib_printsupport.pri \
		../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules/qt_lib_printsupport.pri \
		../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules-inst/qt_lib_script.pri \
		../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules/qt_lib_script.pri \
		../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules-inst/qt_lib_scripttools.pri \
		../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules/qt_lib_scripttools.pri \
		../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules-inst/qt_lib_sql.pri \
		../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules/qt_lib_sql.pri \
		../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules-inst/qt_lib_testlib.pri \
		../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules/qt_lib_testlib.pri \
		../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules-inst/qt_lib_widgets.pri \
		../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules/qt_lib_widgets.pri \
		../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules-inst/qt_lib_xml.pri \
		../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules/qt_lib_xml.pri \
		../../../qt-src/qt-base-ios/mkspecs/features/qt_functions.prf \
		../../../qt-src/qt-base-ios/mkspecs/features/qt_config.prf \
		../../../qt-src/qt-base-ios/mkspecs/macx-xcode/qmake.conf \
		../../../qt-src/qt-base-ios/mkspecs/features/spec_post.prf \
		../../../qt-src/qt-base-ios/mkspecs/features/exclusive_builds.prf \
		../../../qt-src/qt-base-ios/mkspecs/features/default_pre.prf \
		../../../qt-src/qt-base-ios/mkspecs/features/unix/default_pre.prf \
		../../../qt-src/qt-base-ios/mkspecs/features/mac/default_pre.prf \
		../../../qt-src/qt-base-ios/mkspecs/features/debug.prf \
		../../../qt-src/qt-base-ios/mkspecs/features/default_post.prf \
		../../../qt-src/qt-base-ios/mkspecs/features/mac/default_post.prf \
		../../../qt-src/qt-base-ios/mkspecs/features/mac/objective_c.prf \
		../../../qt-src/qt-base-ios/mkspecs/features/static.prf \
		../../../qt-src/qt-base-ios/mkspecs/features/warn_on.prf \
		../../../qt-src/qt-base-ios/mkspecs/features/qt.prf \
		../../../qt-src/qt-base-ios/mkspecs/features/resources.prf \
		../../../qt-src/qt-base-ios/mkspecs/features/moc.prf \
		../../../qt-src/qt-base-ios/mkspecs/features/unix/opengl.prf \
		../../../qt-src/qt-base-ios/mkspecs/features/uic.prf \
		../../../qt-src/qt-base-ios/mkspecs/features/unix/thread.prf \
		../../../qt-src/qt-base-ios/mkspecs/features/mac/rez.prf \
		../../../qt-src/qt-base-ios/mkspecs/features/mac/sdk.prf \
		../../../qt-src/qt-base-ios/mkspecs/features/exceptions.prf \
		../../../qt-src/qt-base-ios/mkspecs/features/yacc.prf \
		../../../qt-src/qt-base-ios/mkspecs/features/lex.prf \
		../OpenFly.pro \
		../fly.qrc \
		/Volumes/Code/qt-shadowbuilds/qt-base-ios-device/lib/libQtDeclarative_debug.prl \
		/Volumes/Code/qt-shadowbuilds/qt-base-ios-device/lib/libQtWidgets_debug.prl \
		/Volumes/Code/qt-shadowbuilds/qt-base-ios-device/lib/libQtGui_debug.prl \
		/Volumes/Code/qt-shadowbuilds/qt-base-ios-device/lib/libQtCore_debug.prl \
		/Volumes/Code/qt-shadowbuilds/qt-base-ios-device/lib/libQtNetwork_debug.prl \
		/Volumes/Code/qt-shadowbuilds/qt-base-ios-device/lib/libQtSql_debug.prl \
		/Volumes/Code/qt-shadowbuilds/qt-base-ios-device/lib/libQtScript_debug.prl
	$(QMAKE) -spec macx-xcode -o openfly.xcodeproj/project.pbxproj OpenFly.pro
../../../qt-src/qt-base-ios/mkspecs/features/spec_pre.prf:
../../../qt-src/qt-base-ios/mkspecs/common/shell-unix.conf:
../../../qt-src/qt-base-ios/mkspecs/common/unix.conf:
../../../qt-src/qt-base-ios/mkspecs/common/mac.conf:
../../../qt-src/qt-base-ios/mkspecs/common/gcc-base.conf:
../../../qt-src/qt-base-ios/mkspecs/common/gcc-base-macx.conf:
../../../qt-src/qt-base-ios/mkspecs/common/g++-base.conf:
../../../qt-src/qt-base-ios/mkspecs/common/g++-macx.conf:
../../../qt-src/qt-base-ios/mkspecs/common/mac-minimum-version.conf:
../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/qconfig.pri:
../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules-inst/qt_lib_concurrent.pri:
../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules/qt_lib_concurrent.pri:
../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules-inst/qt_lib_core.pri:
../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules/qt_lib_core.pri:
../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules-inst/qt_lib_declarative.pri:
../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules/qt_lib_declarative.pri:
../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules-inst/qt_lib_gui.pri:
../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules/qt_lib_gui.pri:
../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules-inst/qt_lib_network.pri:
../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules/qt_lib_network.pri:
../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules-inst/qt_lib_opengl.pri:
../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules/qt_lib_opengl.pri:
../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules-inst/qt_lib_platformsupport.pri:
../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules/qt_lib_platformsupport.pri:
../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules-inst/qt_lib_printsupport.pri:
../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules/qt_lib_printsupport.pri:
../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules-inst/qt_lib_script.pri:
../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules/qt_lib_script.pri:
../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules-inst/qt_lib_scripttools.pri:
../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules/qt_lib_scripttools.pri:
../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules-inst/qt_lib_sql.pri:
../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules/qt_lib_sql.pri:
../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules-inst/qt_lib_testlib.pri:
../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules/qt_lib_testlib.pri:
../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules-inst/qt_lib_widgets.pri:
../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules/qt_lib_widgets.pri:
../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules-inst/qt_lib_xml.pri:
../../../qt-shadowbuilds/qt-base-ios-device/mkspecs/modules/qt_lib_xml.pri:
../../../qt-src/qt-base-ios/mkspecs/features/qt_functions.prf:
../../../qt-src/qt-base-ios/mkspecs/features/qt_config.prf:
../../../qt-src/qt-base-ios/mkspecs/macx-xcode/qmake.conf:
../../../qt-src/qt-base-ios/mkspecs/features/spec_post.prf:
../../../qt-src/qt-base-ios/mkspecs/features/exclusive_builds.prf:
../../../qt-src/qt-base-ios/mkspecs/features/default_pre.prf:
../../../qt-src/qt-base-ios/mkspecs/features/unix/default_pre.prf:
../../../qt-src/qt-base-ios/mkspecs/features/mac/default_pre.prf:
../../../qt-src/qt-base-ios/mkspecs/features/debug.prf:
../../../qt-src/qt-base-ios/mkspecs/features/default_post.prf:
../../../qt-src/qt-base-ios/mkspecs/features/mac/default_post.prf:
../../../qt-src/qt-base-ios/mkspecs/features/mac/objective_c.prf:
../../../qt-src/qt-base-ios/mkspecs/features/static.prf:
../../../qt-src/qt-base-ios/mkspecs/features/warn_on.prf:
../../../qt-src/qt-base-ios/mkspecs/features/qt.prf:
../../../qt-src/qt-base-ios/mkspecs/features/resources.prf:
../../../qt-src/qt-base-ios/mkspecs/features/moc.prf:
../../../qt-src/qt-base-ios/mkspecs/features/unix/opengl.prf:
../../../qt-src/qt-base-ios/mkspecs/features/uic.prf:
../../../qt-src/qt-base-ios/mkspecs/features/unix/thread.prf:
../../../qt-src/qt-base-ios/mkspecs/features/mac/rez.prf:
../../../qt-src/qt-base-ios/mkspecs/features/mac/sdk.prf:
../../../qt-src/qt-base-ios/mkspecs/features/exceptions.prf:
../../../qt-src/qt-base-ios/mkspecs/features/yacc.prf:
../../../qt-src/qt-base-ios/mkspecs/features/lex.prf:
../OpenFly.pro:
../fly.qrc:
/Volumes/Code/qt-shadowbuilds/qt-base-ios-device/lib/libQtDeclarative_debug.prl:
/Volumes/Code/qt-shadowbuilds/qt-base-ios-device/lib/libQtWidgets_debug.prl:
/Volumes/Code/qt-shadowbuilds/qt-base-ios-device/lib/libQtGui_debug.prl:
/Volumes/Code/qt-shadowbuilds/qt-base-ios-device/lib/libQtCore_debug.prl:
/Volumes/Code/qt-shadowbuilds/qt-base-ios-device/lib/libQtNetwork_debug.prl:
/Volumes/Code/qt-shadowbuilds/qt-base-ios-device/lib/libQtSql_debug.prl:
/Volumes/Code/qt-shadowbuilds/qt-base-ios-device/lib/libQtScript_debug.prl:
qmake: FORCE
	@$(QMAKE) -spec macx-xcode -o openfly.xcodeproj/project.pbxproj OpenFly.pro

qmake_all: FORCE
