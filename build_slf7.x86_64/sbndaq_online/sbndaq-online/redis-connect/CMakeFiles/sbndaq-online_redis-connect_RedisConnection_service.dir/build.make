# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /daq/software/products/cmake/v3_27_4/Linux64bit+3.10-2.17/bin/cmake

# The command to remove a file.
RM = /daq/software/products/cmake/v3_27_4/Linux64bit+3.10-2.17/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/srcs

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/build_slf7.x86_64

# Include any dependencies generated for this target.
include sbndaq_online/sbndaq-online/redis-connect/CMakeFiles/sbndaq-online_redis-connect_RedisConnection_service.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include sbndaq_online/sbndaq-online/redis-connect/CMakeFiles/sbndaq-online_redis-connect_RedisConnection_service.dir/compiler_depend.make

# Include the progress variables for this target.
include sbndaq_online/sbndaq-online/redis-connect/CMakeFiles/sbndaq-online_redis-connect_RedisConnection_service.dir/progress.make

# Include the compile flags for this target's objects.
include sbndaq_online/sbndaq-online/redis-connect/CMakeFiles/sbndaq-online_redis-connect_RedisConnection_service.dir/flags.make

sbndaq_online/sbndaq-online/redis-connect/CMakeFiles/sbndaq-online_redis-connect_RedisConnection_service.dir/RedisConnection.cc.o: sbndaq_online/sbndaq-online/redis-connect/CMakeFiles/sbndaq-online_redis-connect_RedisConnection_service.dir/flags.make
sbndaq_online/sbndaq-online/redis-connect/CMakeFiles/sbndaq-online_redis-connect_RedisConnection_service.dir/RedisConnection.cc.o: /home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/srcs/sbndaq_online/sbndaq-online/redis-connect/RedisConnection.cc
sbndaq_online/sbndaq-online/redis-connect/CMakeFiles/sbndaq-online_redis-connect_RedisConnection_service.dir/RedisConnection.cc.o: sbndaq_online/sbndaq-online/redis-connect/CMakeFiles/sbndaq-online_redis-connect_RedisConnection_service.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/build_slf7.x86_64/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object sbndaq_online/sbndaq-online/redis-connect/CMakeFiles/sbndaq-online_redis-connect_RedisConnection_service.dir/RedisConnection.cc.o"
	cd /home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/build_slf7.x86_64/sbndaq_online/sbndaq-online/redis-connect && /daq/software/products/gcc/v12_1_0/Linux64bit+3.10-2.17/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT sbndaq_online/sbndaq-online/redis-connect/CMakeFiles/sbndaq-online_redis-connect_RedisConnection_service.dir/RedisConnection.cc.o -MF CMakeFiles/sbndaq-online_redis-connect_RedisConnection_service.dir/RedisConnection.cc.o.d -o CMakeFiles/sbndaq-online_redis-connect_RedisConnection_service.dir/RedisConnection.cc.o -c /home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/srcs/sbndaq_online/sbndaq-online/redis-connect/RedisConnection.cc

sbndaq_online/sbndaq-online/redis-connect/CMakeFiles/sbndaq-online_redis-connect_RedisConnection_service.dir/RedisConnection.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/sbndaq-online_redis-connect_RedisConnection_service.dir/RedisConnection.cc.i"
	cd /home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/build_slf7.x86_64/sbndaq_online/sbndaq-online/redis-connect && /daq/software/products/gcc/v12_1_0/Linux64bit+3.10-2.17/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/srcs/sbndaq_online/sbndaq-online/redis-connect/RedisConnection.cc > CMakeFiles/sbndaq-online_redis-connect_RedisConnection_service.dir/RedisConnection.cc.i

