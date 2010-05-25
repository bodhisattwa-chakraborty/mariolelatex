# Wind River Workbench generated Makefile.
# Do not edit!!!
#
#
# The file ".wrmakefile" is the template used by the Wind River Workbench to
# generate the makefiles of this project. Add user-specific build targets and
# make rules only(!) in this project's ".wrmakefile" file. These will then be
# automatically dumped into the makefiles.

WIND_HOME := $(subst \,/,$(WIND_HOME))
WIND_BASE := $(subst \,/,$(WIND_BASE))
WIND_USR := $(subst \,/,$(WIND_USR))

all : pre_recursion subdirs_all post_recursion pre_build main_all post_build

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

MAKEFILE := Makefile

BUILD_SPEC = PPC32gnu_RTP
DEBUG_MODE = 1
SRC_DIR := .
BUILD_ROOT_DIR :=
PRJ_ROOT_DIR := C:/workspace/UtestCMutexSemaphore
WS_ROOT_DIR := C:/Nemo/Software/OS

ALL_BUILD_SPECS := ARMARCH5diab_RTP ARMARCH5diabbe_RTP ARMARCH5gnu_RTP ARMARCH5gnube_RTP \
	 ARMARCH6diab_RTP ARMARCH6diabbe_RTP ARMARCH6gnu_RTP ARMARCH6gnube_RTP \
	 MCF5400diab_RTP MIPS32sfdiab_RTP MIPS32sfdiable_RTP MIPS32sfgnu_RTP \
	 MIPS32sfgnule_RTP MIPS64diab_RTP MIPS64diable_RTP MIPS64gnu_RTP \
	 MIPS64gnule_RTP PENTIUM2diab_RTP PENTIUM2gnu_RTP PENTIUM3diab_RTP \
	 PENTIUM3gnu_RTP PENTIUM4diab_RTP PENTIUM4gnu_RTP PENTIUMdiab_RTP \
	 PENTIUMgnu_RTP PPC32diab_RTP PPC32gnu_RTP PPC32sfdiab_RTP \
	 PPC32sfgnu_RTP SH32diab_RTP SH32diable_RTP SH32gnu_RTP \
	 SH32gnule_RTP SIMPENTIUMdiab_RTP SIMPENTIUMgnu_RTP SIMSPARCSOLARISdiab_RTP \
	 SIMSPARCSOLARISgnu_RTP XSCALEdiab_RTP XSCALEdiabbe_RTP XSCALEgnu_RTP \
	 XSCALEgnube_RTP
ENABLED_BUILD_SPECS := PPC32diab_RTP PPC32gnu_RTP SIMPENTIUMdiab_RTP SIMPENTIUMgnu_RTP

ifeq ($(BUILD_SPEC),ARMARCH5diab_RTP)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := ARMARCH5diab_RTP_DEBUG
else
OBJ_DIR := ARMARCH5diab_RTP
endif
endif
ifeq ($(BUILD_SPEC),ARMARCH5diabbe_RTP)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := ARMARCH5diabbe_RTP_DEBUG
else
OBJ_DIR := ARMARCH5diabbe_RTP
endif
endif
ifeq ($(BUILD_SPEC),ARMARCH5gnu_RTP)
ifeq ($(DEBUG_MODE),1)
OBJ_DIR := ARMARCH5gnu_RTP_DEBUG
else

