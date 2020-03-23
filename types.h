/* 
	structs and other data structures needed for
	the project
*/

#include <stdio.h>


// Keeps track of Database Nodes added
typedef struct {
	int AddId;
	char NameOfNode[500][100];
} AddInfo;

// This will be for the Main Database Node, or for the Database Node that sets up the whole application
/* 
	The DefaultDatabaseNode is set with Era "NUN" because there is no era types when the DefaultDatabaseNode is setup
*/
typedef struct {
	// We want to keep the name
	char *NodeName;
	// Has a different type of id
	char Id[150];
	// Signals it will set up
	// 4 default signals, needs no more than 20 characters
	char ERAS[4][20];
} DefaultMainDbNode;

// Will continue the work upon the DefaultMainDbNode
static int
DefaultDbNode(DefaultMainDbNode *DefDbMainNode);

static int
StoreInFile(int AddId, char UpdateInfo[500], char *StoreInFile, AddInfo *AddedInfo);

// Used to keep track of reset information
typedef struct {
	int ResetId;
	char *DatabaseNode;
} Reset;

// Used when setting up the core of the Database Node
typedef struct {
	int NodeId;
	struct {
		bool Core_Generated_Errs;
		bool CanRead;
		char *EraType;
		char *NodeName;
	} CoreInfo;
} DatabaseNodeset;
