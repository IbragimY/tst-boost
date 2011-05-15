boost = c:\libs\boost_1_44_0
#/DUNICODE /D_UINCODE 
cl_opt = /EHsc /Gd /MT /I "$(boost)"  
lnk_opt = /link /LIBPATH:$(boost)\stage\lib
MAIN_FILES = main.cpp options.hpp

#first.exe : first.cpp
#	cl $(cl_opt) first.cpp $(lnk_opt)

main.exe : $(MAIN_FILES)
	cl $(cl_opt) main.cpp $(lnk_opt)

clear : *.obj
	del *.obj
