
############# Target type (Debug/Release)  ##################
############################################################
CPPCompileDebug=-O0 -g
CPPCompileRelease=-O0
LinkDebug=-g
LinkRelease=

ifeq ($(HAM_BUILD_VERSION), Debug)
CPPCompileRelease=$(CPPCompileDebug)
LinkRelease=$(LinkDebug)
endif
ifeq ($(HAM_BUILD_VERSION), Release)
CPPCompileDebug=$(CPPCompileRelease)
LinkDebug=$(LinkRelease)
endif

ConfigurationCPPCompileSwitches=   -I. -I$(OMROOT) -I$(OMROOT)/LangCpp -I$(OMROOT)/LangCpp/oxf -DVxWorks $(INST_FLAGS) $(INCLUDE_PATH) $(CPPCompileRelease) -c 

##################################################
######### Definitions and flags ##################
##################################################
CPU = PPC32
TOOL = gnu

RHP_LIB_EXT = .a
RTP_SUFFIX = _RTP_
RTP_LIBS =  -L$(WIND_USR_LIB_PATH) -lstdc++ 

INCLUDE_QUALIFIER=-I
LIB_CMD=$(AR)
LIB_FLAGS=$(ARFLAGS)

LINK_CMD=$(CXX) $(CC_ARCH_SPEC)
LINK_FLAGS=$(LinkRelease) -MD -MP  



####################################################
############### Context generated macros ###########

FLAGSFILE=
RULESFILE=
OMROOT="S:/project/Nemo/Tools/Rhapsody/Share/7.0MR2_VxWorks6.3"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.o
EXE_EXT=.vxe
LIB_EXT=.a

INSTRUMENTATION=None

TIME_MODEL=RealTime

TARGET_TYPE=Library

TARGET_NAME=CMP_ULIB_BaseDefinitions

all : $(TARGET_NAME)$(LIB_EXT) CMP_ULIB_BaseDefinitions.mak

TARGET_MAIN=MainCMP_ULIB_BaseDefinitions

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/VxWorks

ADDITIONAL_OBJS=

OBJS= \
  CBase.o \
  CChecksum.o \
  CCountingSemaphore.o \
  CDevTrace.o \
  CHamObservableObject.o \
  CIERatio.o \
  CMutexSemaphore.o \
  CSharedData.o \
  CSignalSemaphore.o \
  CTransactionBasedFileStream.o \
  IHamObserver.o \
  CDateTime.o \
  CTime.o \
  CMessageQueue.o \
  CMemory.o \
  CSysTask.o \
  CDate.o \
  PSS_BaseDefinitions.o




OBJ_DIR=

ifeq ($(OBJ_DIR),)
CREATE_OBJ_DIR=
CLEAN_OBJ_DIR=
else
CREATE_OBJ_DIR= if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
CLEAN_OBJ_DIR= if exist $(OBJ_DIR) rmdir $(OBJ_DIR)
endif


####################################################
############### Predefined macros ##################
$(OBJS) :  $(INST_LIBS) $(OXF_LIBS)



ifeq ($(INSTRUMENTATION),Animation)
INST_FLAGS=-DOMANIMATOR -DUSE_IOSTREAM
INST_INCLUDES=-I$(OMROOT)/LangCpp/aom -I$(OMROOT)/LangCpp/tom
INST_LIBS= $(OMROOT)/LangCpp/lib/vxaomanim$(CPU)$(RTP_SUFFIX)$(TOOL)$(RHP_LIB_EXT)
OXF_LIBS=$(OMROOT)/LangCpp/lib/vxoxfinst$(CPU)$(RTP_SUFFIX)$(TOOL)$(RHP_LIB_EXT) $(OMROOT)/LangCpp/lib/vxomcomappl$(CPU)$(RTP_SUFFIX)$(TOOL)$(RHP_LIB_EXT)
SOCK_LIB=$(RTP_LIBS)
else
ifeq ($(INSTRUMENTATION),Tracing)
INST_FLAGS=-DOMTRACER -DUSE_IOSTREAM
INST_INCLUDES=-I$(OMROOT)/LangCpp/aom -I$(OMROOT)/LangCpp/tom
INST_LIBS=$(OMROOT)/LangCpp/lib/vxtomtrace$(CPU)$(RTP_SUFFIX)$(TOOL)$(RHP_LIB_EXT) $(OMROOT)/LangCpp/lib/vxaomtrace$(CPU)$(RTP_SUFFIX)$(TOOL)$(RHP_LIB_EXT)
OXF_LIBS= $(OMROOT)/LangCpp/lib/vxoxfinst$(CPU)$(RTP_SUFFIX)$(TOOL)$(RHP_LIB_EXT) $(OMROOT)/LangCpp/lib/vxomcomappl$(CPU)$(RTP_SUFFIX)$(TOOL)$(RHP_LIB_EXT)
SOCK_LIB=$(RTP_LIBS)
else
ifeq ($(INSTRUMENTATION),None)
INST_FLAGS=
INST_INCLUDES=
INST_LIBS=
OXF_LIBS=$(OMROOT)/LangCpp/lib/vxoxf$(CPU)$(RTP_SUFFIX)$(TOOL)$(RHP_LIB_EXT)
SOCK_LIB=$(RTP_LIBS)
else
echo 'An invalid Instrumentation $(INSTRUMENTATION) is specified.'
exit
endif
endif
endif



