// Function : png_write_compressed_data_out
// Namespace: juce:pnglibNamespace
// Entry    : 0039afa0
// Prototype: undefined png_write_compressed_data_out(pnglibNamespace * param_1, long param_2)
// Body     : 0039afa0 - 0039b0ec


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_write_compressed_data_out(juce::pnglibNamespace::png_struct_def*,
   juce::pnglibNamespace::compression_state*) */

void __cdecl
juce::pnglibNamespace::png_write_compressed_data_out(pnglibNamespace *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  pnglibNamespace *ppVar3;
  ulong uVar4;
  uint uVar5;
  pnglibNamespace *ppVar6;
  uint uVar7;
  ulong uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  
  uVar5 = *(uint *)(param_2 + 0x10);
  ppVar3 = param_1 + 0xd0;
  if (param_1 == (pnglibNamespace *)0x0) {
    bVar10 = uVar5 < 0x401;
    if ((!bVar10) && (plRam00000000000000d0 != (long *)0x0)) {
      uVar5 = uVar5 - 0x400;
      plVar2 = plRam00000000000000d0;
      do {
        bVar9 = uVar5 < uRam00000000000000d8;
        uVar5 = uVar5 - uRam00000000000000d8;
        bVar11 = uVar5 == 0;
        if (bVar9) {
          uVar5 = 0;
        }
        bVar10 = bVar9 || bVar11;
      } while ((!bVar9 && !bVar11) && (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0));
    }
  }
  else {
    ppVar6 = (pnglibNamespace *)(param_2 + 0x14);
    uVar7 = 0x400;
    while( true ) {
      ppVar3 = *(pnglibNamespace **)ppVar3;
      if (uVar5 < uVar7) {
        uVar7 = uVar5;
      }
      uVar8 = (ulong)uVar7;
      if (uVar7 != 0) {
        if (*(code **)(param_1 + 0x18) == (code *)0x0) goto LAB_0039b0e5;
        (**(code **)(param_1 + 0x18))(param_1,ppVar6,uVar8);
        bVar10 = (~*(uint *)(param_1 + 0x50) & 0x300) != 0;
        if (((byte)param_1[0x13b] & 0x20) == 0) {
          bVar10 = (*(uint *)(param_1 + 0x50) & 0x800) == 0;
        }
        if (bVar10) {
          uVar1 = (ulong)*(uint *)(param_1 + 0x16c);
          do {
            uVar4 = uVar8 & 0xffffffff;
            if ((int)uVar8 == 0) {
              uVar4 = 0xffffffff;
            }
            uVar1 = zlibNamespace::crc32_z((uint)uVar1,(ulong *)ppVar6,uVar4);
            ppVar6 = ppVar6 + uVar4;
            uVar8 = uVar8 - uVar4;
          } while (uVar8 != 0);
          *(int *)(param_1 + 0x16c) = (int)uVar1;
        }
      }
      uVar5 = uVar5 - uVar7;
      bVar10 = uVar5 == 0;
      if ((bVar10) || (ppVar3 == (pnglibNamespace *)0x0)) break;
      uVar7 = *(uint *)(param_1 + 0xd8);
      ppVar6 = ppVar3 + 8;
    }
  }
  if (bVar10) {
    return;
  }
LAB_0039b0e5:
                    /* WARNING: Subroutine does not return */
  png_err(param_1);
}


