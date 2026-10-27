// Function : getMappedBuffer
// Namespace: juce:ClientBufferMapperData_double_
// Entry    : 001b25d0
// Prototype: uint * getMappedBuffer(uint * param_1, long * param_2, long param_3, long * param_4, long * param_5)
// Body     : 001b25d0 - 001b2a80


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ClientBufferMapperData<double>::getMappedBuffer(Steinberg::Vst::ProcessData&,
   std::vector<juce::DynamicChannelMapping, std::allocator<juce::DynamicChannelMapping> > const&,
   std::vector<juce::DynamicChannelMapping, std::allocator<juce::DynamicChannelMapping> > const&) */

uint * __cdecl
juce::ClientBufferMapperData<double>::getMappedBuffer
          (uint *param_1,long *param_2,long param_3,long *param_4,long *param_5)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  uint *puVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  int *piVar17;
  long lVar18;
  uint uVar19;
  
  *(undefined4 *)(param_2 + 0x28) = 0;
  if (param_2[1] != *param_2) {
    param_2[1] = *param_2;
  }
  lVar18 = *param_4;
  lVar13 = param_4[1];
  lVar10 = *param_5;
  iVar4 = 0;
  iVar12 = 0;
  if (lVar18 != lVar13) {
    iVar12 = 0;
    lVar16 = lVar18;
    do {
      iVar15 = (int)((ulong)(*(long *)(lVar16 + 0x30) - *(long *)(lVar16 + 0x28)) >> 2);
      if (*(char *)(lVar16 + 0x40) == '\0') {
        iVar15 = 0;
      }
      iVar12 = iVar12 + iVar15;
      lVar16 = lVar16 + 0x50;
    } while (lVar16 != lVar13);
  }
  if (lVar10 != param_5[1]) {
    iVar4 = 0;
    do {
      iVar15 = (int)((ulong)(*(long *)(lVar10 + 0x30) - *(long *)(lVar10 + 0x28)) >> 2);
      if (*(char *)(lVar10 + 0x40) == '\0') {
        iVar15 = 0;
      }
      iVar4 = iVar4 + iVar15;
      lVar10 = lVar10 + 0x50;
    } while (lVar10 != param_5[1]);
  }
  if (iVar12 < iVar4) {
    iVar12 = iVar4;
  }
  piVar17 = *(int **)(param_3 + 0x18);
  iVar4 = countValidBuses<double>(piVar17,*(int *)(param_3 + 0xc));
  uVar14 = (ulong)iVar4;
  uVar5 = lVar13 - lVar18;
  if ((ulong)(((long)uVar5 >> 4) * -0x3333333333333333) < uVar14) goto LAB_001b28a5;
  if (iVar4 != 0) {
    piVar1 = piVar17 + uVar14 * 6;
    do {
      plVar6 = *(long **)(piVar17 + 4);
      iVar4 = *piVar17;
      iVar9 = (int)((ulong)(*(long *)(lVar18 + 0x30) - *(long *)(lVar18 + 0x28)) >> 2);
      iVar15 = iVar9;
      if (iVar4 < iVar9) {
        iVar15 = iVar4;
      }
      uVar5 = (ulong)iVar15;
      plVar2 = plVar6 + uVar5;
      lVar10 = uVar5 * 8;
      if (3 < iVar15) {
        lVar16 = ((uVar5 & 0x1fffffffffffffff) >> 2) + 1;
        plVar6 = plVar6 + 2;
        do {
          plVar11 = plVar6;
          if (plVar11[-2] == 0) {
            plVar11 = plVar11 + -2;
            goto LAB_001b27d0;
          }
          if (plVar11[-1] == 0) {
            plVar11 = plVar11 + -1;
            goto LAB_001b27d0;
          }
          if (*plVar11 == 0) goto LAB_001b27d0;
          if (plVar11[1] == 0) {
            plVar11 = plVar11 + 1;
            goto LAB_001b27d0;
          }
          lVar16 = lVar16 + -1;
          lVar10 = lVar10 + -0x20;
          plVar6 = plVar11 + 4;
        } while (1 < lVar16);
        plVar6 = plVar11 + 2;
      }
      lVar10 = lVar10 >> 3;
      if (lVar10 == 1) {
LAB_001b27ad:
        plVar11 = plVar6;
        if (*plVar6 != 0) {
          plVar11 = plVar2;
        }
      }
      else {
        if (lVar10 == 2) {
LAB_001b27a3:
          if (*plVar6 != 0) {
            plVar6 = plVar6 + 1;
            goto LAB_001b27ad;
          }
        }
        else {
          plVar11 = plVar2;
          if (lVar10 != 3) goto LAB_001b27d0;
          if (*plVar6 != 0) {
            plVar6 = plVar6 + 1;
            goto LAB_001b27a3;
          }
        }
        plVar11 = plVar6;
      }
LAB_001b27d0:
      if ((*(char *)(lVar18 + 0x48) != '\0') && (iVar4 < iVar9 || plVar11 != plVar2))
      goto LAB_001b28a5;
      piVar17 = piVar17 + 6;
      lVar18 = lVar18 + 0x50;
    } while (piVar17 != piVar1);
    uVar5 = lVar13 - lVar18;
  }
  if (0xf0 < (long)uVar5) {
    lVar16 = uVar5 / 0x140 + 1;
    uVar5 = lVar13 - lVar18;
    lVar10 = lVar18 + 0xa0;
    do {
      lVar18 = lVar10;
      if (*(char *)(lVar18 + -0x58) != '\0') {
        lVar18 = lVar18 + -0xa0;
        goto joined_r0x001b2a48;
      }
      if (*(char *)(lVar18 + -8) != '\0') {
        lVar18 = lVar18 + -0x50;
        goto joined_r0x001b2a48;
      }
      if (*(char *)(lVar18 + 0x48) != '\0') goto joined_r0x001b2a48;
      if (*(char *)(lVar18 + 0x98) != '\0') {
        lVar18 = lVar18 + 0x50;
        goto joined_r0x001b2a48;
      }
      lVar16 = lVar16 + -1;
      uVar5 = uVar5 - 0x140;
      lVar10 = lVar18 + 0x140;
    } while (1 < lVar16);
    lVar18 = lVar18 + 0xa0;
  }
  lVar10 = ((long)uVar5 >> 4) * -0x3333333333333333;
  if (lVar10 == 1) {
LAB_001b2899:
    if (*(char *)(lVar18 + 0x48) != '\0') goto joined_r0x001b2a48;
  }
  else {
    if (lVar10 == 2) {
LAB_001b288e:
      if (*(char *)(lVar18 + 0x48) == '\0') {
        lVar18 = lVar18 + 0x50;
        goto LAB_001b2899;
      }
    }
    else {
      if (lVar10 != 3) goto LAB_001b28da;
      if (*(char *)(lVar18 + 0x48) == '\0') {
        lVar18 = lVar18 + 0x50;
        goto LAB_001b288e;
      }
    }
joined_r0x001b2a48:
    if (lVar18 != lVar13) {
LAB_001b28a5:
      getBlankBuffer(param_1,param_2,iVar12,*(uint *)(param_3 + 8));
      return param_1;
    }
  }