###############################################################
################## Context generated dependencies #############






CBase.o : CBase.cpp CBase.h    PSS_BaseDefinitions.h 
	@echo Compiling CBase.cpp
	$(CREATE_OBJ_DIR)
	@$(CXX) $(C++FLAGS) $(ConfigurationCPPCompileSwitches)  -o CBase.o CBase.cpp




CChecksum.o : CChecksum.cpp CChecksum.h    PSS_BaseDefinitions.h 
	@echo Compiling CChecksum.cpp
	$(CREATE_OBJ_DIR)
	@$(CXX) $(C++FLAGS) $(ConfigurationCPPCompileSwitches)  -o CChecksum.o CChecksum.cpp




CCountingSemaphore.o : CCountingSemaphore.cpp CCountingSemaphore.h    PSS_BaseDefinitions.h CBase.h 
	@echo Compiling CCountingSemaphore.cpp
	$(CREATE_OBJ_DIR)
	@$(CXX) $(C++FLAGS) $(ConfigurationCPPCompileSwitches)  -o CCountingSemaphore.o CCountingSemaphore.cpp




CDevTrace.o : CDevTrace.cpp CDevTrace.h    PSS_BaseDefinitions.h 
	@echo Compiling CDevTrace.cpp
	$(CREATE_OBJ_DIR)
	@$(CXX) $(C++FLAGS) $(ConfigurationCPPCompileSwitches)  -o CDevTrace.o CDevTrace.cpp




CHamObservableObject.o : CHamObservableObject.cpp CHamObservableObject.h    PSS_BaseDefinitions.h IHamObserver.h 
	@echo Compiling CHamObservableObject.cpp
	$(CREATE_OBJ_DIR)
	@$(CXX) $(C++FLAGS) $(ConfigurationCPPCompileSwitches)  -o CHamObservableObject.o CHamObservableObject.cpp




CIERatio.o : CIERatio.cpp CIERatio.h    PSS_BaseDefinitions.h 
	@echo Compiling CIERatio.cpp
	$(CREATE_OBJ_DIR)
	@$(CXX) $(C++FLAGS) $(ConfigurationCPPCompileSwitches)  -o CIERatio.o CIERatio.cpp




CMutexSemaphore.o : CMutexSemaphore.cpp CMutexSemaphore.h    PSS_BaseDefinitions.h CBase.h 
	@echo Compiling CMutexSemaphore.cpp
	$(CREATE_OBJ_DIR)
	@$(CXX) $(C++FLAGS) $(ConfigurationCPPCompileSwitches)  -o CMutexSemaphore.o CMutexSemaphore.cpp




CSharedData.o : CSharedData.cpp CSharedData.h    PSS_BaseDefinitions.h CMutexSemaphore.h CBase.h 
	@echo Compiling CSharedData.cpp
	$(CREATE_OBJ_DIR)
	@$(CXX) $(C++FLAGS) $(ConfigurationCPPCompileSwitches)  -o CSharedData.o CSharedData.cpp




CSignalSemaphore.o : CSignalSemaphore.cpp CSignalSemaphore.h    PSS_BaseDefinitions.h CBase.h 
	@echo Compiling CSignalSemaphore.cpp
	$(CREATE_OBJ_DIR)
	@$(CXX) $(C++FLAGS) $(ConfigurationCPPCompileSwitches)  -o CSignalSemaphore.o CSignalSemaphore.cpp




CTransactionBasedFileStream.o : CTransactionBasedFileStream.cpp CTransactionBasedFileStream.h    PSS_BaseDefinitions.h CMutexSemaphore.h CBase.h 
	@echo Compiling CTransactionBasedFileStream.cpp
	$(CREATE_OBJ_DIR)
	@$(CXX) $(C++FLAGS) $(ConfigurationCPPCompileSwitches)  -o CTransactionBasedFileStream.o CTransactionBasedFileStream.cpp




IHamObserver.o : IHamObserver.cpp IHamObserver.h    PSS_BaseDefinitions.h 
	@echo Compiling IHamObserver.cpp
	$(CREATE_OBJ_DIR)
	@$(CXX) $(C++FLAGS) $(ConfigurationCPPCompileSwitches)  -o IHamObserver.o IHamObserver.cpp




