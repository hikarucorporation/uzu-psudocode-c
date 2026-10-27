// Function : png_cache_unknown_chunk
// Namespace: juce:pnglibNamespace
// Entry    : 003a73c0
// Prototype: undefined8 png_cache_unknown_chunk(pnglibNamespace * param_1, uint param_2)
// Body     : 003a73c0 - 003a757a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_cache_unknown_chunk(juce::pnglibNamespace::png_struct_def*, unsigned
   int) */

undefined8 __cdecl
juce::pnglibNamespace::png_cache_unknown_chunk(pnglibNamespace *param_1,uint param_2)

{
  undefined4 uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong __size;
  
  if (*(void **)(param_1 + 0x338) != (void *)0x0) {
    free(*(void **)(param_1 + 0x338));
    *(undefined8 *)(param_1 + 0x338) = 0;
  }
  __size = (ulong)param_2;
  if ((*(ulong *)(param_1 + 0x328) + 1 < 2) || (__size <= *(ulong *)(param_1 + 0x328))) {
    uVar1 = *(undefined4 *)(param_1 + 0x138);
    param_1[0x330] = SUB41((uint)uVar1 >> 0x18,0);
    param_1[0x331] = SUB41((uint)uVar1 >> 0x10,0);
    param_1[0x332] = SUB41((uint)uVar1 >> 8,0);
    param_1[0x333] = SUB41(uVar1,0);
    param_1[0x334] = (pnglibNamespace)0x0;
    *(ulong *)(param_1 + 0x340) = __size;
    param_1[0x348] = param_1[0x4c];
    if (param_2 == 0) {
      *(undefined8 *)(param_1 + 0x338) = 0;
      goto LAB_003a755b;
    }
    puVar5 = malloc(__size);
    if (puVar5 == (ulong *)0x0) {
      png_warning((long)param_1,"Out of memory");
      *(undefined8 *)(param_1 + 0x338) = 0;
    }
    else {
      *(ulong **)(param_1 + 0x338) = puVar5;
    }
  }
  else {
    puVar5 = (ulong *)0x0;
  }
  if ((param_2 != 0) && (puVar5 == (ulong *)0x0)) {
    png_crc_finish(param_1,param_2);
    if (((byte)param_1[0x52] & 0x10) != 0) {
      png_chunk_warning((long)param_1,0x5e4fdf);
      return 0;
    }
LAB_003a7573:
                    /* WARNING: Subroutine does not return */
    png_err(param_1);
  }
  if (param_2 != 0) {
    if (*(code **)(param_1 + 0x20) == (code *)0x0) goto LAB_003a7573;
    (**(code **)(param_1 + 0x20))(param_1,puVar5,__size);
    bVar2 = (~*(uint *)(param_1 + 0x50) & 0x300) != 0;
    if (((byte)param_1[0x13b] & 0x20) == 0) {
      bVar2 = (*(uint *)(param_1 + 0x50) & 0x800) == 0;
    }
    if (bVar2) {
      uVar3 = (ulong)*(uint *)(param_1 + 0x16c);
      do {
        uVar4 = __size & 0xffffffff;
        if ((int)__size == 0) {
          uVar4 = 0xffffffff;
        }
        uVar3 = zlibNamespace::crc32_z((uint)uVar3,puVar5,uVar4);
        puVar5 = (ulong *)((long)puVar5 + uVar4);
        __size = __size - uVar4;
      } while (__size != 0);
      *(int *)(param_1 + 0x16c) = (int)uVar3;
    }
  }
LAB_003a755b:
  png_crc_finish(param_1,0);
  return 1;
}


