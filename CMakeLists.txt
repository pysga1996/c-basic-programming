cmake_minimum_required(VERSION 3.16)
project(basics C)

set(CMAKE_C_STANDARD 11)

add_executable(hello-world hello-world/main.c)

file(GLOB STANDARD_INPUT_OUTPUT_SRC standard-input-output/*.c standard-input-output/*.h)

add_executable(standard-input-output ${STANDARD_INPUT_OUTPUT_SRC})

file(GLOB VARIABLE_AND_DATA_TYPE_SRC variable-and-data-type/*.c variable-and-data-type/*.h)

add_executable(variable-and-data-type ${VARIABLE_AND_DATA_TYPE_SRC})

file(GLOB OPERATOR_SRC operator/*.c operator/*.h)

add_executable(operator ${OPERATOR_SRC})

file(GLOB CONDITION_AND_LOOP_SRC condition-and-loop/*.c condition-and-loop/*.h)

add_executable(condition-and-loop ${CONDITION_AND_LOOP_SRC})

file(GLOB FUNCTION_AND_SCOPE_SRC function-and-scope/*.c function-and-scope/*.h)

add_executable(function-and-scope ${FUNCTION_AND_SCOPE_SRC})

file(GLOB ARRAY_AND_STRING_SRC array-and-string/*.c array-and-string/*.h)

add_executable(array-and-string ${ARRAY_AND_STRING_SRC})