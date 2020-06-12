######################################################################
# Automatically generated by qmake (3.1) Fri Jun 12 20:24:14 2020
######################################################################

TEMPLATE = app
TARGET = colorcraft
INCLUDEPATH += .

# The following define makes your compiler warn you if you use any
# feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# Input
HEADERS += ui_assignmentsDialog.h \
           ui_availabilitycheckview.h \
           ui_coloringdialog.h \
           ui_mainwindow.h \
           ui_professorsdialog.h \
           ui_subjectchangedialog.h \
           ui_subjectinputdialog.h \
           ui_subjectsdialog.h \
           headers/assignment.h \
           headers/builder.h \
           headers/coloring.h \
           headers/comboBoxHandler.h \
           headers/dbHandler.h \
           headers/gridHandler.h \
           headers/node.h \
           headers/painter.h \
           headers/parser.h \
           headers/professor.h \
           headers/subject.h \
           headers/system.h \
           headers/uiHandler.h \
           windows/assignmentsDialog.h \
           windows/availabilityCheckView.h \
           windows/coloringdialog.h \
           windows/mainwindow.h \
           windows/newAssignmentDialog.h \
           windows/professorsDialog.h \
           windows/subjectChangeDialog.h \
           windows/subjectinputdialog.h \
           windows/subjectsdialog.h
FORMS += assignmentsDialog.ui \
         availabilitycheckview.ui \
         coloringdialog.ui \
         mainwindow.ui \
         newassignmentdialog.ui \
         professorsdialog.ui \
         subjectchangedialog.ui \
         subjectinputdialog.ui \
         subjectsdialog.ui
SOURCES += main.cpp \
           src/assignment.cpp \
           src/builder.cpp \
           src/coloring.cpp \
           src/comboBoxHandler.cpp \
           src/dbHandler.cpp \
           src/gridHandler.cpp \
           src/node.cpp \
           src/painter.cpp \
           src/parser.cpp \
           src/professor.cpp \
           src/subject.cpp \
           src/system.cpp \
           src/uiHandler.cpp \
           windows/assignmentsDialog.cpp \
           windows/availabilityCheckView.cpp \
           windows/coloringdialog.cpp \
           windows/mainwindow.cpp \
           windows/newAssignmentDialog.cpp \
           windows/professorsDialog.cpp \
           windows/subjectChangeDialog.cpp \
           windows/subjectinputdialog.cpp \
           windows/subjectsdialog.cpp

           QT += sql
           QT += widgets
           VPATH += src
           VPATH += windows
           INCLUDEPATH += headers
           INCLUDEPATH += windows
           OBJECTS_DIR = ./obj
           LIBS	    += -lsqlite3
