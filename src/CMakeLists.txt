add_subdirectory(libs/math)
add_subdirectory(libs/logger)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE spdlog::spdlog math logger)

if(WIN32)
    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
        $<TARGET_FILE:logger>
        $<TARGET_FILE_DIR:${PROJECT_NAME}>
    )
endif()