ifeq ($(BUILD_SPEC),ARMARCH5gnu_RTP)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C++-Compiler = -g
else
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
endif
$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(TRACE_FLAG)echo "building $@";ipg_comp --output_dir /workspace/$(notdir $(PRJ_ROOT_DIR)) --optfile $(PRJ_ROOT_DIR)/ipg.cop --config x86_$(TOOL_FAMILY)_$(PROJECT_TYPE)_vxworks_6_3_$(CPU)_Win32_5_1 --comp $(TOOL_PATH)c++arm $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -mrtp -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.C
	$(TRACE_FLAG)echo "building $@";ipg_comp --output_dir /workspace/$(notdir $(PRJ_ROOT_DIR)) --optfile $(PRJ_ROOT_DIR)/ipg.cop --config x86_$(TOOL_FAMILY)_$(PROJECT_TYPE)_vxworks_6_3_$(CPU)_Win32_5_1 --comp $(TOOL_PATH)c++arm $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -mrtp -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cxx
	$(TRACE_FLAG)echo "building $@";ipg_comp --output_dir /workspace/$(notdir $(PRJ_ROOT_DIR)) --optfile $(PRJ_ROOT_DIR)/ipg.cop --config x86_$(TOOL_FAMILY)_$(PROJECT_TYPE)_vxworks_6_3_$(CPU)_Win32_5_1 --comp $(TOOL_PATH)c++arm $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -mrtp -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cc
	$(TRACE_FLAG)echo "building $@";ipg_comp --output_dir /workspace/$(notdir $(PRJ_ROOT_DIR)) --optfile $(PRJ_ROOT_DIR)/ipg.cop --config x86_$(TOOL_FAMILY)_$(PROJECT_TYPE)_vxworks_6_3_$(CPU)_Win32_5_1 --comp $(TOOL_PATH)c++arm $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -mrtp -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL)   $(DEFINES) -o "$@" -c "$<"

endif

ifeq ($(BUILD_SPEC),ARMARCH5diab_RTP)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_UtestCMutexSemaphore =
else
DEBUGFLAGS_UtestCMutexSemaphore =
endif
$(OBJ_DIR)/UtestCMutexSemaphore.vxe : $(OBJECTS) $(SUB_OBJECTS) $(SUB_TARGETS)
	$(TRACE_FLAG)echo "building $@";ipg_comp --optfile $(PRJ_ROOT_DIR)/ipg.cop --config x86_$(TOOL_FAMILY)_$(PROJECT_TYPE)_vxworks_6_3_$(CPU)_Win32_5_1 --link $(TOOL_PATH)dplus $(DEBUGFLAGS_UtestCMutexSemaphore) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd  -o "$@" $(OBJECTS) $(SUB_OBJECTS) $(SUB_TARGETS) $(LIBPATH) $(LIBS) -L$(WIND_BASE)/target/usr/lib/arm/ARMARCH5/common $(ADDED_LIBPATH) $(ADDED_LIBS)   && if [ "$(DO_STRIP)" = "1" ]; then mv -f "$@" "$@.unstripped" && striparm -g -o "$@" "$@.unstripped";fi && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

target_UtestCMutexSemaphore : subdirs_all check_objectdir $(OBJ_DIR)/UtestCMutexSemaphore.vxe
endif
ifeq ($(BUILD_SPEC),ARMARCH5diabbe_RTP)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_UtestCMutexSemaphore =
else
DEBUGFLAGS_UtestCMutexSemaphore =
endif
$(OBJ_DIR)/UtestCMutexSemaphore.vxe : $(OBJECTS) $(SUB_OBJECTS) $(SUB_TARGETS)
	$(TRACE_FLAG)echo "building $@";ipg_comp --optfile $(PRJ_ROOT_DIR)/ipg.cop --config x86_$(TOOL_FAMILY)_$(PROJECT_TYPE)_vxworks_6_3_$(CPU)_Win32_5_1 --link $(TOOL_PATH)dplus $(DEBUGFLAGS_UtestCMutexSemaphore) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd  -o "$@" $(OBJECTS) $(SUB_OBJECTS) $(SUB_TARGETS) $(LIBPATH) $(LIBS) -L$(WIND_BASE)/target/usr/lib/arm/ARMARCH5/commonbe $(ADDED_LIBPATH) $(ADDED_LIBS)   && if [ "$(DO_STRIP)" = "1" ]; then mv -f "$@" "$@.unstripped" && striparm -g -o "$@" "$@.unstripped";fi && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

