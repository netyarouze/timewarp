
typedef struct{
short Debug_Trigger;
short Debug_Mode;
short Debug_STR;
short Debug_BS;
short Debug_StartFrame;
short Debug_Info;
}DEBUG_OPTIONS;

typedef struct{
short Stage;
short Checkpoint;
short UnlimitedLives;
short Alternate;
}DEBUG_STAGE;

#ifdef OPTIONS_C

#include "sectors.h"

DEBUG_OPTIONS Debug_Config = {0,0,0,0,0, 1};

// For verifying integrity of files in disc.

short Verify_Complete = 0;
CdlFILE VerifyCDFile;

// Here, size is stored in bytes, not sectors.
ASSETS_FILE File_SYSTEM_CNF = {SECTOR_SYSTEM_CNF, 69};
ASSETS_FILE File_TIMEWARP_DL2 = {SECTOR_TIMEWARP_DL2, 270336};
ASSETS_FILE File_TIMEWARP_PAL = {SECTOR_TIMEWARP_PAL, 270336};
ASSETS_FILE File_ASSETS_DAT = {SECTOR_ASSETS_DAT, 1339800};
ASSETS_FILE File_MOVIES_BIN = {SECTOR_INTRO_STR, 452405248};
ASSETS_FILE File_SADEMO_STR = {SECTOR_SADEMO_STR, 12967936};
ASSETS_FILE File_DUMMY_DAT = {SECTOR_DUMMY_DAT, 33554432};

ASSETS_FILE *Expected_Files[7] = {
&File_SYSTEM_CNF,
&File_TIMEWARP_DL2,
&File_TIMEWARP_PAL,
&File_ASSETS_DAT,
&File_MOVIES_BIN,
&File_SADEMO_STR,
&File_DUMMY_DAT,
};

ASSETS_FILE Read_Files[7];

#define TOTAL_STR_MOVIES 203


extern MOVIE_FILE STR_Intro;

extern MOVIE_FILE STR_Stage1;
extern MOVIE_FILE STR_Stage1d1;
extern MOVIE_FILE STR_Stage1d2;
extern MOVIE_FILE STR_Stage1d3;
extern MOVIE_FILE STR_Stage1d4;
extern MOVIE_FILE STR_Stage1d5;
extern MOVIE_FILE STR_Stage1d6;
extern MOVIE_FILE STR_Stage1d7;
extern MOVIE_FILE STR_Stage1d8;
extern MOVIE_FILE STR_Stage1d9;
extern MOVIE_FILE STR_Stage1d10;
extern MOVIE_FILE STR_Stage1d11;
extern MOVIE_FILE STR_Stage1d12;
extern MOVIE_FILE STR_Stage1d13;
extern MOVIE_FILE STR_Stage1d14;
extern MOVIE_FILE STR_Stage1d15;
extern MOVIE_FILE STR_Stage1d16;
extern MOVIE_FILE STR_Stage1d17;
extern MOVIE_FILE STR_Stage1d18;
extern MOVIE_FILE STR_Stage1t1;
extern MOVIE_FILE STR_Stage1t2;
extern MOVIE_FILE STR_Stage1t3;

extern MOVIE_FILE STR_Stage2;
extern MOVIE_FILE STR_Stage2d1;
extern MOVIE_FILE STR_Stage2d2;
extern MOVIE_FILE STR_Stage2d3;
extern MOVIE_FILE STR_Stage2d4;
extern MOVIE_FILE STR_Stage2d5;
extern MOVIE_FILE STR_Stage2d6;
extern MOVIE_FILE STR_Stage2d7;
extern MOVIE_FILE STR_Stage2d8;
extern MOVIE_FILE STR_Stage2d9;
extern MOVIE_FILE STR_Stage2d10;
extern MOVIE_FILE STR_Stage2t1;

