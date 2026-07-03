##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=my_new_workspace2
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=/home/kacsus/Dokumenty/my_new_workspace/my_new_workspace4
ProjectPath            :=/home/kacsus/Dokumenty/my_new_workspace/my_new_workspace4/my_new_workspace2
IntermediateDirectory  :=../build-$(WorkspaceConfiguration)/my_new_workspace2
OutDir                 :=$(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=kacsus
Date                   :=07/03/26
CodeLitePath           :=/home/kacsus/.codelite
MakeDirCommand         :=mkdir -p
LinkerName             :=/bin/g++-13
SharedObjectLinkerName :=/bin/g++-13 -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=/home/kacsus/Dokumenty/my_new_workspace/my_new_workspace4/build-$(WorkspaceConfiguration)/bin
OutputFile             :=../build-$(WorkspaceConfiguration)/bin/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch)/usr/include/ncurses.h 
IncludePCH             := 
RcIncludePath          := 
Libs                   := $(LibrarySwitch)ncurses 
ArLibs                 :=  "ncurses.a" 
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch)/usr/include/ncurses_dll.h 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := /usr/bin/ar rcu
CXX      := /bin/g++-13
CC       := /bin/gcc-13
CXXFLAGS :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
CFLAGS   :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/Suboption.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Window.cpp$(ObjectSuffix) $(IntermediateDirectory)/Suboptions_Window.cpp$(ObjectSuffix) $(IntermediateDirectory)/File_Dialog.cpp$(ObjectSuffix) $(IntermediateDirectory)/Text_buffer.cpp$(ObjectSuffix) $(IntermediateDirectory)/Character.cpp$(ObjectSuffix) $(IntermediateDirectory)/Board.cpp$(ObjectSuffix) $(IntermediateDirectory)/Non_Playable_Character.cpp$(ObjectSuffix) $(IntermediateDirectory)/Option.cpp$(ObjectSuffix) \
	$(IntermediateDirectory)/Playable_Character.cpp$(ObjectSuffix) $(IntermediateDirectory)/Read.cpp$(ObjectSuffix) $(IntermediateDirectory)/Write.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) "$(IntermediateDirectory)"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "$(IntermediateDirectory)"
	@$(MakeDirCommand) "$(OutputDirectory)"

$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "$(IntermediateDirectory)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Suboption.cpp$(ObjectSuffix): Suboption.cpp $(IntermediateDirectory)/Suboption.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/kacsus/Dokumenty/my_new_workspace/my_new_workspace4/my_new_workspace2/Suboption.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Suboption.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Suboption.cpp$(DependSuffix): Suboption.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Suboption.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Suboption.cpp$(DependSuffix) -MM Suboption.cpp

$(IntermediateDirectory)/Suboption.cpp$(PreprocessSuffix): Suboption.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Suboption.cpp$(PreprocessSuffix) Suboption.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/kacsus/Dokumenty/my_new_workspace/my_new_workspace4/my_new_workspace2/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/Window.cpp$(ObjectSuffix): Window.cpp $(IntermediateDirectory)/Window.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/kacsus/Dokumenty/my_new_workspace/my_new_workspace4/my_new_workspace2/Window.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Window.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Window.cpp$(DependSuffix): Window.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Window.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Window.cpp$(DependSuffix) -MM Window.cpp

$(IntermediateDirectory)/Window.cpp$(PreprocessSuffix): Window.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Window.cpp$(PreprocessSuffix) Window.cpp

$(IntermediateDirectory)/Suboptions_Window.cpp$(ObjectSuffix): Suboptions_Window.cpp $(IntermediateDirectory)/Suboptions_Window.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/kacsus/Dokumenty/my_new_workspace/my_new_workspace4/my_new_workspace2/Suboptions_Window.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Suboptions_Window.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Suboptions_Window.cpp$(DependSuffix): Suboptions_Window.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Suboptions_Window.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Suboptions_Window.cpp$(DependSuffix) -MM Suboptions_Window.cpp

$(IntermediateDirectory)/Suboptions_Window.cpp$(PreprocessSuffix): Suboptions_Window.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Suboptions_Window.cpp$(PreprocessSuffix) Suboptions_Window.cpp

$(IntermediateDirectory)/File_Dialog.cpp$(ObjectSuffix): File_Dialog.cpp $(IntermediateDirectory)/File_Dialog.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/kacsus/Dokumenty/my_new_workspace/my_new_workspace4/my_new_workspace2/File_Dialog.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/File_Dialog.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/File_Dialog.cpp$(DependSuffix): File_Dialog.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/File_Dialog.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/File_Dialog.cpp$(DependSuffix) -MM File_Dialog.cpp

$(IntermediateDirectory)/File_Dialog.cpp$(PreprocessSuffix): File_Dialog.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/File_Dialog.cpp$(PreprocessSuffix) File_Dialog.cpp

