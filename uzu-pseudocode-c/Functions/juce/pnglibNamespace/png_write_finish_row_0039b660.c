// Function : png_write_finish_row
// Namespace: juce:pnglibNamespace
// Entry    : 0039b660
// Prototype: undefined png_write_finish_row(pnglibNamespace * param_1)
// Body     : 0039b660 - 0039b9e1


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_write_finish_row(juce::pnglibNamespace::png_struct_def*) */

void __cdecl juce::pnglibNamespace::png_write_finish_row(pnglibNamespace *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  pnglibNamespace pVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  pnglibNamespace pVar9;
  
  iVar3 = *(int *)(param_1 + 0x134);
  *(uint *)(param_1 + 0x134) = iVar3 + 1U;
  if (iVar3 + 1U < *(uint *)(param_1 + 0x120)) {
    return;
  }
  if (param_1[0x184] == (pnglibNamespace)0x0) goto LAB_0039b6d6;
  *(undefined4 *)(param_1 + 0x134) = 0;
  pVar5 = param_1[0x185];
  if (((byte)param_1[0x54] & 2) != 0) {
    param_1[0x185] = (pnglibNamespace)((char)pVar5 + 1U);
    if (6 < (byte)((char)pVar5 + 1U)) goto LAB_0039b6d6;
    goto LAB_0039b765;
  }
  pVar9 = (pnglibNamespace)((char)pVar5 + 1);
  if ((byte)pVar9 < 7) {
    iVar3 = *(int *)(param_1 + 0x118);
    iVar4 = *(int *)(param_1 + 0x11c);
    uVar7 = (ulong)(byte)pVar9;
    bVar1 = *(byte *)((long)&png_do_write_interlace(juce::pnglibNamespace::png_row_info_struct*,unsigned_char*,int)
                             ::png_pass_inc + uVar7);
    uVar8 = ~(uint)*(byte *)((long)&png_do_write_interlace(juce::pnglibNamespace::png_row_info_struct*,unsigned_char*,int)
                                    ::png_pass_start + uVar7) + iVar3 + (uint)bVar1;
    *(uint *)(param_1 + 0x124) = uVar8 / bVar1;
    bVar2 = *(byte *)((long)&png_write_finish_row(juce::pnglibNamespace::png_struct_def*)::
                             png_pass_yinc + uVar7);
    uVar6 = ~(uint)*(byte *)((long)&png_write_finish_row(juce::pnglibNamespace::png_struct_def*)::
                                    png_pass_ystart + uVar7) + iVar4 + (uint)bVar2;
    *(uint *)(param_1 + 0x120) = uVar6 / bVar2;
    if ((bVar1 <= uVar8) && (bVar2 <= uVar6)) {
LAB_0039b75e:
      param_1[0x185] = pVar9;
LAB_0039b765:
      if (*(void **)(param_1 + 0x140) == (void *)0x0) {
        return;
      }
      uVar7 = (ulong)(byte)param_1[0x189] * (ulong)(byte)param_1[0x18c];
      if ((uint)uVar7 < 8) {
        uVar7 = *(uint *)(param_1 + 0x118) * uVar7 + 7 >> 3;
      }
      else {
        uVar7 = (ulong)*(uint *)(param_1 + 0x118) * (uVar7 >> 3);
      }
      memset(*(void **)(param_1 + 0x140),0,uVar7 + 1);
      return;
    }
    pVar9 = (pnglibNamespace)((char)pVar5 + 2);
    if (6 < (byte)pVar9) goto LAB_0039b6b6;
    uVar7 = (ulong)(byte)pVar9;
    bVar1 = *(byte *)((long)&png_do_write_interlace(juce::pnglibNamespace::png_row_info_struct*,unsigned_char*,int)
                             ::png_pass_inc + uVar7);
    uVar8 = ~(uint)*(byte *)((long)&png_do_write_interlace(juce::pnglibNamespace::png_row_info_struct*,unsigned_char*,int)
                                    ::png_pass_start + uVar7) + iVar3 + (uint)bVar1;
    *(uint *)(param_1 + 0x124) = uVar8 / bVar1;
    bVar2 = *(byte *)((long)&png_write_finish_row(juce::pnglibNamespace::png_struct_def*)::
                             png_pass_yinc + uVar7);
    uVar6 = ~(uint)*(byte *)((long)&png_write_finish_row(juce::pnglibNamespace::png_struct_def*)::
                                    png_pass_ystart + uVar7) + iVar4 + (uint)bVar2;
    *(uint *)(param_1 + 0x120) = uVar6 / bVar2;
    if ((bVar1 <= uVar8) && (bVar2 <= uVar6)) goto LAB_0039b75e;
    pVar9 = (pnglibNamespace)((char)pVar5 + 3);
    if (6 < (byte)pVar9) goto LAB_0039b6b6;
    uVar7 = (ulong)(byte)pVar9;
    bVar1 = *(byte *)((long)&png_do_write_interlace(juce::pnglibNamespace::png_row_info_struct*,unsigned_char*,int)
                             ::png_pass_inc + uVar7);
    uVar8 = ~(uint)*(byte *)((long)&png_do_write_interlace(juce::pnglibNamespace::png_row_info_struct*,unsigned_char*,int)
                                    ::png_pass_start + uVar7) + iVar3 + (uint)bVar1;
    *(uint *)(param_1 + 0x124) = uVar8 / bVar1;
    bVar2 = *(byte *)((long)&png_write_finish_row(juce::pnglibNamespace::png_struct_def*)::
                             png_pass_yinc + uVar7);
    uVar6 = ~(uint)*(byte *)((long)&png_write_finish_row(juce::pnglibNamespace::png_struct_def*)::
                                    png_pass_ystart + uVar7) + iVar4 + (uint)bVar2;
    *(uint *)(param_1 + 0x120) = uVar6 / bVar2;
    if ((bVar1 <= uVar8) && (bVar2 <= uVar6)) goto LAB_0039b75e;
    pVar9 = (pnglibNamespace)((char)pVar5 + 4);
    if (6 < (byte)pVar9) goto LAB_0039b6b6;
    uVar7 = (ulong)(byte)pVar9;
    bVar1 = *(byte *)((long)&png_do_write_interlace(juce::pnglibNamespace::png_row_info_struct*,unsigned_char*,int)
                             ::png_pass_inc + uVar7);
    uVar8 = ~(uint)*(byte *)((long)&png_do_write_interlace(juce::pnglibNamespace::png_row_info_struct*,unsigned_char*,int)
                                    ::png_pass_start + uVar7) + iVar3 + (uint)bVar1;
    *(uint *)(param_1 + 0x124) = uVar8 / bVar1;
    bVar2 = *(byte *)((long)&png_write_finish_row(juce::pnglibNamespace::png_struct_def*)::
                             png_pass_yinc + uVar7);
    uVar6 = ~(uint)*(byte *)((long)&png_write_finish_row(juce::pnglibNamespace::png_struct_def*)::
                                    png_pass_ystart + uVar7) + iVar4 + (uint)bVar2;
    *(uint *)(param_1 + 0x120) = uVar6 / bVar2;
    if ((bVar1 <= uVar8) && (bVar2 <= uVar6)) goto LAB_0039b75e;
    pVar9 = (pnglibNamespace)((char)pVar5 + 5);
    if (6 < (byte)pVar9) goto LAB_0039b6b6;
    uVar7 = (ulong)(byte)pVar9;
    bVar1 = *(byte *)((long)&png_do_write_interlace(juce::pnglibNamespace::png_row_info_struct*,unsigned_char*,int)
                             ::png_pass_inc + uVar7);
    uVar8 = ~(uint)*(byte *)((long)&png_do_write_interlace(juce::pnglibNamespace::png_row_info_struct*,unsigned_char*,int)
                                    ::png_pass_start + uVar7) + iVar3 + (uint)bVar1;
    *(uint *)(param_1 + 0x124) = uVar8 / bVar1;
    bVar2 = *(byte *)((long)&png_write_finish_row(juce::pnglibNamespace::png_struct_def*)::
                             png_pass_yinc + uVar7);
    uVar6 = ~(uint)*(byte *)((long)&png_write_finish_row(juce::pnglibNamespace::png_struct_def*)::
                                    png_pass_ystart + uVar7) + iVar4 + (uint)bVar2;
    *(uint *)(param_1 + 0x120) = uVar6 / bVar2;
    if ((bVar1 <= uVar8) && (bVar2 <= uVar6)) goto LAB_0039b75e;
    pVar9 = (pnglibNamespace)((char)pVar5 + 6);
    if (6 < (byte)pVar9) goto LAB_0039b6b6;
    uVar7 = (ulong)(byte)pVar9;
    bVar1 = *(byte *)((long)&png_do_write_interlace(juce::pnglibNamespace::png_row_info_struct*,unsigned_char*,int)
                             ::png_pass_inc + uVar7);
    uVar8 = ~(uint)*(byte *)((long)&png_do_write_interlace(juce::pnglibNamespace::png_row_info_struct*,unsigned_char*,int)
                                    ::png_pass_start + uVar7) + iVar3 + (uint)bVar1;
    *(uint *)(param_1 + 0x124) = uVar8 / bVar1;
    bVar2 = *(byte *)((long)&png_write_finish_row(juce::pnglibNamespace::png_struct_def*)::
                             png_pass_yinc + uVar7);
    uVar6 = ~(uint)*(byte *)((long)&png_write_finish_row(juce::pnglibNamespace::png_struct_def*)::
                                    png_pass_ystart + uVar7) + iVar4 + (uint)bVar2;
    *(uint *)(param_1 + 0x120) = uVar6 / bVar2;
    if ((bVar1 <= uVar8) && (bVar2 <= uVar6)) goto LAB_0039b75e;
    pVar9 = (pnglibNamespace)((char)pVar5 + 7);
    if ((byte)pVar5 < 0xf9) {
      pVar5 = pVar9;
    }
    else {
      uVar7 = (ulong)(byte)pVar9;
      bVar1 = *(byte *)((long)&png_do_write_interlace(juce::pnglibNamespace::png_row_info_struct*,unsigned_char*,int)
                               ::png_pass_inc + uVar7);
      uVar8 = ~(uint)*(byte *)((long)&png_do_write_interlace(juce::pnglibNamespace::png_row_info_struct*,unsigned_char*,int)
                                      ::png_pass_start + uVar7) + iVar3 + (uint)bVar1;
      *(uint *)(param_1 + 0x124) = uVar8 / bVar1;
      bVar2 = *(byte *)((long)&png_write_finish_row(juce::pnglibNamespace::png_struct_def*)::
                               png_pass_yinc + uVar7);
      uVar6 = ~(uint)*(byte *)((long)&png_write_finish_row(juce::pnglibNamespace::png_struct_def*)::
                                      png_pass_ystart + uVar7) + iVar4 + (uint)bVar2;
      *(uint *)(param_1 + 0x120) = uVar6 / bVar2;
      pVar5 = (pnglibNamespace)0x7;
      if ((bVar1 <= uVar8) && (bVar2 <= uVar6)) goto LAB_0039b75e;
    }
  }
  else {
LAB_0039b6b6:
    pVar5 = pVar9;
  }
  param_1[0x185] = pVar5;
LAB_0039b6d6:
  png_compress_IDAT(param_1,0,0,4);
  return;
}