extern MOVIE_FILE STR_Stage12;
extern MOVIE_FILE STR_Stage12d1;
extern MOVIE_FILE STR_Stage12d2;
extern MOVIE_FILE STR_Stage12d3;
extern MOVIE_FILE STR_Stage12d4;
extern MOVIE_FILE STR_Stage12d5;
extern MOVIE_FILE STR_Stage12d6;
extern MOVIE_FILE STR_Stage12d7;
extern MOVIE_FILE STR_Stage12d8;
extern MOVIE_FILE STR_Stage12d9;
extern MOVIE_FILE STR_Stage12d10;
extern MOVIE_FILE STR_Stage12t1;

extern MOVIE_FILE STR_Stage3;
extern MOVIE_FILE STR_Stage3d1;
extern MOVIE_FILE STR_Stage3d2;
extern MOVIE_FILE STR_Stage3d3;
extern MOVIE_FILE STR_Stage3d4;
extern MOVIE_FILE STR_Stage3d5;
extern MOVIE_FILE STR_Stage3d6;
extern MOVIE_FILE STR_Stage3d7;
extern MOVIE_FILE STR_Stage3d8;
extern MOVIE_FILE STR_Stage3d9;
extern MOVIE_FILE STR_Stage3d10;
extern MOVIE_FILE STR_Stage3d11;
extern MOVIE_FILE STR_Stage3d12;
extern MOVIE_FILE STR_Stage3d13;
extern MOVIE_FILE STR_Stage3d14;
extern MOVIE_FILE STR_Stage3t1;

extern MOVIE_FILE STR_Stage13;
extern MOVIE_FILE STR_Stage13d1;
extern MOVIE_FILE STR_Stage13d2;
extern MOVIE_FILE STR_Stage13d3;
extern MOVIE_FILE STR_Stage13d4;
extern MOVIE_FILE STR_Stage13d5;
extern MOVIE_FILE STR_Stage13d6;
extern MOVIE_FILE STR_Stage13d7;
extern MOVIE_FILE STR_Stage13d8;
extern MOVIE_FILE STR_Stage13d9;
extern MOVIE_FILE STR_Stage13d10;
extern MOVIE_FILE STR_Stage13d11;
extern MOVIE_FILE STR_Stage13d12;
extern MOVIE_FILE STR_Stage13d13;
extern MOVIE_FILE STR_Stage13d14;
extern MOVIE_FILE STR_Stage13t1;

extern MOVIE_FILE STR_Stage4;
extern MOVIE_FILE STR_Stage4d1;
extern MOVIE_FILE STR_Stage4d2;
extern MOVIE_FILE STR_Stage4d3;
extern MOVIE_FILE STR_Stage4d4;
extern MOVIE_FILE STR_Stage4d5;
extern MOVIE_FILE STR_Stage4d6;
extern MOVIE_FILE STR_Stage4d7;
extern MOVIE_FILE STR_Stage4d8;
extern MOVIE_FILE STR_Stage4d9;
extern MOVIE_FILE STR_Stage4d10;
extern MOVIE_FILE STR_Stage4d11;
extern MOVIE_FILE STR_Stage4d12;
extern MOVIE_FILE STR_Stage4d13;
extern MOVIE_FILE STR_Stage4d14;
extern MOVIE_FILE STR_Stage4d15;
extern MOVIE_FILE STR_Stage4t1;
extern MOVIE_FILE STR_Stage4t2;

extern MOVIE_FILE STR_Stage14;
extern MOVIE_FILE STR_Stage14d1;
extern MOVIE_FILE STR_Stage14d2;
extern MOVIE_FILE STR_Stage14d3;
extern MOVIE_FILE STR_Stage14d4;
extern MOVIE_FILE STR_Stage14d5;
extern MOVIE_FILE STR_Stage14d6;
extern MOVIE_FILE STR_Stage14d7;
extern MOVIE_FILE STR_Stage14d8;
extern MOVIE_FILE STR_Stage14d9;
extern MOVIE_FILE STR_Stage14d10;
extern MOVIE_FILE STR_Stage14d11;
extern MOVIE_FILE STR_Stage14d12;
extern MOVIE_FILE STR_Stage14d13;
extern MOVIE_FILE STR_Stage14d14;
extern MOVIE_FILE STR_Stage14d15;
extern MOVIE_FILE STR_Stage14t1;
extern MOVIE_FILE STR_Stage14t2;

