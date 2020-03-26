/* 
	Keep Note:
		The Core Generated Errs/Types are for the err status,
		or the status of which the error occured which is
		represented by a number. The exit will then return
		the number, with printing what the error was.

		_CGE Is not used majorly depended on in this file, but errors returned in other files are 
		majorly dependent on _CGE
*/

#include <stdio.h>
#include <stdlib.h>

//extern int _CGE;

// Default Errors
#  define CoreConErr                     2 // Starts at 2 since Failure is 1
#  define FileConErr                     3
#  define NotDumped                      4
#  define FoundInOtherFile               5
// ERA errors
#  define DeclarationOfEraNun            6
#  define DefaultNodeSetupEraTypeNotNun  7
#  define NotAEraType                    8
// Default Database Node errors
#  define DefaultNodeSetupNotFound       9
#  define DefaultDbNodeNotFullySetup     10
#  define MoreThanOneDefaultNodeCreated  11
// User created Database Node errors
#  define DatabaseNodeAlreadyCreated     12
// Storage Errors
#  define StorageAboveMax                13
#  define StorageAddOverload             14
// Regular success/fail errors
#  define Failure                        1
#  define Success                        0

#define RETURNERRINFO(COLOR,TYPE)                                                                                                                   \
	if(TYPE == CoreConErr) {                                                                                                                    \
		printf("%sError connection with core. \n\tReturn Exit status %d\n",COLOR,CoreConErr);                                               \
	}                                                                                                                                           \
	else if(TYPE == FileConErr) {                                                                                                               \
		printf("%sError connecting/finding file. \n\tReturn Exit status %d\n",COLOR,FileConErr);                                            \
	}                                                                                                                                           \
	else if(TYPE == FoundInOtherFile) {                                                                                                         \
		printf("%sThe string/number/character was found in another file. \n\tReturn Exit status %d\n",COLOR,FoundInOtherFile);              \
	}                                                                                                                                           \
	else if(TYPE == DeclarationOfEraNun) {                                                                                                      \
		printf("%sAttempt to set a Era type of NUN to your Database Node. \n\tERR_STATUS_%d\n",COLOR,DeclarationOfEraNun);                  \
	}                                                                                                                                           \
	else if(TYPE == DefaultNodeSetupNotFound) {                                                                                                 \
		printf("%sThe DefaultNodeSetup Database Node was not found.\n\tERR_STATUS_%d\n",COLOR,DefaultNodeSetupNotFound);                    \
	}                                                                                                                                           \
	else if(TYPE == DefaultNodeSetupEraTypeNotNun) {                                                                                            \
		printf("%sThe Era type of the Default Database Node is required to be NUN.\n\tERR_STATUS_%d\n",COLOR,DefaultNodeSetupEraTypeNotNun);\
	}                                                                                                                                           \
	else if(TYPE == DefaultDbNodeNotFullySetup) {                                                                                               \
		printf("%sThe Default Database Node is not fully set up yet.\n\tERR_STATUS_%d\n",COLOR,DefaultDbNodeNotFullySetup);                 \
	}                                                                                                                                           \
	else if(TYPE == MoreThanOneDefaultNodeCreated) {                                                                                            \
		printf("%sAttempted to create more than one Default Database Node.\n\tERR_STATUS_%d\n",COLOR,MoreThanOneDefaultNodeCreated);        \
	}                                                                                                                                           \
	else if(TYPE == DatabaseNodeAlreadyCreated) {                                                                                               \
		printf("%sAttempted to create a already existing Database Node.\n\tERR_STATUS_%d\n",COLOR,DatabaseNodeAlreadyCreated);              \
	}                                                                                                                                           \
	else if(TYPE == NotAEraType) {                                                                                                              \
		printf("%sAttempted to assign an unexisting Era type to the Database node.\n\tERR_STATUS_%d\n",COLOR,NotAEraType);                  \
	}                                                                                                                                           \
	else if(TYPE == Failure) {                                                                                                                  \
		printf("%sFailed to compile successfully. \n\tReturn Exit status %d\n",COLOR,Failure);                                              \
	 }                                                                                                                                          \
	else if(TYPE == Success) {                                                                                                                  \
		printf("%sProgram compiled successfully. \n\tReturn Exit status %d\n",COLOR,Success);                                               \
	}                                                                                                                                           \
	else {                                                                                                                                      \
		printf("%s",COLOR);                                                                                                                 \
		printf("Unknown return type\n");                                                                                                    \
	}
