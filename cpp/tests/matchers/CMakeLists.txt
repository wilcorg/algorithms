add_library(matchers STATIC)

target_sources(matchers
    PUBLIC
        UnorderedSubvectorsUnorderedElementsEq.hpp
)

# TODO: Remove me when .cpp is added
set_target_properties(matchers
    PROPERTIES
    LINKER_LANGUAGE CXX
)

target_link_libraries(matchers
    PUBLIC
    gtest
    gmock
)