sbndaq_online/sbndaq-online/redis-connect/CMakeFiles/sbndaq-online_redis-connect_RedisConnection_service.dir/RedisConnection.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/sbndaq-online_redis-connect_RedisConnection_service.dir/RedisConnection.cc.s"
	cd /home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/build_slf7.x86_64/sbndaq_online/sbndaq-online/redis-connect && /daq/software/products/gcc/v12_1_0/Linux64bit+3.10-2.17/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/srcs/sbndaq_online/sbndaq-online/redis-connect/RedisConnection.cc -o CMakeFiles/sbndaq-online_redis-connect_RedisConnection_service.dir/RedisConnection.cc.s

# Object files for target sbndaq-online_redis-connect_RedisConnection_service
sbndaq__online_redis__connect_RedisConnection_service_OBJECTS = \
"CMakeFiles/sbndaq-online_redis-connect_RedisConnection_service.dir/RedisConnection.cc.o"

# External object files for target sbndaq-online_redis-connect_RedisConnection_service
sbndaq__online_redis__connect_RedisConnection_service_EXTERNAL_OBJECTS =

sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so: sbndaq_online/sbndaq-online/redis-connect/CMakeFiles/sbndaq-online_redis-connect_RedisConnection_service.dir/RedisConnection.cc.o
sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so: sbndaq_online/sbndaq-online/redis-connect/CMakeFiles/sbndaq-online_redis-connect_RedisConnection_service.dir/build.make
sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so: sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq_online_redis_connection.so
sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so: sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq_online_hiredis.so
sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so: /daq/software/products/artdaq_utilities/v1_09_00/slf7.x86_64.e26.s131.prof/lib/libartdaq-utilities_Plugins.so
sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so: /daq/software/products/boost/v1_82_0/Linux64bit+3.10-2.17-e26-prof/lib/libboost_thread.so.1.82.0
sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so: /daq/software/products/art_root_io/v1_13_06/slf7.x86_64.e26.prof/lib/libart_root_io_TFileService.so
sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so: /daq/software/products/art_root_io/v1_13_06/slf7.x86_64.e26.prof/lib/libart_root_io_tfile_support.so
sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so: /daq/software/products/art/v3_14_04/slf7.x86_64.e26.prof/lib/libart_Framework_IO.so
sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so: /daq/software/products/art/v3_14_04/slf7.x86_64.e26.prof/lib/libart_Framework_Core.so
sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so: /daq/software/products/art/v3_14_04/slf7.x86_64.e26.prof/lib/libart_Framework_Services_System_FileCatalogMetadata.so
sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so: /daq/software/products/art/v3_14_04/slf7.x86_64.e26.prof/lib/libart_Framework_Services_Optional_RandomNumberGenerator.so
sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so: /daq/software/products/art/v3_14_04/slf7.x86_64.e26.prof/lib/libart_Framework_Services_System_TriggerNamesService_service.so
sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so: /daq/software/products/art/v3_14_04/slf7.x86_64.e26.prof/lib/libart_Framework_Principal.so
sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so: /daq/software/products/art/v3_14_04/slf7.x86_64.e26.prof/lib/libart_Framework_Services_Registry.so
sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so: /daq/software/products/art/v3_14_04/slf7.x86_64.e26.prof/lib/libart_Persistency_Common.so
sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so: /daq/software/products/art/v3_14_04/slf7.x86_64.e26.prof/lib/libart_Persistency_Provenance.so
sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so: /daq/software/products/art/v3_14_04/slf7.x86_64.e26.prof/lib/libart_Framework_Services_FileServiceInterfaces.so
sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so: /daq/software/products/art/v3_14_04/slf7.x86_64.e26.prof/lib/libart_Version.so
sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so: /daq/software/products/root/v6_28_12/Linux64bit+3.10-2.17-e26-p3915-prof/lib/libCore.so.6.28.12
sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so: /daq/software/products/art/v3_14_04/slf7.x86_64.e26.prof/lib/libart_Utilities.so
sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so: /daq/software/products/canvas/v3_16_04/slf7.x86_64.e26.prof/lib/libcanvas.so
sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so: /daq/software/products/boost/v1_82_0/Linux64bit+3.10-2.17-e26-prof/lib/libboost_date_time.so.1.82.0
sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so: /daq/software/products/clhep/v2_4_7_1/Linux64bit+3.10-2.17-e26-prof/lib/libCLHEP-Random-2.4.7.1.so
sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so: /daq/software/products/hep_concurrency/v1_09_02/slf7.x86_64.e26.prof/lib/libhep_concurrency.so
sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so: /daq/software/products/messagefacility/v2_10_05/slf7.x86_64.e26.prof/lib/libMF_MessageLogger.so
sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so: /daq/software/products/fhiclcpp/v4_18_04/slf7.x86_64.e26.prof/lib/libfhiclcpp_types.so
sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so: /daq/software/products/tbb/v2021_9_0/Linux64bit+3.10-2.17-e26/lib/libtbb_debug.so.12.9
sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so: /daq/software/products/fhiclcpp/v4_18_04/slf7.x86_64.e26.prof/lib/libfhiclcpp.so
sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so: /daq/software/products/cetlib/v3_18_02/slf7.x86_64.e26.prof/lib/libcetlib.so
sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so: /usr/lib64/libcrypto.so
sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so: /daq/software/products/boost/v1_82_0/Linux64bit+3.10-2.17-e26-prof/lib/libboost_filesystem.so.1.82.0
sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so: /daq/software/products/boost/v1_82_0/Linux64bit+3.10-2.17-e26-prof/lib/libboost_atomic.so.1.82.0
sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so: /daq/software/products/boost/v1_82_0/Linux64bit+3.10-2.17-e26-prof/lib/libboost_regex.so.1.82.0
sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so: /daq/software/products/cetlib_except/v1_09_01/slf7.x86_64.e26.prof/lib/libcetlib_except.so
sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so: sbndaq_online/sbndaq-online/redis-connect/CMakeFiles/sbndaq-online_redis-connect_RedisConnection_service.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/build_slf7.x86_64/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library ../../slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so"
	cd /home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/build_slf7.x86_64/sbndaq_online/sbndaq-online/redis-connect && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sbndaq-online_redis-connect_RedisConnection_service.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
