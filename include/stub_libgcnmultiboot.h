// stub_libgcnmultiboot.h
#ifndef STUB_LIBGCNMULTIBOOT_H
#define STUB_LIBGCNMULTIBOOT_H

struct GcmbStruct {};

static inline void GameCubeMultiBoot_HandleSerialInterrupt(struct GcmbStruct* s) {}
static inline void GameCubeMultiBoot_Init(struct GcmbStruct* s) {}
static inline void GameCubeMultiBoot_Main(struct GcmbStruct* s) {}
static inline void GameCubeMultiBoot_ExecuteProgram(struct GcmbStruct* s) {}
static inline void GameCubeMultiBoot_Quit(void) {}

extern const u8 gMultiBootProgram_PokemonColosseum_Start[];

#endif // STUB_LIBGCNMULTIBOOT_H
