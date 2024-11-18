# Install script for directory: /home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/srcs/sbndaq_online

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/localProducts_sbndqm_v1_03_00_e26_prof")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  # Tweak the value of CMAKE_INSTALL_PREFIX used by the project's
  # cmake_install.cmake files per UPS conventions.
  string(APPEND CMAKE_INSTALL_PREFIX "/sbndaq_online/v1_01_00")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/build_slf7.x86_64/sbndaq_online/sbndaq-online/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/build_slf7.x86_64/sbndaq_online/ups/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/slf7.x86_64.e26.prof/ups" TYPE FILE FILES "/home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/build_slf7.x86_64/sbndaq_online/slf7.x86_64.e26.prof/ups/sbndaq_online.table")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/../v1_01_00.version" TYPE FILE FILES "/home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/build_slf7.x86_64/sbndaq_online/slf7.x86_64.e26.prof/ups/Linux64bit+3.10-2.17_e26_prof")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  # Handle placeholders in target definitions.
  file(READ "/home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/build_slf7.x86_64/sbndaq_online/CMakeFiles/Export/e14b48c3fb5bdbd877ae72147f61f87e/sbndaq_onlineTargets.cmake" _targetFileData)
  string(REPLACE "@CET_DOLLAR@" "$" _targetFileData_new "${_targetFileData}")
  if (NOT _targetFileData_new STREQUAL _targetFileData)
    file(WRITE "/home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/build_slf7.x86_64/sbndaq_online/CMakeFiles/Export/e14b48c3fb5bdbd877ae72147f61f87e/sbndaq_onlineTargets.cmake" "${_targetFileData_new}")
  endif()
  if (NOT "" STREQUAL "x")
    # Check for unwanted absolute transitive dependencies.
    include("/daq/software/products/cetmodules/v3_24_01/Modules/private/CetFindAbsoluteTransitiveDependencies.cmake")
    _cet_find_absolute_transitive_dependencies("/home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/build_slf7.x86_64/sbndaq_online/CMakeFiles/Export/e14b48c3fb5bdbd877ae72147f61f87e/sbndaq_onlineTargets.cmake"
       "${_targetFileData_new}"
       "")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/slf7.x86_64.e26.prof/lib/sbndaq_online/cmake/sbndaq_onlineTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/slf7.x86_64.e26.prof/lib/sbndaq_online/cmake/sbndaq_onlineTargets.cmake"
         "/home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/build_slf7.x86_64/sbndaq_online/CMakeFiles/Export/e14b48c3fb5bdbd877ae72147f61f87e/sbndaq_onlineTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/slf7.x86_64.e26.prof/lib/sbndaq_online/cmake/sbndaq_onlineTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/slf7.x86_64.e26.prof/lib/sbndaq_online/cmake/sbndaq_onlineTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/slf7.x86_64.e26.prof/lib/sbndaq_online/cmake" TYPE FILE FILES "/home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/build_slf7.x86_64/sbndaq_online/CMakeFiles/Export/e14b48c3fb5bdbd877ae72147f61f87e/sbndaq_onlineTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/slf7.x86_64.e26.prof/lib/sbndaq_online/cmake" TYPE FILE FILES "/home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/build_slf7.x86_64/sbndaq_online/CMakeFiles/Export/e14b48c3fb5bdbd877ae72147f61f87e/sbndaq_onlineTargets-relwithdebinfo.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  # Handle placeholders in target definitions.
  file(READ "/home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/build_slf7.x86_64/sbndaq_online/genConfig/sbndaq_onlineConfig.cmake" _targetFileData)
  string(REPLACE "@CET_DOLLAR@" "$" _targetFileData_new "${_targetFileData}")
  if (NOT _targetFileData_new STREQUAL _targetFileData)
    file(WRITE "/home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/build_slf7.x86_64/sbndaq_online/genConfig/sbndaq_onlineConfig.cmake" "${_targetFileData_new}")
  endif()
  if (NOT "" STREQUAL "x")
    # Check for unwanted absolute transitive dependencies.
    include("/daq/software/products/cetmodules/v3_24_01/Modules/private/CetFindAbsoluteTransitiveDependencies.cmake")
    _cet_find_absolute_transitive_dependencies("/home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/build_slf7.x86_64/sbndaq_online/genConfig/sbndaq_onlineConfig.cmake"
       "${_targetFileData_new}"
       "")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/slf7.x86_64.e26.prof/lib/sbndaq_online/cmake" TYPE FILE FILES
    "/home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/build_slf7.x86_64/sbndaq_online/genConfig/sbndaq_onlineConfig.cmake"
    "/home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/build_slf7.x86_64/sbndaq_online/sbndaq_onlineConfigVersion.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  # Detect misplaced installs from older, cetbuildtools-using packages.
  if (IS_DIRECTORY "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/sbndaq_online/v1_01_00")
    message(STATUS "tidying legacy installations: relocate sbndaq_online/v1_01_00/*")
    execute_process(COMMAND /daq/software/products/cmake/v3_27_4/Linux64bit+3.10-2.17/bin/cmake -E tar c "../../sbndaq_online_v1_01_00-tmpinstall.tar" .
                    WORKING_DIRECTORY "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/sbndaq_online/v1_01_00"
                    COMMAND_ERROR_IS_FATAL ANY)
    file(REMOVE_RECURSE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/sbndaq_online/v1_01_00")
    execute_process(COMMAND /daq/software/products/cmake/v3_27_4/Linux64bit+3.10-2.17/bin/cmake -E tar xv "sbndaq_online_v1_01_00-tmpinstall.tar"
                    WORKING_DIRECTORY "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}"
                    OUTPUT_VARIABLE _cet_install_sbndaq_online_legacy
                    OUTPUT_STRIP_TRAILING_WHITESPACE
                    COMMAND_ERROR_IS_FATAL ANY)
    execute_process(COMMAND rmdir "sbndaq_online"
                    WORKING_DIRECTORY "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}"
                    OUTPUT_QUIET
                    ERROR_QUIET)
    message(STATUS "in $ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}: ${_cet_install_sbndaq_online_legacy}")
    unset(_cet_install_sbndaq_online_legacy)
    file(REMOVE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/sbndaq_online_v1_01_00-tmpinstall.tar")
  endif()

  # We need to reset CMAKE_INSTALL_PREFIX to its original value at this
  # time.
  get_filename_component(CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}" DIRECTORY)
  get_filename_component(CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}" DIRECTORY)
endif()

