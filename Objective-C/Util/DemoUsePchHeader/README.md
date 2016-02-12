

Add new PCH file to the project: New file > Other > PCH file.

At the Target's Build Settings option, set the value of Prefix Header to your PCH file name, with the project name as prefix (i.e. for project named DemousePchHeader and PCH file named MyPrefixHeaderFile, add the value DemousePchHeader/MyPrefixHeaderFile.pch to the plist).

TIP: You can use things like $(SRCROOT) or $(PROJECT_DIR) to get to the path of where you put the .pch in the project.

At the Target's Build Settings option, set the value of Precompile Prefix Header to YES.
