set_property(SOURCE a.txt DIRECTORY PROPERTY COMPILE_DEFINITIONS "def")
set_property(SOURCE a.txt DIRECTORY non_existing_dir PROPERTY COMPILE_DEFINITIONS "def")
set_property(SOURCE a.txt TARGET_DIRECTORY PROPERTY COMPILE_DEFINITIONS "def")
set_property(SOURCE a.txt TARGET_DIRECTORY non_existing_target PROPERTY COMPILE_DEFINITIONS "def")