extern MOVIE_FILE STR_Stage5;
extern MOVIE_FILE STR_Stage5d1;
extern MOVIE_FILE STR_Stage5d2;
extern MOVIE_FILE STR_Stage5d3;
extern MOVIE_FILE STR_Stage5d4;
extern MOVIE_FILE STR_Stage5d5;
extern MOVIE_FILE STR_Stage5d6;
extern MOVIE_FILE STR_Stage5d7;
extern MOVIE_FILE STR_Stage5d8;
extern MOVIE_FILE STR_Stage5d9;
extern MOVIE_FILE STR_Stage5d10;
extern MOVIE_FILE STR_Stage5d11;
extern MOVIE_FILE STR_Stage5d12;
extern MOVIE_FILE STR_Stage5d13;
extern MOVIE_FILE STR_Stage5d14;
extern MOVIE_FILE STR_Stage5t1;
extern MOVIE_FILE STR_Stage5t2;

extern MOVIE_FILE STR_Stage15;
extern MOVIE_FILE STR_Stage15d1;
extern MOVIE_FILE STR_Stage15d2;
extern MOVIE_FILE STR_Stage15d3;
extern MOVIE_FILE STR_Stage15d4;
extern MOVIE_FILE STR_Stage15d5;
extern MOVIE_FILE STR_Stage15d6;
extern MOVIE_FILE STR_Stage15d7;
extern MOVIE_FILE STR_Stage15d8;
extern MOVIE_FILE STR_Stage15d9;
extern MOVIE_FILE STR_Stage15d10;
extern MOVIE_FILE STR_Stage15d11;
extern MOVIE_FILE STR_Stage15d12;
extern MOVIE_FILE STR_Stage15d13;
extern MOVIE_FILE STR_Stage15d14;
extern MOVIE_FILE STR_Stage15t1;
extern MOVIE_FILE STR_Stage15t2;

extern MOVIE_FILE STR_Stage6;
extern MOVIE_FILE STR_Stage6d1;
extern MOVIE_FILE STR_Stage6d2;
extern MOVIE_FILE STR_Stage6d3;
extern MOVIE_FILE STR_Stage6d4;
extern MOVIE_FILE STR_Stage6d5;
extern MOVIE_FILE STR_Stage6d6;
extern MOVIE_FILE STR_Stage6d7;
extern MOVIE_FILE STR_Stage6d8;
extern MOVIE_FILE STR_Stage6d9;
extern MOVIE_FILE STR_Stage6d10;
extern MOVIE_FILE STR_Stage6d11;
extern MOVIE_FILE STR_Stage6d12;
extern MOVIE_FILE STR_Stage6d13;
extern MOVIE_FILE STR_Stage6t1;
extern MOVIE_FILE STR_Stage6t2;

extern MOVIE_FILE STR_Stage16;
extern MOVIE_FILE STR_Stage16d1;
extern MOVIE_FILE STR_Stage16d2;
extern MOVIE_FILE STR_Stage16d3;
extern MOVIE_FILE STR_Stage16d4;
extern MOVIE_FILE STR_Stage16d5;
extern MOVIE_FILE STR_Stage16d6;
extern MOVIE_FILE STR_Stage16d7;
extern MOVIE_FILE STR_Stage16d8;
extern MOVIE_FILE STR_Stage16d9;
extern MOVIE_FILE STR_Stage16d10;
extern MOVIE_FILE STR_Stage16d11;
extern MOVIE_FILE STR_Stage16d12;
extern MOVIE_FILE STR_Stage16d13;
extern MOVIE_FILE STR_Stage16t1;
extern MOVIE_FILE STR_Stage16t2;