target_UtestCMutexSemaphore : subdirs_all check_objectdir $(OBJ_DIR)/UtestCMutexSemaphore.vxe
endif
ifeq ($(BUILD_SPEC),ARMARCH5gnu_RTP)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_UtestCMutexSemaphore =
else
DEBUGFLAGS_UtestCMutexSemaphore =
endif
$(OBJ_DIR)/UtestCMutexSemaphore.vxe : $(OBJECTS) $(SUB_OBJECTS) $(SUB_TARGETS)
	$(TRACE_FLAG)echo "building $@";ipg_comp --optfile $(PRJ_ROOT_DIR)/ipg.cop --config x86_$(TOOL_FAMILY)_$(PROJECT_TYPE)_vxworks_6_3_$(CPU)_Win32_5_1 --link $(TOOL_PATH)c++arm $(DEBUGFLAGS_UtestCMutexSemaphore) $(CC_ARCH_SPEC) -ansi -mrtp -Wall  -MD -MP -mrtp -o "$@" $(OBJECTS) $(SUB_OBJECTS) $(SUB_TARGETS) $(LIBPATH) $(LIBS) -L$(WIND_BASE)/target/usr/lib/arm/ARMARCH5/common $(ADDED_LIBPATH) $(ADDED_LIBS) -Wl,--start-group -Wl,--end-group && if [ "$(DO_STRIP)" = "1" ]; then mv -f "$@" "$@.unstripped" && striparm -g -o "$@" "$@.unstripped";fi && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

target_UtestCMutexSemaphore : subdirs_all check_objectdir $(OBJ_DIR)/UtestCMutexSemaphore.vxe
endif
ifeq ($(BUILD_SPEC),ARMARCH5gnube_RTP)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_UtestCMutexSemaphore =
else
DEBUGFLAGS_UtestCMutexSemaphore =
endif
$(OBJ_DIR)/UtestCMutexSemaphore.vxe : $(OBJECTS) $(SUB_OBJECTS) $(SUB_TARGETS)
	$(TRACE_FLAG)echo "building $@";ipg_comp --optfile $(PRJ_ROOT_DIR)/ipg.cop --config x86_$(TOOL_FAMILY)_$(PROJECT_TYPE)_vxworks_6_3_$(CPU)_Win32_5_1 --link $(TOOL_PATH)c++arm $(DEBUGFLAGS_UtestCMutexSemaphore) $(CC_ARCH_SPEC) -ansi -mrtp -Wall  -MD -MP -mrtp -Wl,-EB -o "$@" $(OBJECTS) $(SUB_OBJECTS) $(SUB_TARGETS) $(LIBPATH) $(LIBS) -L$(WIND_BASE)/target/usr/lib/arm/ARMARCH5/commonbe $(ADDED_LIBPATH) $(ADDED_LIBS) -Wl,--start-group -Wl,--end-group && if [ "$(DO_STRIP)" = "1" ]; then mv -f "$@" "$@.unstripped" && striparm -g -o "$@" "$@.unstripped";fi && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

target_UtestCMutexSemaphore : subdirs_all check_objectdir $(OBJ_DIR)/UtestCMutexSemaphore.vxe
endif
ifeq ($(BUILD_SPEC),ARMARCH6diab_RTP)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_UtestCMutexSemaphore =
else
DEBUGFLAGS_UtestCMutexSemaphore =
endif
$(OBJ_DIR)/UtestCMutexSemaphore.vxe : $(OBJECTS) $(SUB_OBJECTS) $(SUB_TARGETS)
	$(TRACE_FLAG)echo "building $@";ipg_comp --optfile $(PRJ_ROOT_DIR)/ipg.cop --config x86_$(TOOL_FAMILY)_$(PROJECT_TYPE)_vxworks_6_3_$(CPU)_Win32_5_1 --link $(TOOL_PATH)dplus $(DEBUGFLAGS_UtestCMutexSemaphore) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd  -o "$@" $(OBJECTS) $(SUB_OBJECTS) $(SUB_TARGETS) $(LIBPATH) $(LIBS) -L$(WIND_BASE)/target/usr/lib/arm/ARMARCH6/common $(ADDED_LIBPATH) $(ADDED_LIBS)   && if [ "$(DO_STRIP)" = "1" ]; then mv -f "$@" "$@.unstripped" && striparm -g -o "$@" "$@.unstripped";fi && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

