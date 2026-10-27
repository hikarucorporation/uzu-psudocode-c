// Function : png_read_finish_row
// Namespace: juce:pnglibNamespace
// Entry    : 003a9ea0
// Prototype: undefined png_read_finish_row(pnglibNamespace * param_1)
// Body     : 003a9ea0 - 003aa220


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_read_finish_row(juce::pnglibNamespace::png_struct_def*) */

void __cdecl juce::pnglibNamespace::png_read_finish_row(pnglibNamespace *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  pnglibNamespace pVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  pnglibNamespace pVar9;
  
  iVar3 = *(int *)(param_1 + 0x134);
  *(uint *)(param_1 + 0x134) = iVar3 + 1U;
  if (iVar3 + 1U < *(uint *)(param_1 + 0x120)) {
    return;
  }
  if (param_1[0x184] == (pnglibNamespace)0x0) {
LAB_003a9f0f:
    if (((byte)param_1[0x50] & 8) == 0) {
      png_read_IDAT_data(param_1,0,0);
      *(undefined8 *)(param_1 + 0x78) = 0;
      if ((*(uint *)(param_1 + 0x50) & 8) == 0) {
        param_1[0x4c] = (pnglibNamespace)((byte)param_1[0x4c] | 8);
        *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 8;
      }
    }
    if (*(int *)(param_1 + 0x58) == 0x49444154) {
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
      png_crc_finish(param_1,*(uint *)(param_1 + 0x168));
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x134) = 0;
    memset(*(void **)(param_1 + 0x140),0,*(long *)(param_1 + 0x128) + 1);
    pVar5 = param_1[0x185];
    pVar9 = (pnglibNamespace)((char)pVar5 + 1);
    if (6 < (byte)pVar9) goto LAB_003a9f06;
    iVar3 = *(int *)(param_1 + 0x118);
    uVar8 = (ulong)(byte)pVar9;
    bVar1 = *(byte *)((long)&png_do_write_interlace(juce::pnglibNamespace::png_row_info_struct*,unsigned_char*,int)
                             ::png_pass_inc + uVar8);
    uVar6 = ~(uint)*(byte *)((long)&png_do_write_interlace(juce::pnglibNamespace::png_row_info_struct*,unsigned_char*,int)
                                    ::png_pass_start + uVar8) + iVar3 + (uint)bVar1;
    *(uint *)(param_1 + 0x130) = uVar6 / bVar1;
    if (((byte)param_1[0x54] & 2) == 0) {
      iVar4 = *(int *)(param_1 + 0x11c);
      bVar2 = *(byte *)((long)&png_write_finish_row(juce::pnglibNamespace::png_struct_def*)::
                               png_pass_yinc + uVar8);
      uVar7 = ~(uint)*(byte *)((long)&png_write_finish_row(juce::pnglibNamespace::png_struct_def*)::
                                      png_pass_ystart + uVar8) + iVar4 + (uint)bVar2;
      *(uint *)(param_1 + 0x120) = uVar7 / bVar2;
      if ((uVar7 < bVar2) || (uVar6 < bVar1)) {
        pVar9 = (pnglibNamespace)((char)pVar5 + 2);
        if ((byte)pVar9 < 7) {
          uVar8 = (ulong)(byte)pVar9;
          bVar1 = *(byte *)((long)&png_do_write_interlace(juce::pnglibNamespace::png_row_info_struct*,unsigned_char*,int)
                                   ::png_pass_inc + uVar8);
          uVar6 = ~(uint)*(byte *)((long)&png_do_write_interlace(juce::pnglibNamespace::png_row_info_struct*,unsigned_char*,int)
                                          ::png_pass_start + uVar8) + iVar3 + (uint)bVar1;
          *(uint *)(param_1 + 0x130) = uVar6 / bVar1;
          bVar2 = *(byte *)((long)&png_write_finish_row(juce::pnglibNamespace::png_struct_def*)::
                                   png_pass_yinc + uVar8);
          uVar7 = ~(uint)*(byte *)((long)&png_write_finish_row(juce::pnglibNamespace::png_struct_def*)
                                          ::png_pass_ystart + uVar8) + iVar4 + (uint)bVar2;
          *(uint *)(param_1 + 0x120) = uVar7 / bVar2;
          if ((bVar2 <= uVar7) && (bVar1 <= uVar6)) goto LAB_003a9fef;
          pVar9 = (pnglibNamespace)((char)pVar5 + 3);
          if (6 < (byte)pVar9) goto LAB_003a9f06;
          uVar8 = (ulong)(byte)pVar9;
          bVar1 = *(byte *)((long)&png_do_write_interlace(juce::pnglibNamespace::png_row_info_struct*,unsigned_char*,int)
                                   ::png_pass_inc + uVar8);
          uVar6 = ~(uint)*(byte *)((long)&png_do_write_interlace(juce::pnglibNamespace::png_row_info_struct*,unsigned_char*,int)
                                          ::png_pass_start + uVar8) + iVar3 + (uint)bVar1;
          *(uint *)(param_1 + 0x130) = uVar6 / bVar1;
          bVar2 = *(byte *)((long)&png_write_finish_row(juce::pnglibNamespace::png_struct_def*)::
                                   png_pass_yinc + uVar8);
          uVar7 = ~(uint)*(byte *)((long)&png_write_finish_row(juce::pnglibNamespace::png_struct_def*)
                                          ::png_pass_ystart + uVar8) + iVar4 + (uint)bVar2;
          *(uint *)(param_1 + 0x120) = uVar7 / bVar2;
          if ((bVar2 <= uVar7) && (bVar1 <= uVar6)) goto LAB_003a9fef;
          pVar9 = (pnglibNamespace)((char)pVar5 + 4);
          if (6 < (byte)pVar9) goto LAB_003a9f06;
          uVar8 = (ulong)(byte)pVar9;
          bVar1 = *(byte *)((long)&png_do_write_interlace(juce::pnglibNamespace::png_row_info_struct*,unsigned_char*,int)
                                   ::png_pass_inc + uVar8);
          uVar6 = ~(uint)*(byte *)((long)&png_do_write_interlace(juce::pnglibNamespace::png_row_info_struct*,unsigned_char*,int)
                                          ::png_pass_start + uVar8) + iVar3 + (uint)bVar1;
          *(uint *)(param_1 + 0x130) = uVar6 / bVar1;
          bVar2 = *(byte *)((long)&png_write_finish_row(juce::pnglibNamespace::png_struct_def*)::
                                   png_pass_yinc + uVar8);
          uVar7 = ~(uint)*(byte *)((long)&png_write_finish_row(juce::pnglibNamespace::png_struct_def*)
                                          ::png_pass_ystart + uVar8) + iVar4 + (uint)bVar2;
          *(uint *)(param_1 + 0x120) = uVar7 / bVar2;
          if ((bVar2 <= uVar7) && (bVar1 <= uVar6)) goto LAB_003a9fef;
          pVar9 = (pnglibNamespace)((char)pVar5 + 5);
          if (6 < (byte)pVar9) goto LAB_003a9f06;
          uVar8 = (ulong)(byte)pVar9;
          bVar1 = *(byte *)((long)&png_do_write_interlace(juce::pnglibNamespace::png_row_info_struct*,unsigned_char*,int)
                                   ::png_pass_inc + uVar8);
          uVar6 = ~(uint)*(byte *)((long)&png_do_write_interlace(juce::pnglibNamespace::png_row_info_struct*,unsigned_char*,int)
                                          ::png_pass_start + uVar8) + iVar3 + (uint)bVar1;
          *(uint *)(param_1 + 0x130) = uVar6 / bVar1;
          bVar2 = *(byte *)((long)&png_write_finish_row(juce::pnglibNamespace::png_struct_def*)::
                                   png_pass_yinc + uVar8);
          uVar7 = ~(uint)*(byte *)((long)&png_write_finish_row(juce::pnglibNamespace::png_struct_def*)
                                          ::png_pass_ystart + uVar8) + iVar4 + (uint)bVar2;
          *(uint *)(param_1 + 0x120) = uVar7 / bVar2;
          if ((bVar2 <= uVar7) && (bVar1 <= uVar6)) goto LAB_003a9fef;
          pVar9 = (pnglibNamespace)((char)pVar5 + 6);
          if (6 < (byte)pVar9) goto LAB_003a9f06;
          uVar8 = (ulong)(byte)pVar9;
          bVar1 = *(byte *)((long)&png_do_write_interlace(juce::pnglibNamespace::png_row_info_struct*,unsigned_char*,int)
                                   ::png_pass_inc + uVar8);
          uVar6 = ~(uint)*(byte *)((long)&png_do_write_interlace(juce::pnglibNamespace::png_row_info_struct*,unsigned_char*,int)
                                          ::png_pass_start + uVar8) + iVar3 + (uint)bVar1;
          *(uint *)(param_1 + 0x130) = uVar6 / bVar1;
          bVar2 = *(byte *)((long)&png_write_finish_row(juce::pnglibNamespace::png_struct_def*)::
                                   png_pass_yinc + uVar8);
          uVar7 = ~(uint)*(byte *)((long)&png_write_finish_row(juce::pnglibNamespace::png_struct_def*)
                                          ::png_pass_ystart + uVar8) + iVar4 + (uint)bVar2;
          *(uint *)(param_1 + 0x120) = uVar7 / bVar2;
          if ((bVar2 <= uVar7) && (bVar1 <= uVar6)) goto LAB_003a9fef;
          pVar9 = (pnglibNamespace)((char)pVar5 + 7);
          if ((byte)pVar5 < 0xf9) {
            pVar5 = pVar9;
          }
          else {
            uVar8 = (ulong)(byte)pVar9;
            bVar1 = *(byte *)((long)&png_do_write_interlace(juce::pnglibNamespace::png_row_info_struct*,unsigned_char*,int)
                                     ::png_pass_inc + uVar8);
            uVar6 = ~(uint)*(byte *)((long)&png_do_write_interlace(juce::pnglibNamespace::png_row_info_struct*,unsigned_char*,int)
                                            ::png_pass_start + uVar8) + iVar3 + (uint)bVar1;
            *(uint *)(param_1 + 0x130) = uVar6 / bVar1;
            bVar2 = *(byte *)((long)&png_write_finish_row(juce::pnglibNamespace::png_struct_def*)::
                                     png_pass_yinc + uVar8);
            uVar7 = ~(uint)*(byte *)((long)&png_write_finish_row(juce::pnglibNamespace::png_struct_def*)
                                            ::png_pass_ystart + uVar8) + iVar4 + (uint)bVar2;
            *(uint *)(param_1 + 0x120) = uVar7 / bVar2;
            pVar5 = (pnglibNamespace)0x7;
            if ((bVar2 <= uVar7) && (bVar1 <= uVar6)) goto LAB_003a9fef;
          }
        }
        else {
LAB_003a9f06:
          pVar5 = pVar9;
        }
        param_1[0x185] = pVar5;
        goto LAB_003a9f0f;
      }
    }
LAB_003a9fef:
    param_1[0x185] = pVar9;
  }
  return;
}