$(IntermediateDirectory)/Text_buffer.cpp$(ObjectSuffix): Text_buffer.cpp $(IntermediateDirectory)/Text_buffer.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/kacsus/Dokumenty/my_new_workspace/my_new_workspace4/my_new_workspace2/Text_buffer.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Text_buffer.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Text_buffer.cpp$(DependSuffix): Text_buffer.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Text_buffer.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Text_buffer.cpp$(DependSuffix) -MM Text_buffer.cpp

$(IntermediateDirectory)/Text_buffer.cpp$(PreprocessSuffix): Text_buffer.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Text_buffer.cpp$(PreprocessSuffix) Text_buffer.cpp

$(IntermediateDirectory)/Character.cpp$(ObjectSuffix): Character.cpp $(IntermediateDirectory)/Character.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/kacsus/Dokumenty/my_new_workspace/my_new_workspace4/my_new_workspace2/Character.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Character.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Character.cpp$(DependSuffix): Character.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Character.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Character.cpp$(DependSuffix) -MM Character.cpp

$(IntermediateDirectory)/Character.cpp$(PreprocessSuffix): Character.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Character.cpp$(PreprocessSuffix) Character.cpp

$(IntermediateDirectory)/Board.cpp$(ObjectSuffix): Board.cpp $(IntermediateDirectory)/Board.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/kacsus/Dokumenty/my_new_workspace/my_new_workspace4/my_new_workspace2/Board.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Board.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Board.cpp$(DependSuffix): Board.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Board.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Board.cpp$(DependSuffix) -MM Board.cpp

$(IntermediateDirectory)/Board.cpp$(PreprocessSuffix): Board.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Board.cpp$(PreprocessSuffix) Board.cpp

$(IntermediateDirectory)/Non_Playable_Character.cpp$(ObjectSuffix): Non_Playable_Character.cpp $(IntermediateDirectory)/Non_Playable_Character.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/kacsus/Dokumenty/my_new_workspace/my_new_workspace4/my_new_workspace2/Non_Playable_Character.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Non_Playable_Character.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Non_Playable_Character.cpp$(DependSuffix): Non_Playable_Character.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Non_Playable_Character.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Non_Playable_Character.cpp$(DependSuffix) -MM Non_Playable_Character.cpp

$(IntermediateDirectory)/Non_Playable_Character.cpp$(PreprocessSuffix): Non_Playable_Character.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Non_Playable_Character.cpp$(PreprocessSuffix) Non_Playable_Character.cpp

$(IntermediateDirectory)/Option.cpp$(ObjectSuffix): Option.cpp $(IntermediateDirectory)/Option.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/kacsus/Dokumenty/my_new_workspace/my_new_workspace4/my_new_workspace2/Option.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Option.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Option.cpp$(DependSuffix): Option.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Option.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Option.cpp$(DependSuffix) -MM Option.cpp

$(IntermediateDirectory)/Option.cpp$(PreprocessSuffix): Option.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Option.cpp$(PreprocessSuffix) Option.cpp

$(IntermediateDirectory)/Playable_Character.cpp$(ObjectSuffix): Playable_Character.cpp $(IntermediateDirectory)/Playable_Character.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/kacsus/Dokumenty/my_new_workspace/my_new_workspace4/my_new_workspace2/Playable_Character.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Playable_Character.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Playable_Character.cpp$(DependSuffix): Playable_Character.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Playable_Character.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Playable_Character.cpp$(DependSuffix) -MM Playable_Character.cpp

$(IntermediateDirectory)/Playable_Character.cpp$(PreprocessSuffix): Playable_Character.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Playable_Character.cpp$(PreprocessSuffix) Playable_Character.cpp

$(IntermediateDirectory)/Read.cpp$(ObjectSuffix): Read.cpp $(IntermediateDirectory)/Read.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/kacsus/Dokumenty/my_new_workspace/my_new_workspace4/my_new_workspace2/Read.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Read.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Read.cpp$(DependSuffix): Read.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Read.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Read.cpp$(DependSuffix) -MM Read.cpp

$(IntermediateDirectory)/Read.cpp$(PreprocessSuffix): Read.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Read.cpp$(PreprocessSuffix) Read.cpp

$(IntermediateDirectory)/Write.cpp$(ObjectSuffix): Write.cpp $(IntermediateDirectory)/Write.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/kacsus/Dokumenty/my_new_workspace/my_new_workspace4/my_new_workspace2/Write.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Write.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Write.cpp$(DependSuffix): Write.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Write.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Write.cpp$(DependSuffix) -MM Write.cpp

$(IntermediateDirectory)/Write.cpp$(PreprocessSuffix): Write.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Write.cpp$(PreprocessSuffix) Write.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


