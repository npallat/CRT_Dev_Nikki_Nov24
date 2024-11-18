# Install script for directory: /home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/srcs/sbndqm/sbndqm/dqmAnalysis/Trigger/SBND

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/slf7.x86_64.e26.prof/lib/libsbndqm_dqmAnalysis_Trigger_SBND_PTBdqm_module.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/slf7.x86_64.e26.prof/lib/libsbndqm_dqmAnalysis_Trigger_SBND_PTBdqm_module.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/slf7.x86_64.e26.prof/lib/libsbndqm_dqmAnalysis_Trigger_SBND_PTBdqm_module.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/slf7.x86_64.e26.prof/lib" TYPE SHARED_LIBRARY FILES "/home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/build_slf7.x86_64/sbndqm/slf7.x86_64.e26.prof/lib/libsbndqm_dqmAnalysis_Trigger_SBND_PTBdqm_module.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/slf7.x86_64.e26.prof/lib/libsbndqm_dqmAnalysis_Trigger_SBND_PTBdqm_module.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/slf7.x86_64.e26.prof/lib/libsbndqm_dqmAnalysis_Trigger_SBND_PTBdqm_module.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/slf7.x86_64.e26.prof/lib/libsbndqm_dqmAnalysis_Trigger_SBND_PTBdqm_module.so"
         OLD_RPATH "/daq/software/products/lardataobj/v09_18_05/slf7.x86_64.e26.prof/lib:/daq/software/products/art_root_io/v1_13_06/slf7.x86_64.e26.prof/lib:/daq/software/products/sbndaq_artdaq_core/v1_09_00of1/slf7.x86_64.e26.s131.prof/lib:/daq/software/products/artdaq_utilities/v1_09_00/slf7.x86_64.e26.s131.prof/lib:/home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/build_slf7.x86_64/sbndaq_online/slf7.x86_64.e26.prof/lib:/home/nfs/sbnddqm/DQM_DevAreas/CRT_DQM_NP_29Oct2024/build_slf7.x86_64/sbndqm/slf7.x86_64.e26.prof/lib:/daq/software/products/root/v6_28_12/Linux64bit+3.10-2.17-e26-p3915-prof/lib:/daq/software/products/art/v3_14_04/slf7.x86_64.e26.prof/lib:/daq/software/products/canvas_root_io/v1_13_06/slf7.x86_64.e26.prof/lib:/daq/software/products/artdaq_core/v3_10_02/slf7.x86_64.e26.s131.prof/lib:/daq/software/products/cetlib/v3_18_02/slf7.x86_64.e26.prof/lib:/daq/software/products/boost/v1_82_0/Linux64bit+3.10-2.17-e26-prof/lib:/daq/software/products/canvas/v3_16_04/slf7.x86_64.e26.prof/lib:/daq/software/products/clhep/v2_4_7_1/Linux64bit+3.10-2.17-e26-prof/lib:/daq/software/products/hep_concurrency/v1_09_02/slf7.x86_64.e26.prof/lib:/daq/software/products/messagefacility/v2_10_05/slf7.x86_64.e26.prof/lib:/daq/software/products/fhiclcpp/v4_18_04/slf7.x86_64.e26.prof/lib:/daq/software/products/tbb/v2021_9_0/Linux64bit+3.10-2.17-e26/lib:/daq/software/products/cetlib_except/v1_09_01/slf7.x86_64.e26.prof/lib:/daq/software/products/jsoncpp/v1_9_5a/Linux64bit+3.10-2.17-e26-prof/lib:/daq/software/products/sqlite/v3_40_01_00/Linux64bit+3.10-2.17/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/slf7.x86_64.e26.prof/lib/libsbndqm_dqmAnalysis_Trigger_SBND_PTBdqm_module.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