sbndaq_online/sbndaq-online/redis-connect/CMakeFiles/sbndaq-online_redis-connect_RedisConnection_service.dir/build: sbndaq_online/slf7.x86_64.e26.prof/lib/libsbndaq-online_redis-connect_RedisConnection.so
.PHONY : sbndaq_online/sbndaq-online/redis-connect/CMakeFiles/sbndaq-online_redis-connect_RedisConnection_service.dir/build

sbndaq_online/sbndaq-online/redis-connect/CMakeFiles/sbndaq-online_redis-connect_RedisConnection_service.dir/clean:
	cd /home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/build_slf7.x86_64/sbndaq_online/sbndaq-online/redis-connect && $(CMAKE_COMMAND) -P CMakeFiles/sbndaq-online_redis-connect_RedisConnection_service.dir/cmake_clean.cmake
.PHONY : sbndaq_online/sbndaq-online/redis-connect/CMakeFiles/sbndaq-online_redis-connect_RedisConnection_service.dir/clean

sbndaq_online/sbndaq-online/redis-connect/CMakeFiles/sbndaq-online_redis-connect_RedisConnection_service.dir/depend:
	cd /home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/build_slf7.x86_64 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/srcs /home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/srcs/sbndaq_online/sbndaq-online/redis-connect /home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/build_slf7.x86_64 /home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/build_slf7.x86_64/sbndaq_online/sbndaq-online/redis-connect /home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/build_slf7.x86_64/sbndaq_online/sbndaq-online/redis-connect/CMakeFiles/sbndaq-online_redis-connect_RedisConnection_service.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : sbndaq_online/sbndaq-online/redis-connect/CMakeFiles/sbndaq-online_redis-connect_RedisConnection_service.dir/depend