extern MOVIE_FILE STR_Stage7;
extern MOVIE_FILE STR_Stage7d1;
extern MOVIE_FILE STR_Stage7d2;
extern MOVIE_FILE STR_Stage7d3;
extern MOVIE_FILE STR_Stage7d4;
extern MOVIE_FILE STR_Stage7d5;
extern MOVIE_FILE STR_Stage7d6;
extern MOVIE_FILE STR_Stage7d7;

extern MOVIE_FILE STR_Stage17;
extern MOVIE_FILE STR_Stage17d1;
extern MOVIE_FILE STR_Stage17d2;
extern MOVIE_FILE STR_Stage17d3;
extern MOVIE_FILE STR_Stage17d4;
extern MOVIE_FILE STR_Stage17d5;
extern MOVIE_FILE STR_Stage17d6;
extern MOVIE_FILE STR_Stage17d7;

extern MOVIE_FILE STR_Stage8;
extern MOVIE_FILE STR_Stage8d1;
extern MOVIE_FILE STR_Stage8d2;
extern MOVIE_FILE STR_Stage8d3;
extern MOVIE_FILE STR_Stage8d4;

// Space Ace intro.
extern MOVIE_FILE STR_SpaceAce;

MOVIE_FILE *All_STR_Movies[TOTAL_STR_MOVIES] = {
// Intro.
&STR_Intro,
//Stage 1.
&STR_Stage1,
&STR_Stage1d1,
&STR_Stage1d2,
&STR_Stage1d3,
&STR_Stage1d4,
&STR_Stage1d5,
&STR_Stage1d6,
&STR_Stage1d7,
&STR_Stage1d8,
&STR_Stage1d9,
&STR_Stage1d10,
&STR_Stage1d11,
&STR_Stage1d12,
&STR_Stage1d13,
&STR_Stage1d14,
&STR_Stage1d15,
&STR_Stage1d16,
&STR_Stage1d17,
&STR_Stage1d18,
&STR_Stage1t1,
&STR_Stage1t2,
&STR_Stage1t3,
// Stage 2.
&STR_Stage2,
&STR_Stage2d1,
&STR_Stage2d2,
&STR_Stage2d3,
&STR_Stage2d4,
&STR_Stage2d5,
&STR_Stage2d6,
&STR_Stage2d7,
&STR_Stage2d8,
&STR_Stage2d9,
&STR_Stage2d10,
&STR_Stage2t1,
// Stage 2 mirrored.
&STR_Stage12,
&STR_Stage12d1,
&STR_Stage12d2,
&STR_Stage12d3,
&STR_Stage12d4,
&STR_Stage12d5,
&STR_Stage12d6,
&STR_Stage12d7,
&STR_Stage12d8,
&STR_Stage12d9,
&STR_Stage12d10,
&STR_Stage12t1,
// Stage 3.
&STR_Stage3,
&STR_Stage3d1,
&STR_Stage3d2,
&STR_Stage3d3,
&STR_Stage3d4,
&STR_Stage3d5,
&STR_Stage3d6,
&STR_Stage3d7,
&STR_Stage3d8,
&STR_Stage3d9,
&STR_Stage3d10,
&STR_Stage3d11,
&STR_Stage3d12,
&STR_Stage3d13,
&STR_Stage3d14,
&STR_Stage3t1,
// Stage 3 mirrored.
&STR_Stage13,
&STR_Stage13d1,
&STR_Stage13d2,
&STR_Stage13d3,
&STR_Stage13d4,
&STR_Stage13d5,
&STR_Stage13d6,
&STR_Stage13d7,
&STR_Stage13d8,
&STR_Stage13d9,
&STR_Stage13d10,
&STR_Stage13d11,
&STR_Stage13d12,
&STR_Stage13d13,
&STR_Stage13d14,
&STR_Stage13t1,
//Stage 4.
&STR_Stage4,
&STR_Stage4d1,
&STR_Stage4d2,
&STR_Stage4d3,
&STR_Stage4d4,
&STR_Stage4d5,
&STR_Stage4d6,
&STR_Stage4d7,
&STR_Stage4d8,
&STR_Stage4d9,
&STR_Stage4d10,
&STR_Stage4d11,
&STR_Stage4d12,
&STR_Stage4d13,
&STR_Stage4d14,
&STR_Stage4d15,
&STR_Stage4t1,
&STR_Stage4t2,
//Stage 4 mirrored.
&STR_Stage14,
&STR_Stage14d1,
&STR_Stage14d2,
&STR_Stage14d3,
&STR_Stage14d4,
&STR_Stage14d5,
&STR_Stage14d6,
&STR_Stage14d7,
&STR_Stage14d8,
&STR_Stage14d9,
&STR_Stage14d10,
&STR_Stage14d11,
&STR_Stage14d12,
&STR_Stage14d13,
&STR_Stage14d14,
&STR_Stage14d15,
&STR_Stage14t1,
&STR_Stage14t2,
//Stage 5.
&STR_Stage5,
&STR_Stage5d1,
&STR_Stage5d2,
&STR_Stage5d3,
&STR_Stage5d4,
&STR_Stage5d5,
&STR_Stage5d6,
&STR_Stage5d7,
&STR_Stage5d8,
&STR_Stage5d9,
&STR_Stage5d10,
&STR_Stage5d11,
&STR_Stage5d12,
&STR_Stage5d13,
&STR_Stage5d14,
&STR_Stage5t1,
&STR_Stage5t2,
//Stage 5 (mirrored).
&STR_Stage15,
&STR_Stage15d1,
&STR_Stage15d2,
&STR_Stage15d3,
&STR_Stage15d4,
&STR_Stage15d5,
&STR_Stage15d6,
&STR_Stage15d7,
&STR_Stage15d8,
&STR_Stage15d9,
&STR_Stage15d10,
&STR_Stage15d11,
&STR_Stage15d12,
&STR_Stage15d13,
&STR_Stage15d14,
&STR_Stage15t1,
&STR_Stage15t2,
//Stage 6.
&STR_Stage6,
&STR_Stage6d1,
&STR_Stage6d2,
&STR_Stage6d3,
&STR_Stage6d4,
&STR_Stage6d5,
&STR_Stage6d6,
&STR_Stage6d7,
&STR_Stage6d8,
&STR_Stage6d9,
&STR_Stage6d10,
&STR_Stage6d11,
&STR_Stage6d12,
&STR_Stage6d13,
&STR_Stage6t1,
&STR_Stage6t2,
//Stage 6 (mirrored).
&STR_Stage16,
&STR_Stage16d1,
&STR_Stage16d2,
&STR_Stage16d3,
&STR_Stage16d4,
&STR_Stage16d5,
&STR_Stage16d6,
&STR_Stage16d7,
&STR_Stage16d8,
&STR_Stage16d9,
&STR_Stage16d10,
&STR_Stage16d11,
&STR_Stage16d12,
&STR_Stage16d13,
&STR_Stage16t1,
&STR_Stage16t2,
//Stage 7.
&STR_Stage7,
&STR_Stage7d1,
&STR_Stage7d2,
&STR_Stage7d3,
&STR_Stage7d4,
&STR_Stage7d5,
&STR_Stage7d6,
&STR_Stage7d7,
//Stage 7 (mirrored).
&STR_Stage17,
&STR_Stage17d1,
&STR_Stage17d2,
&STR_Stage17d3,
&STR_Stage17d4,
&STR_Stage17d5,
&STR_Stage17d6,
&STR_Stage17d7,
// Stage 8.
&STR_Stage8,
&STR_Stage8d1,
&STR_Stage8d2,
&STR_Stage8d3,
&STR_Stage8d4,

// Space Ace intro.
&STR_SpaceAce,
};

extern short BSCurrentFrame;

extern StrInfo StrInfoBase;

extern int STRCurrentFrame;

extern DecEnv dec;

#else

extern DEBUG_OPTIONS Debug_Config;

extern short Verify_Complete;
extern short Verify_Index;

DEBUG_STAGE Debug_Stage = {0,0,0,0};

#endif