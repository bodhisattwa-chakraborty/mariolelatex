OMROOT=S:/project/Nemo/Tools/Rhapsody/Share/7.0MR2_VxWorks6.3
INSTRUMENTATION=None 
LIBS+=-l:$(HAM_MDL_SHARE)/LangCpp/Lib/vxoxfPPC32_RTP_gnu.a -l:$(HAM_MDL_COMPONENTS)/CMP_ULIB_BaseDefinitions/VxWorks/CMP_ULIB_BaseDefinitions.a

RTP_SUFFIX = _RTP_

LIB_EXT=.a

TARGET_TYPE=Library

ConfigurationCPPCompileSwitches =    

ifeq ($(TOOL),diab)
ConfigurationCPPCompileSwitches += -ei1244,1521,1522,1606,4177,4193,4236,4340,4401,4445,4826 -DVxWorks $(CPPCompileDebug)
else
ifeq ($(TOOL),gnu)
ConfigurationCPPCompileSwitches += -fno-merge-templates -DVxWorks $(CPPCompileDebug)  
endif
endif

INCLUDE_QUALIFIER=-I

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/VxWorks  \
  $(INCLUDE_QUALIFIER)$(HAM_MDL_COMPONENTS)/CMP_ULIB_BaseDefinitions/VxWorks

ifeq ($(INSTRUMENTATION),Animation )
INST_FLAGS=-DOMANIMATOR -DUSE_IOSTREAM
INST_INCLUDES=-I$(OMROOT)/LangCpp/aom -I$(OMROOT)/LangCpp/tom
INST_LIBS= $(OMROOT)/LangCpp/lib/vxaomanim$(CPU)$(RTP_SUFFIX)$(TOOL)$(LIB_EXT)
OXF_LIBS=$(OMROOT)/LangCpp/lib/vxoxfinst$(CPU)$(RTP_SUFFIX)$(TOOL)$(LIB_EXT) $(OMROOT)/LangCpp/lib/vxomcomappl$(CPU)$(RTP_SUFFIX)$(TOOL)$(LIB_EXT)
SOCK_LIB=
else
ifeq ($(INSTRUMENTATION),Tracing )
INST_FLAGS=-DOMTRACER -DUSE_IOSTREAM
INST_INCLUDES=-I$(OMROOT)/LangCpp/aom -I$(OMROOT)/LangCpp/tom
INST_LIBS=$(OMROOT)/LangCpp/lib/vxtomtrace$(CPU)$(RTP_SUFFIX)$(TOOL)$(LIB_EXT) $(OMROOT)/LangCpp/lib/vxaomtrace$(CPU)$(RTP_SUFFIX)$(TOOL)$(LIB_EXT)
OXF_LIBS= $(OMROOT)/LangCpp/lib/vxoxfinst$(CPU)$(RTP_SUFFIX)$(TOOL)$(LIB_EXT) $(OMROOT)/LangCpp/lib/vxomcomappl$(CPU)$(RTP_SUFFIX)$(TOOL)$(LIB_EXT)
SOCK_LIB=
else
ifeq ($(INSTRUMENTATION),None )
INST_FLAGS=
INST_INCLUDES=
INST_LIBS=
OXF_LIBS=$(OMROOT)/LangCpp/lib/vxoxf$(CPU)$(RTP_SUFFIX)$(TOOL)$(LIB_EXT)
SOCK_LIB=
endif
endif
endif


ADDED_INCLUDES+=$(INCLUDE_PATH) $(INST_INCLUDES) -I$(OMROOT)/LangCpp/osconfig/VxWorks -I. -I$(OMROOT) -I$(OMROOT)/LangCpp -I$(OMROOT)/LangCpp/oxf 
ADDED_C++FLAGS+=$(INST_FLAGS) $(ConfigurationCPPCompileSwitches)

ifeq ($(TARGET_TYPE),Executable)
ADDED_LIBS+=$(LIBS) $(OXF_LIBS) $(INST_LIBS) $(SOCK_LIB)
SUB_OBJECTS+=$(LIBS) $(OXF_LIBS) $(INST_LIBS) $(SOCK_LIB)
endif