target_UtestCMutexSemaphore : subdirs_all check_objectdir $(OBJ_DIR)/UtestCMutexSemaphore.vxe
endif
ifeq ($(BUILD_SPEC),ARMARCH6diabbe_RTP)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_UtestCMutexSemaphore =
else
DEBUGFLAGS_UtestCMutexSemaphore =
endif
$(OBJ_DIR)/UtestCMutexSemaphore.vxe : $(OBJECTS) $(SUB_OBJECTS) $(SUB_TARGETS)
	$(TRACE_FLAG)echo "building $@";ipg_comp --optfile $(PRJ_ROOT_DIR)/ipg.cop --config x86_$(TOOL_FAMILY)_$(PROJECT_TYPE)_vxworks_6_3_$(CPU)_Win32_5_1 --link $(TOOL_PATH)dplus $(DEBUGFLAGS_UtestCMutexSemaphore) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd  -o "$@" $(OBJECTS) $(SUB_OBJECTS) $(SUB_TARGETS) $(LIBPATH) $(LIBS) -L$(WIND_BASE)/target/usr/lib/arm/ARMARCH6/commonbe $(ADDED_LIBPATH) $(ADDED_LIBS)   && if [ "$(DO_STRIP)" = "1" ]; then mv -f "$@" "$@.unstripped" && striparm -g -o "$@" "$@.unstripped";fi && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

target_UtestCMutexSemaphore : subdirs_all check_objectdir $(OBJ_DIR)/UtestCMutexSemaphore.vxe
endif
ifeq ($(BUILD_SPEC),ARMARCH6gnu_RTP)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_UtestCMutexSemaphore =
else
DEBUGFLAGS_UtestCMutexSemaphore =
endif
$(OBJ_DIR)/UtestCMutexSemaphore.vxe : $(OBJECTS) $(SUB_OBJECTS) $(SUB_TARGETS)
	$(TRACE_FLAG)echo "building $@";ipg_comp --optfile $(PRJ_ROOT_DIR)/ipg.cop --config x86_$(TOOL_FAMILY)_$(PROJECT_TYPE)_vxworks_6_3_$(CPU)_Win32_5_1 --link $(TOOL_PATH)c++arm $(DEBUGFLAGS_UtestCMutexSemaphore) $(CC_ARCH_SPEC) -ansi -mrtp -Wall  -MD -MP -mrtp -o "$@" $(OBJECTS) $(SUB_OBJECTS) $(SUB_TARGETS) $(LIBPATH) $(LIBS) -L$(WIND_BASE)/target/usr/lib/arm/ARMARCH6/common $(ADDED_LIBPATH) $(ADDED_LIBS) -Wl,--start-group -Wl,--end-group && if [ "$(DO_STRIP)" = "1" ]; then mv -f "$@" "$@.unstripped" && striparm -g -o "$@" "$@.unstripped";fi && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

target_UtestCMutexSemaphore : subdirs_all check_objectdir $(OBJ_DIR)/UtestCMutexSemaphore.vxe
endif
ifeq ($(BUILD_SPEC),ARMARCH6gnube_RTP)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_UtestCMutexSemaphore =
else
DEBUGFLAGS_UtestCMutexSemaphore =
endif
$(OBJ_DIR)/UtestCMutexSemaphore.vxe : $(OBJECTS) $(SUB_OBJECTS) $(SUB_TARGETS)
	$(TRACE_FLAG)echo "building $@";ipg_comp --optfile $(PRJ_ROOT_DIR)/ipg.cop --config x86_$(TOOL_FAMILY)_$(PROJECT_TYPE)_vxworks_6_3_$(CPU)_Win32_5_1 --link $(TOOL_PATH)c++arm $(DEBUGFLAGS_UtestCMutexSemaphore) $(CC_ARCH_SPEC) -ansi -mrtp -Wall  -MD -MP -mrtp -Wl,-EB -o "$@" $(OBJECTS) $(SUB_OBJECTS) $(SUB_TARGETS) $(LIBPATH) $(LIBS) -L$(WIND_BASE)/target/usr/lib/arm/ARMARCH6/commonbe $(ADDED_LIBPATH) $(ADDED_LIBS) -Wl,--start-group -Wl,--end-group && if [ "$(DO_STRIP)" = "1" ]; then mv -f "$@" "$@.unstripped" && striparm -g -o "$@" "$@.unstripped";fi && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

