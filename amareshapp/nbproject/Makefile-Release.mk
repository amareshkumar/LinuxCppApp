#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin_4.x-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/1472/MyLogger.o \
	${OBJECTDIR}/_ext/1472/MyString.o \
	${OBJECTDIR}/_ext/1472/TestLogic.o \
	${OBJECTDIR}/_ext/1472/Tiger.o \
	${OBJECTDIR}/_ext/1472/main.o \
	${OBJECTDIR}/_ext/1472/my_utilities.o \
	${OBJECTDIR}/_ext/1472/reversal.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/amareshapp.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/amareshapp.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/amareshapp ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/_ext/1472/MyLogger.o: ../MyLogger.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1472
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1472/MyLogger.o ../MyLogger.cpp

${OBJECTDIR}/_ext/1472/MyString.o: ../MyString.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1472
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1472/MyString.o ../MyString.cpp

${OBJECTDIR}/_ext/1472/TestLogic.o: ../TestLogic.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1472
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1472/TestLogic.o ../TestLogic.cpp

${OBJECTDIR}/_ext/1472/Tiger.o: ../Tiger.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1472
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1472/Tiger.o ../Tiger.cpp

${OBJECTDIR}/_ext/1472/main.o: ../main.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1472
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1472/main.o ../main.cpp

${OBJECTDIR}/_ext/1472/my_utilities.o: ../my_utilities.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1472
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1472/my_utilities.o ../my_utilities.cpp

${OBJECTDIR}/_ext/1472/reversal.o: ../reversal.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1472
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1472/reversal.o ../reversal.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/amareshapp.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