LAB_001b28da:
  setUpInputChannels(param_3,uVar14,(long)(param_2 + 3),param_4,param_2);
  setUpOutputChannels((long)(param_2 + 3),param_5,param_2);
  lVar18 = *param_2;
  lVar13 = lVar18;
  if (lVar18 == param_2[1]) {
    *(undefined1 *)(param_2 + 0x27) = 0;
    lVar13 = param_2[5];
  }
  uVar5 = param_2[1] - lVar18;
  uVar14 = uVar5 >> 3;
  uVar3 = *(uint *)(param_3 + 8);
  uVar19 = (uint)uVar14;
  *param_1 = uVar19;
  param_1[1] = uVar3;
  *(undefined1 *)(param_1 + 0x48) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if ((int)uVar19 < 0x20) {
    puVar7 = param_1 + 8;
    *(uint **)(param_1 + 4) = puVar7;
    if ((int)uVar19 < 1) goto LAB_001b2a17;
  }
  else {
    puVar7 = malloc(uVar5 + 8 & 0x7fffffff8);
    if (puVar7 == (uint *)0x0) {
      puVar8 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar8 = PTR_vtable_00715738 + 0x10;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar8,PTR_typeinfo_00715888,PTR__bad_alloc_00715478);
    }
    *(uint **)(param_1 + 6) = puVar7;
    *(uint **)(param_1 + 4) = puVar7;
  }
  uVar14 = uVar14 & 0xffffffff;
  uVar5 = (ulong)(uVar19 & 3);
  if (uVar14 - 1 < 3) {
    lVar18 = 0;
  }
  else {
    lVar18 = 0;
    do {
      *(undefined8 *)(puVar7 + lVar18 * 2) = *(undefined8 *)(lVar13 + lVar18 * 8);
      *(undefined8 *)(*(long *)(param_1 + 4) + 8 + lVar18 * 8) =
           *(undefined8 *)(lVar13 + 8 + lVar18 * 8);
      *(undefined8 *)(*(long *)(param_1 + 4) + 0x10 + lVar18 * 8) =
           *(undefined8 *)(lVar13 + 0x10 + lVar18 * 8);
      *(undefined8 *)(*(long *)(param_1 + 4) + 0x18 + lVar18 * 8) =
           *(undefined8 *)(lVar13 + 0x18 + lVar18 * 8);
      lVar18 = lVar18 + 4;
      puVar7 = *(uint **)(param_1 + 4);
    } while (uVar14 - uVar5 != lVar18);
  }
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined8 *)(puVar7 + lVar18 * 2) = *(undefined8 *)(lVar13 + lVar18 * 8);
    lVar18 = lVar18 + 1;
    puVar7 = *(uint **)(param_1 + 4);
  }
LAB_001b2a17:
  (puVar7 + (long)(int)uVar19 * 2)[0] = 0;
  (puVar7 + (long)(int)uVar19 * 2)[1] = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  return param_1;
}