target_UtestCMutexSemaphore : subdirs_all check_objectdir $(OBJ_DIR)/UtestCMutexSemaphore.vxe
endif
ifeq ($(BUILD_SPEC),MCF5400diab_RTP)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_UtestCMutexSemaphore =
else
DEBUGFLAGS_UtestCMutexSemaphore =
endif
$(OBJ_DIR)/UtestCMutexSemaphore.vxe : $(OBJECTS) $(SUB_OBJECTS) $(SUB_TARGETS)
	$(TRACE_FLAG)echo "building $@";ipg_comp --optfile $(PRJ_ROOT_DIR)/ipg.cop --config x86_$(TOOL_FAMILY)_$(PROJECT_TYPE)_vxworks_6_3_$(CPU)_Win32_5_1 --link $(TOOL_PATH)dplus $(DEBUGFLAGS_UtestCMutexSemaphore) $(CC_ARCH_SPEC) -Xansi -Xforce-declarations  -Xmake-dependency=0xd  -o "$@" $(OBJECTS) $(SUB_OBJECTS) $(SUB_TARGETS) $(LIBPATH) $(LIBS) -L$(WIND_BASE)/target/usr/lib/cf/MCF5400/common $(ADDED_LIBPATH) $(ADDED_LIBS)   && if [ "$(DO_STRIP)" = "1" ]; then mv -f "$@" "$@.unstripped" && stripcf -g -o "$@" "$@.unstripped";fi && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

target_UtestCMutexSemaphore : subdirs_all check_objectdir $(OBJ_DIR)/UtestCMutexSemaphore.vxe
endif
ifeq ($(BUILD_SPEC),XSCALEgnu_RTP)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_UtestCMutexSemaphore =
else
DEBUGFLAGS_UtestCMutexSemaphore =
endif
$(OBJ_DIR)/UtestCMutexSemaphore.vxe : $(OBJECTS) $(SUB_OBJECTS) $(SUB_TARGETS)
	$(TRACE_FLAG)echo "building $@";ipg_comp --optfile $(PRJ_ROOT_DIR)/ipg.cop --config x86_$(TOOL_FAMILY)_$(PROJECT_TYPE)_vxworks_6_3_$(CPU)_Win32_5_1 --link $(TOOL_PATH)c++arm $(DEBUGFLAGS_UtestCMutexSemaphore) $(CC_ARCH_SPEC) -ansi -mrtp -Wall  -MD -MP -mrtp -o "$@" $(OBJECTS) $(SUB_OBJECTS) $(SUB_TARGETS) $(LIBPATH) $(LIBS) -L$(WIND_BASE)/target/usr/lib/arm/XSCALE/common $(ADDED_LIBPATH) $(ADDED_LIBS) -Wl,--start-group -Wl,--end-group && if [ "$(DO_STRIP)" = "1" ]; then mv -f "$@" "$@.unstripped" && striparm -g -o "$@" "$@.unstripped";fi && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

target_UtestCMutexSemaphore : subdirs_all check_objectdir $(OBJ_DIR)/UtestCMutexSemaphore.vxe
endif
ifeq ($(BUILD_SPEC),XSCALEgnube_RTP)
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_UtestCMutexSemaphore =
else
DEBUGFLAGS_UtestCMutexSemaphore =
endif
$(OBJ_DIR)/UtestCMutexSemaphore.vxe : $(OBJECTS) $(SUB_OBJECTS) $(SUB_TARGETS)
	$(TRACE_FLAG)echo "building $@";ipg_comp --optfile $(PRJ_ROOT_DIR)/ipg.cop --config x86_$(TOOL_FAMILY)_$(PROJECT_TYPE)_vxworks_6_3_$(CPU)_Win32_5_1 --link $(TOOL_PATH)c++arm $(DEBUGFLAGS_UtestCMutexSemaphore) $(CC_ARCH_SPEC) -ansi -mrtp -Wall  -MD -MP -mrtp -Wl,-EB -o "$@" $(OBJECTS) $(SUB_OBJECTS) $(SUB_TARGETS) $(LIBPATH) $(LIBS) -L$(WIND_BASE)/target/usr/lib/arm/XSCALE/commonbe $(ADDED_LIBPATH) $(ADDED_LIBS) -Wl,--start-group -Wl,--end-group && if [ "$(DO_STRIP)" = "1" ]; then mv -f "$@" "$@.unstripped" && striparm -g -o "$@" "$@.unstripped";fi && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

