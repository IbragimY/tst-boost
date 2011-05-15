boost = c:\libs\boost_1_44_0
#/DUNICODE /D_UINCODE 
cl_opt = /EHsc /Gd /MT /GR /I "$(boost)"  /DBOOST_LOG_USE_WINNT6_API 
lnk_opt = /link /LIBPATH:$(boost)\stage\lib libboost_log_setup-vc100-mt-s-1_44.lib libboost_system-vc100-mt-s-1_44.lib libboost_filesystem-vc100-mt-s-1_44.lib
MAIN_FILES = main.cpp

# -Fo -- creates object file
# -TP -- spec file as C++ file
# /Z7 -- 
# /Od -- disables opt
# /Ob0 -- disables inline
# /W3 -- warning level
# /GR -- enable RTTI
# /MDd -- creates debug multithreaded dll
# /Zc:forScope -- for initializer out of scope after loop
# /Zc:wchar_t -- wchar_t looks like native type mapped to __wchar_t
# /wd4675 -- disables 4675 warning
# /EHs -- sync exceptions handling model
# -c -- copmile withoit linking

main.exe : $(MAIN_FILES)
	cl $(cl_opt) main.cpp $(lnk_opt)

clear : *.obj
	del *.obj
