# 318_F23
Code we develop or consider in Fall 2023 CPTR 318 Data Structures and Algorithms

Some of the code herein may be incomplete or incorrect. Its purpose is to illustrate
concepts in the course.

To build a particular project:
1. Navigate to the folder containing a CMakeLists.txt file.
2. Create a subfolder named 'build'.
3. Change to the build subfolder and issue the command
     cmake ..
   This creates the build infrastructure for your platform and
   toolset.
4. To build the executable, issue the command 
     cmake --build .
   This creates the executable file if the source is error-free.
   On Windows, the executable is in a subfolder named 'Debug'.
   On Linux and macOS, the executable is in the build folder.
5. To clean up all the files that cmake and your build tools can
   recreate automatically, return to the parent folder (the one
   above the build folder) and remove the build folder. Follow
   steps 2-4 to rebuild the executable when needed.