target_UtestCMutexSemaphore : subdirs_all check_objectdir $(OBJ_DIR)/UtestCMutexSemaphore.vxe
endif



# Check if the ipg.cop file has changed since object creation; if it has delete the object
check_cop : $(PRJ_ROOT_DIR)/ipg.cop
ifneq ($(OBJECTS),)
	@for obj in $(OBJECTS); do\
		if [ -f $$obj ]; then\
			if [ $(PRJ_ROOT_DIR)/ipg.cop -nt $$obj ]; then\
				rm -f $$obj;\
			fi;\
		fi;\
	done;
endif

tidy_dependencies_pre_build :
ifneq ($(OBJECTS),)
	@echo "Removing references to temporary Unit Tester files from dependency files";\
	for dep in $(patsubst %.o,%.d,$(OBJECTS)); do\
		if [ -f $$dep ]; then\
			gawk '/.*inc[\/\\]cpp(ci|th)\.(h|inc).*/{next};/.*/{gsub("\\.ci\\.",".");gsub("\\.sm\\.",".")};/.*/{print}' $$dep > $$dep.xxx;\
			mv $$dep.xxx $$dep;\
		fi;\
	done;
endif

%.ci.sm.c : %.c

%.sm.c : %.c

%.ci.c : %.c

%.ci.sm.cpp : %.cpp

%.sm.cpp : %.cpp

%.ci.cpp : %.cpp

%.ci.sm.cxx : %.cxx

%.sm.cxx : %.cxx

%.ci.cxx : %.cxx

%.ci.sm.C : %.C

%.sm.C : %.C

%.ci.C : %.C



PRE_BUILD_STEP := tidy_dependencies_pre_build check_cop

tidy_dependencies :
ifneq ($(OBJECTS),)
	@echo "Removing references to temporary Unit Tester files from dependency files";\
	for dep in $(patsubst %.o,%.d,$(OBJECTS)); do\
		if [ -f $$dep ]; then\
			gawk '/.*inc[\/\\]cpp(ci|th)\.(h|inc).*/{next};/.*/{gsub("\\.ci\\.",".");gsub("\\.sm\\.",".")};/.*/{print}' $$dep > $$dep.xxx;\
			mv $$dep.xxx $$dep;\
		fi;\
	done;
endif



POST_BUILD_STEP := tidy_dependencies

