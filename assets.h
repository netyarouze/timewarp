/*

Files included in ASSETS.DAT, loaded from CD.

*/

#define ASSETS_ADDRESS 0x80090000

// BitStream files (not TIM):

// Bad ending background.
#define BENDING_BS 0x80090000

// Good ending background.
#define GENDING_BS 0x80094d34

// Resurrection animation frames.
#define RESU00_BS 0x80099ae0
#define RESU01_BS 0x8009e35c
#define RESU02_BS 0x800a2b7c
#define RESU03_BS 0x800a74f0
#define RESU04_BS 0x800abacc
#define RESU05_BS 0x800b021c
#define RESU06_BS 0x800b4a68
#define RESU07_BS 0x800b907c
#define RESU08_BS 0x800bd7c0
#define RESU09_BS 0x800c1eec
#define RESU10_BS 0x800c66d0
#define RESU11_BS 0x800cb404
#define RESU12_BS 0x800cfa60
#define RESU13_BS 0x800d483c
#define RESU14_BS 0x800d9438
#define RESU15_BS 0x800dd9e0
#define RESU16_BS 0x800e198c
#define RESU17_BS 0x800e52c0
#define RESU18_BS 0x800e8bec
#define RESU19_BS 0x800ec530
#define RESU20_BS 0x800eff78
#define RESU21_BS 0x800f38e4
#define RESU22_BS 0x800f7220
#define RESU23_BS 0x800fabe8
#define RESU24_BS 0x800fe5cc
#define RESU25_BS 0x80101e88
#define RESU26_BS 0x801057bc
#define RESU27_BS 0x80109098

// Background for language selection and credits.
#define BACK_BS 0x8010c95c

// Dead Dirk / Game over screen.
//#define GAMEOVER_BS 0x800cb404

// Title screen animation frames.
#define DEMO006_BS 0x8010c95c
#define DEMO007_BS 0x8010ecfc
#define DEMO008_BS 0x801111ec
#define DEMO009_BS 0x80112ef8
#define DEMO010_BS 0x80114e0c
#define DEMO011_BS 0x80116ef8
#define DEMO012_BS 0x80119134
#define DEMO013_BS 0x8011b35c
#define DEMO014_BS 0x8011d6d8
#define DEMO015_BS 0x8011fad0
#define DEMO016_BS 0x80121f2c
#define DEMO017_BS 0x801243a8
#define DEMO018_BS 0x801267f0
#define DEMO019_BS 0x80128d7c
#define DEMO020_BS 0x8012b3bc
#define DEMO021_BS 0x8012d40c
#define DEMO022_BS 0x8012f5c4
#define DEMO023_BS 0x8013191c
#define DEMO024_BS 0x80133d28
#define DEMO025_BS 0x801361a8
#define DEMO026_BS 0x801385d4
#define DEMO027_BS 0x8013ab44
#define DEMO028_BS 0x8013cdf4
#define DEMO029_BS 0x8013f338
#define DEMO030_BS 0x801416a4
#define DEMO031_BS 0x80143a70
#define DEMO032_BS 0x80145f84
#define DEMO033_BS 0x8014854c
#define DEMO034_BS 0x8014aa54
#define DEMO035_BS 0x8014d074
#define DEMO036_BS 0x8014f638
#define DEMO037_BS 0x80151b58
#define DEMO038_BS 0x80154020
#define DEMO039_BS 0x8015644c
#define DEMO040_BS 0x801587e4
#define DEMO041_BS 0x8015aae0
#define DEMO042_BS 0x8015d214
#define DEMO043_BS 0x8015f920
#define DEMO044_BS 0x8016203c
#define DEMO045_BS 0x801646e8
#define DEMO046_BS 0x80166dd8
#define DEMO047_BS 0x801694d4

// Sound effects:
#define SFX_VH 0x8016bb58
#define SFX_VB 0x8016d178

// Font sets. TIM files:
// 16x16 pixels.
#define FONT16W_TIM 0x801c3098// Western.
#define FONT16J_TIM 0x801cb0d8// Japanese.

// 8x8 pixels.
#define FONT8W_TIM 0x801d3118
#define FONT8J_TIM 0x801d5158

#define REUSABLE_ADDRESS 0x8016d178

#define END_OF_DATA 0x801d7198

/*

Once the sounds and textures have been initialized, space from address SFX_VB 0x8016d178 to END_OF_DATA 0x801d7198 can be cleared and reused.

*/