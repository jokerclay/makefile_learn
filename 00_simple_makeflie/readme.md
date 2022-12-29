# basic of makefile

```makefile

# A rule consists 3 part
#
################################
#
# target:prerequisites
# 		1. prerequisites
# 		2. commands
#
################################
#
# * target is the files or things that must be made.
#
# * prerequisites or dependents are those files that must exist
# before that target can be successfully created.
#
# * commands are those shell commands that will create the target
# form the prerequisites.
#
################################
#
# example of a rule to complie a C program
#
#  before :
#  ^         after
#  |         ^
#  |         |
#  |         |
# ----:------------       }
# foo.o:foo.c foo.h       |
# 	gcc -c foo.c           >  A rule
# - ------------          |
# |       |               }
# |       |
# V       |
# tab     |
#         v
#         commands
#
################################
#
#  when make is asked to evaluate a rule
# 1. make will find the files `target` and `prerequisites` indicated(表明的)
# 2. attempt to update associcated prerequisites
# 3. attempt to update associcated target
# 4. if any prerequisites is newer than target, target will be remode bying execute the commands
# 5. each commands passing to shell is executed by its own subshell,
#    if any of the command generate an error, the building of the target is terminated
#    and `make` exit.
# 6. one file will be considered newer than another if it has been modified more recently
#

main:main.c
	 gcc main.c -o main

```
