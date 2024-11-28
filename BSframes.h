/*

These are the bitstream backgrounds and animations previously loaded from CD.

*/

/* $PSLibId: Run-time Library Release 4.3$ */
#include <sys/types.h>

#define BSLOOP 1
#define BSNOLOOP 0

#define TOTAL_BS_MOVIES 7

#ifdef BSPLAY_C


u_long	*BSBackground[] = {
(u_long *)BACK_BS, 0,
};

u_long	*BSBadEnding[] = {
(u_long *)BENDING_BS, 0,
};

u_long	*BSGoodEnding[] = {
(u_long *)GENDING_BS, 0,
};

/*
u_long	*BSGameOver[] = {
(u_long *)GAMEOVER_BS, 0,
};
*/

u_long	*BSGameOver[] = {
(u_long *)RESU00_BS, (u_long *)RESU01_BS, (u_long *)RESU02_BS, (u_long *)RESU03_BS, (u_long *)RESU04_BS, (u_long *)RESU05_BS, (u_long *)RESU06_BS, (u_long *)RESU07_BS, (u_long *)RESU08_BS, (u_long *)RESU09_BS, (u_long *)RESU10_BS, (u_long *)RESU11_BS, 0,
};

u_long	*BSResurrection[] = {
(u_long *)RESU00_BS, (u_long *)RESU01_BS, (u_long *)RESU02_BS, (u_long *)RESU03_BS, (u_long *)RESU04_BS, (u_long *)RESU05_BS, (u_long *)RESU06_BS, (u_long *)RESU07_BS, (u_long *)RESU08_BS, (u_long *)RESU09_BS, (u_long *)RESU10_BS, (u_long *)RESU11_BS, (u_long *)RESU12_BS, (u_long *)RESU13_BS, (u_long *)RESU14_BS, (u_long *)RESU15_BS, (u_long *)RESU16_BS, (u_long *)RESU17_BS, (u_long *)RESU18_BS, (u_long *)RESU19_BS, (u_long *)RESU20_BS, (u_long *)RESU21_BS, (u_long *)RESU22_BS, (u_long *)RESU23_BS, (u_long *)RESU24_BS, (u_long *)RESU25_BS, (u_long *)RESU26_BS, (u_long *)RESU27_BS, 0,
};

u_long	*BSTitle[] = {
(u_long *)DEMO006_BS, (u_long *)DEMO007_BS, (u_long *)DEMO008_BS, (u_long *)DEMO009_BS, (u_long *)DEMO010_BS, (u_long *)DEMO011_BS, (u_long *)DEMO012_BS, (u_long *)DEMO013_BS, (u_long *)DEMO014_BS, (u_long *)DEMO015_BS, (u_long *)DEMO016_BS, (u_long *)DEMO017_BS, (u_long *)DEMO018_BS, (u_long *)DEMO019_BS, (u_long *)DEMO020_BS, (u_long *)DEMO021_BS, (u_long *)DEMO022_BS, (u_long *)DEMO023_BS, (u_long *)DEMO024_BS, (u_long *)DEMO025_BS, (u_long *)DEMO026_BS, (u_long *)DEMO027_BS, (u_long *)DEMO028_BS, (u_long *)DEMO029_BS, (u_long *)DEMO030_BS, (u_long *)DEMO031_BS, (u_long *)DEMO032_BS, (u_long *)DEMO033_BS, (u_long *)DEMO034_BS, (u_long *)DEMO035_BS, (u_long *)DEMO036_BS, (u_long *)DEMO037_BS, (u_long *)DEMO038_BS, (u_long *)DEMO039_BS, (u_long *)DEMO040_BS, (u_long *)DEMO041_BS, (u_long *)DEMO042_BS, (u_long *)DEMO043_BS, (u_long *)DEMO044_BS, (u_long *)DEMO045_BS, (u_long *)DEMO046_BS, (u_long *)DEMO047_BS, (u_long *)DEMO046_BS, (u_long *)DEMO045_BS, (u_long *)DEMO044_BS, (u_long *)DEMO043_BS, (u_long *)DEMO042_BS, (u_long *)DEMO041_BS, (u_long *)DEMO040_BS, (u_long *)DEMO039_BS, (u_long *)DEMO038_BS, (u_long *)DEMO037_BS, (u_long *)DEMO036_BS, (u_long *)DEMO035_BS, (u_long *)DEMO034_BS, (u_long *)DEMO033_BS, (u_long *)DEMO032_BS, (u_long *)DEMO031_BS, (u_long *)DEMO030_BS, (u_long *)DEMO029_BS, (u_long *)DEMO028_BS, (u_long *)DEMO027_BS, (u_long *)DEMO026_BS, (u_long *)DEMO025_BS, (u_long *)DEMO024_BS, (u_long *)DEMO023_BS, (u_long *)DEMO022_BS, (u_long *)DEMO021_BS, (u_long *)DEMO020_BS, (u_long *)DEMO019_BS, (u_long *)DEMO018_BS, (u_long *)DEMO017_BS, (u_long *)DEMO016_BS, (u_long *)DEMO015_BS, (u_long *)DEMO014_BS, (u_long *)DEMO013_BS, (u_long *)DEMO012_BS, (u_long *)DEMO011_BS, (u_long *)DEMO010_BS, (u_long *)DEMO009_BS, (u_long *)DEMO008_BS, (u_long *)DEMO007_BS, 0,
};


#else

extern u_long	*BSBackground[];
extern u_long	*BSBadEnding[];
extern u_long	*BSGoodEnding[];
extern u_long	*BSResurrection[];
extern u_long	*BSGameOver[];
extern u_long	*BSTitle[];

#endif
