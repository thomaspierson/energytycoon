# these are cache variables, so they could be overwritten with -D,
set(
    CPACK_PACKAGE_NAME ${PROJECT_NAME}
    CACHE STRING "The resulting package name"
)
# which is useful in case of packing only selected components instead of the whole thing
set(
    CPACK_PACKAGE_DESCRIPTION_SUMMARY "${PROJECT_DESCRIPTION}"
    CACHE STRING "Package description for the package metadata"
)
set(CPACK_PACKAGE_VENDOR "Individual")

set(CPACK_VERBATIM_VARIABLES YES)

set(CPACK_PACKAGE_INSTALL_DIRECTORY ${CPACK_PACKAGE_NAME})

SET(CPACK_OUTPUT_FILE_PREFIX "${CMAKE_SOURCE_DIR}/_packages/")

cmake_host_system_information(RESULT DISTRO QUERY DISTRIB_INFO)
if (UNIX)
    set(CPACK_PACKAGE_FILE_NAME ${PROJECT_NAME}_${PROJECT_VERSION}_${DISTRO_ID}${DISTRO_VERSION_ID}_${CMAKE_SYSTEM_PROCESSOR}.)
    set(CPACK_DEBIAN_FILE_NAME ${CPACK_PACKAGE_FILE_NAME}deb)
endif ()

set(CPACK_STRIP_FILES YES)

set(
    CPACK_INSTALL_DEFAULT_DIRECTORY_PERMISSIONS
    OWNER_READ OWNER_WRITE OWNER_EXECUTE
    GROUP_READ GROUP_EXECUTE
    WORLD_READ WORLD_EXECUTE
)

# let's install in default location as /opt is not really recommend for custom debian package
#set(CPACK_PACKAGING_INSTALL_PREFIX "/opt")

set(CPACK_PACKAGE_VERSION_MAJOR ${PROJECT_VERSION_MAJOR})
set(CPACK_PACKAGE_VERSION_MINOR ${PROJECT_VERSION_MINOR})
set(CPACK_PACKAGE_VERSION_PATCH ${PROJECT_VERSION_PATCH})

set(CPACK_PACKAGE_CONTACT "dummy@foo.tld")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "NO NAME <${CPACK_PACKAGE_CONTACT}>")

set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/LICENSE")
set(CPACK_RESOURCE_FILE_README "${CMAKE_CURRENT_SOURCE_DIR}/README.md")

# that is if you want every group to have its own package,
# although the same will happen if this is not set (so it defaults to ONE_PER_GROUP)
# and CPACK_DEB_COMPONENT_INSTALL is set to YES
set(CPACK_COMPONENTS_GROUPING ALL_COMPONENTS_IN_ONE)#ONE_PER_GROUP)
# without this you won't be able to pack only specified component
set(CPACK_DEB_COMPONENT_INSTALL YES)
# list dependencies
set(CPACK_DEBIAN_PACKAGE_SHLIBDEPS YES)

include(CPack)

# can be also set as -DCPACK_COMPONENTS_ALL="AnotherLibrary"
#set(CPACK_COMPONENTS_ALL "AnotherLibrary")
message(STATUS "Components to pack: ${CPACK_COMPONENTS_ALL}")