ipl_cleanup :
	@rm -f $(wildcard $(OBJ_DIR)/*.ti);\
	rm -f $(wildcard $(OBJ_DIR)/*.ii)



CLEAN_STEP := ipl_cleanup


-include *.makefile

main_all : check_objectdir external_build $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"

check_objectdir :
	@if [ ! -d "$(OBJ_DIR)" ]; then\
		mkdir -p $(OBJ_DIR);\
	fi

# entry point for extending the build
# this call to patch UT main function, enable the use of the PVCS variable transformation
# after calling format_ctr.pl script
external_build ::
	@echo "patching unit tester files..."
	perl S:/Project/Nemo/Software/Testing/scripts/perl/patch_ut_main/patchUTMain.pl -m -d . -i

# main entry point for pre processing prior to the recursion
pre_recursion ::
	@echo ""

# main entry point for post processing after the recursion
post_recursion ::
	@echo ""

# main entry point for pre processing prior to the build
pre_build :: $(PRE_BUILD_STEP) generate_sources
	@echo ""

# entry point for generating sources prior to the build
generate_sources ::
	@echo ""

# main entry point for post processing after the build
post_build :: $(POST_BUILD_STEP) deploy_output
	@echo ""

# entry point for deploying output after the build
deploy_output ::
	@echo ""

# recursive make in SUBDIRS
subdirs_all :
	@_PWD=`pwd`;\
	for dir in _dummy_ $(SUBDIRS); do\
		if [ "$$dir" = "_dummy_" ]; then\
			continue ;\
		fi;\
		if [ ! -d "$$dir" ]; then\
			continue ;\
		fi;\
		echo "Recursive make: Changing to Directory '$$dir'";\
		cd "$$dir";\
		"$(MAKE)" -f "$(MAKEFILE)" $(MFLAGS) all || exit;\
		echo "Recursive make: Changing back to Directory '$$_PWD'";\
		cd "$$_PWD";\
	done

clean ::
	@_PWD=`pwd`;\
	for dir in _dummy_ $(SUBDIRS); do\
		if [ "$$dir" = "_dummy_" ]; then\
			continue ;\
		fi;\
		if [ ! -d "$$dir" ]; then\
			continue ;\
		fi;\
		echo "Recursive make: Changing to Directory '$$dir'";\
		cd "$$dir";\
		"$(MAKE)" -f "$(MAKEFILE)" $(MFLAGS) $@ || exit;\
		echo "Recursive make: Changing back to Directory '$$_PWD'";\
		cd "$$_PWD";\
	done

clean :: external_clean $(CLEAN_STEP) _clean

# entry point for extending the build clean
external_clean ::
	@echo ""

_clean :
	@echo "make: removing targets and objects of `pwd`";\
	rm -f $(OBJECTS) $(PROJECT_TARGETS) $(DEP_FILES) $(wildcard $(OBJ_DIR)/*.unstripped) $(wildcard $(OBJ_DIR)/ctdt.*)

build_all_specs :
	@echo "building target default for ALL build-specs";\
	for spec in _dummy_ $(ALL_BUILD_SPECS); do\
		if [ "$$spec" = "_dummy_" ]; then\
			continue ;\
		fi;\
		echo " ";\
		echo "building all for build-spec '$$spec'";\
		"$(MAKE)" -f "$(MAKEFILE)" $(MFLAGS) BUILD_SPEC=$$spec DEBUG_MODE=$(DEBUG_MODE) TRACE=$(TRACE) || exit;\
	done

clean_all_specs :
	@echo "building target clean for ALL build-specs";\
	for spec in _dummy_ $(ALL_BUILD_SPECS); do\
		if [ "$$spec" = "_dummy_" ]; then\
			continue ;\
		fi;\
		echo " ";\
		echo "building clean for build-spec '$$spec'";\
		"$(MAKE)" -f "$(MAKEFILE)" $(MFLAGS) BUILD_SPEC=$$spec DEBUG_MODE=$(DEBUG_MODE) TRACE=$(TRACE) clean || exit;\
	done

build_enabled_specs :
	@echo "building target default for ENABLED build-specs";\
	for spec in _dummy_ $(ENABLED_BUILD_SPECS); do\
		if [ "$$spec" = "_dummy_" ]; then\
			continue ;\
		fi;\
		echo " ";\
		echo "building all for build-spec '$$spec'";\
		"$(MAKE)" -f "$(MAKEFILE)" $(MFLAGS) BUILD_SPEC=$$spec DEBUG_MODE=$(DEBUG_MODE) TRACE=$(TRACE) || exit;\
	done

clean_enabled_specs :
	@echo "building target clean for ENABLED build-specs";\
	for spec in _dummy_ $(ENABLED_BUILD_SPECS); do\
		if [ "$$spec" = "_dummy_" ]; then\
			continue ;\
		fi;\
		echo " ";\
		echo "building clean for build-spec '$$spec'";\
		"$(MAKE)" -f "$(MAKEFILE)" $(MFLAGS) BUILD_SPEC=$$spec DEBUG_MODE=$(DEBUG_MODE) TRACE=$(TRACE) clean || exit;\
	done