CDateTime.o : CDateTime.cpp CDateTime.h    PSS_BaseDefinitions.h 
	@echo Compiling CDateTime.cpp
	$(CREATE_OBJ_DIR)
	@$(CXX) $(C++FLAGS) $(ConfigurationCPPCompileSwitches)  -o CDateTime.o CDateTime.cpp




CTime.o : CTime.cpp CTime.h    PSS_BaseDefinitions.h 
	@echo Compiling CTime.cpp
	$(CREATE_OBJ_DIR)
	@$(CXX) $(C++FLAGS) $(ConfigurationCPPCompileSwitches)  -o CTime.o CTime.cpp




CMessageQueue.o : CMessageQueue.cpp CMessageQueue.h    PSS_BaseDefinitions.h 
	@echo Compiling CMessageQueue.cpp
	$(CREATE_OBJ_DIR)
	@$(CXX) $(C++FLAGS) $(ConfigurationCPPCompileSwitches)  -o CMessageQueue.o CMessageQueue.cpp




CMemory.o : CMemory.cpp CMemory.h    PSS_BaseDefinitions.h 
	@echo Compiling CMemory.cpp
	$(CREATE_OBJ_DIR)
	@$(CXX) $(C++FLAGS) $(ConfigurationCPPCompileSwitches)  -o CMemory.o CMemory.cpp




CSysTask.o : CSysTask.cpp CSysTask.h    PSS_BaseDefinitions.h 
	@echo Compiling CSysTask.cpp
	$(CREATE_OBJ_DIR)
	@$(CXX) $(C++FLAGS) $(ConfigurationCPPCompileSwitches)  -o CSysTask.o CSysTask.cpp




CDate.o : CDate.cpp CDate.h    PSS_BaseDefinitions.h CDateTime.h 
	@echo Compiling CDate.cpp
	$(CREATE_OBJ_DIR)
	@$(CXX) $(C++FLAGS) $(ConfigurationCPPCompileSwitches)  -o CDate.o CDate.cpp




PSS_BaseDefinitions.o : PSS_BaseDefinitions.cpp PSS_BaseDefinitions.h    CBase.h CIERatio.h CDevTrace.h CTransactionBasedFileStream.h CMutexSemaphore.h CSharedData.h CSignalSemaphore.h CCountingSemaphore.h CChecksum.h CHamObservableObject.h IHamObserver.h CDateTime.h CTime.h CMessageQueue.h CSysTask.h CMemory.h CDate.h 
	@echo Compiling PSS_BaseDefinitions.cpp
	$(CREATE_OBJ_DIR)
	@$(CXX) $(C++FLAGS) $(ConfigurationCPPCompileSwitches)  -o PSS_BaseDefinitions.o PSS_BaseDefinitions.cpp







$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS) 
		@echo Compiling $(TARGET_MAIN)$(CPP_EXT)
		@$(CXX) $(C++FLAGS) $(ConfigurationCPPCompileSwitches) -o $(TARGET_MAIN)$(OBJ_EXT) $(TARGET_MAIN)$(CPP_EXT)

#################################################################
############ Predefined linking instructions #####################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) CMP_ULIB_BaseDefinitions.mak 
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	@$(LINK_CMD)  $(LINK_FLAGS) $(C++FLAGS) $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(INST_LIBS) \
	$(SOCK_LIB) -o $@ 

$(TARGET_NAME)$(RHP_LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) CMP_ULIB_BaseDefinitions.mak
	@echo Building library $@
	@$(LIB_CMD) $(LIB_FLAGS) $(TARGET_NAME)$(RHP_LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS)

clean:
cleanall: clean
	@echo Cleanup
	@echo BuildVersion= $(HAM_BUILD_VERSION)
	$(RM) $(TARGET_MAIN)$(OBJ_EXT)
	$(RM) $(TARGET_NAME)$(RHP_LIB_EXT)
	$(RM) $(TARGET_NAME)$(EXE_EXT)
	$(RM) CBase.o
	$(RM) CChecksum.o
	$(RM) CCountingSemaphore.o
	$(RM) CDevTrace.o
	$(RM) CHamObservableObject.o
	$(RM) CIERatio.o
	$(RM) CMutexSemaphore.o
	$(RM) CSharedData.o
	$(RM) CSignalSemaphore.o
	$(RM) CTransactionBasedFileStream.o
	$(RM) IHamObserver.o
	$(RM) CDateTime.o
	$(RM) CTime.o
	$(RM) CMessageQueue.o
	$(RM) CMemory.o
	$(RM) CSysTask.o
	$(RM) CDate.o
	$(RM) PSS_BaseDefinitions.o
	$(CLEAN_OBJ_DIR)
include $(WIND_USR)/make/rules.rtp
