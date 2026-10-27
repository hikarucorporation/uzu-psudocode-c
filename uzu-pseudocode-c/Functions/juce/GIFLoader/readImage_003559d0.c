// Function : readImage
// Namespace: juce:GIFLoader
// Entry    : 003559d0
// Prototype: undefined readImage(GIFLoader * this, int param_1, uint param_2)
// Body     : 003559d0 - 00355f96


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::GIFLoader::readImage(int, int) */

void __thiscall juce::GIFLoader::readImage(GIFLoader *this,int param_1,uint param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  int *piVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  GIFLoader *pGVar26;
  ulong uVar27;
  ulong uVar28;
  bool bVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  byte local_65;
  int local_64;
  GIFLoader *local_60 [2];
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  long *local_38;
  
  iVar17 = (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),&local_65,1);
  if (iVar17 != 1) {
    return;
  }
  uVar20 = 1L << (local_65 & 0x3f);
  uVar18 = (uint)uVar20;
  uVar23 = 0;
  *(uint *)(this + 0x528) = (uint)local_65;
  *(uint *)(this + 0x524) = local_65 + 1;
  *(uint *)(this + 0x53c) = uVar18;
  *(uint *)(this + 0x540) = uVar18 + 1;
  *(uint *)(this + 0x530) = uVar18 * 2;
  *(uint *)(this + 0x52c) = uVar18 + 2;
  *(undefined8 *)(this + 0x518) = 0;
  *(undefined2 *)(this + 0x515) = 1;
  iVar16 = _UNK_0065d59c;
  iVar15 = _UNK_0065d598;
  iVar14 = _UNK_0065d594;
  iVar13 = _DAT_0065d590;
  iVar12 = _UNK_0065d58c;
  iVar11 = _UNK_0065d588;
  iVar10 = _UNK_0065d584;
  iVar9 = _DAT_0065d580;
  iVar8 = _UNK_00652d8c;
  iVar7 = _UNK_00652d88;
  iVar6 = _UNK_00652d84;
  iVar5 = _DAT_00652d80;
  iVar4 = _UNK_005dd41c;
  iVar3 = _UNK_005dd418;
  iVar2 = _UNK_005dd414;
  iVar17 = _DAT_005dd410;
  if (local_65 == 0x1f) {
LAB_00355bc8:
    uVar20 = 0x1000 - uVar23;
    if (3 < uVar20) {
      uVar24 = uVar20 & 0xfffffffffffffffc;
      uVar28 = (uVar24 - 4 >> 2) + 1;
      uVar27 = (ulong)((uint)uVar28 & 3);
      if (uVar24 - 4 < 0xc) {
        lVar21 = 0;
      }
      else {
        uVar28 = uVar28 & 0xfffffffffffffffc;
        lVar21 = 0;
        do {
          *(undefined1 (*) [16])(this + lVar21 * 4 + uVar23 * 4 + 0x544) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(this + lVar21 * 4 + uVar23 * 4 + 0x4544) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(this + lVar21 * 4 + uVar23 * 4 + 0x554) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(this + lVar21 * 4 + uVar23 * 4 + 0x4554) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(this + lVar21 * 4 + uVar23 * 4 + 0x564) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(this + lVar21 * 4 + uVar23 * 4 + 0x4564) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(this + lVar21 * 4 + uVar23 * 4 + 0x574) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(this + lVar21 * 4 + uVar23 * 4 + 0x4574) = (undefined1  [16])0x0;
          lVar21 = lVar21 + 0x10;
          uVar28 = uVar28 - 4;
        } while (uVar28 != 0);
      }
      if (uVar27 != 0) {
        lVar25 = 0;
        do {
          *(undefined1 (*) [16])(this + lVar25 + (lVar21 + uVar23) * 4 + 0x544) =
               (undefined1  [16])0x0;
          *(undefined1 (*) [16])(this + lVar25 + (lVar21 + uVar23) * 4 + 0x4544) =
               (undefined1  [16])0x0;
          lVar25 = lVar25 + 0x10;
        } while (uVar27 * 0x10 != lVar25);
      }
      if (uVar20 == uVar24) goto LAB_00355cdd;
      uVar23 = uVar23 + uVar24;
    }
    lVar21 = uVar23 - 0x1000;
    do {
      *(undefined4 *)(this + lVar21 * 4 + 0x4544) = 0;
      *(undefined4 *)(this + lVar21 * 4 + 0x8544) = 0;
      lVar21 = lVar21 + 1;
    } while (lVar21 != 0);
  }
  else {
    if (1 < local_65) {
      uVar23 = (ulong)(uVar18 & 0xfffffffc);
      uVar27 = (uVar23 - 4 >> 2) + 1;
      uVar24 = (ulong)((uint)uVar27 & 3);
      iVar30 = jpeglibNamespace::jpeg_zigzag_order2._0_4_;
      iVar31 = jpeglibNamespace::jpeg_zigzag_order2._4_4_;
      iVar32 = jpeglibNamespace::jpeg_zigzag_order2._8_4_;
      iVar33 = jpeglibNamespace::jpeg_zigzag_order2._12_4_;
      if (uVar23 - 4 < 0xc) {
        lVar21 = 0;
      }
      else {
        uVar27 = uVar27 & 0xfffffffffffffffc;
        lVar21 = 0;
        do {
          *(undefined8 *)(this + lVar21 * 4 + 0x544) = 0;
          *(undefined8 *)(this + lVar21 * 4 + 0x544 + 8) = 0;
          pGVar26 = this + lVar21 * 4 + 0x4544;
          *(int *)pGVar26 = iVar30;
          *(int *)(pGVar26 + 4) = iVar31;
          *(int *)(pGVar26 + 8) = iVar32;
          *(int *)(pGVar26 + 0xc) = iVar33;
          *(undefined8 *)(this + lVar21 * 4 + 0x554) = 0;
          *(undefined8 *)(this + lVar21 * 4 + 0x554 + 8) = 0;
          pGVar26 = this + lVar21 * 4 + 0x4554;
          *(int *)pGVar26 = iVar30 + iVar5;
          *(int *)(pGVar26 + 4) = iVar31 + iVar6;
          *(int *)(pGVar26 + 8) = iVar32 + iVar7;
          *(int *)(pGVar26 + 0xc) = iVar33 + iVar8;
          *(undefined8 *)(this + lVar21 * 4 + 0x564) = 0;
          *(undefined8 *)(this + lVar21 * 4 + 0x564 + 8) = 0;
          pGVar26 = this + lVar21 * 4 + 0x4564;
          *(int *)pGVar26 = iVar30 + iVar9;
          *(int *)(pGVar26 + 4) = iVar31 + iVar10;
          *(int *)(pGVar26 + 8) = iVar32 + iVar11;
          *(int *)(pGVar26 + 0xc) = iVar33 + iVar12;
          *(undefined8 *)(this + lVar21 * 4 + 0x574) = 0;
          *(undefined8 *)(this + lVar21 * 4 + 0x574 + 8) = 0;
          pGVar26 = this + lVar21 * 4 + 0x4574;
          *(int *)pGVar26 = iVar30 + iVar17;
          *(int *)(pGVar26 + 4) = iVar31 + iVar2;
          *(int *)(pGVar26 + 8) = iVar32 + iVar3;
          *(int *)(pGVar26 + 0xc) = iVar33 + iVar4;
          lVar21 = lVar21 + 0x10;
          iVar30 = iVar30 + iVar13;
          iVar31 = iVar31 + iVar14;
          iVar32 = iVar32 + iVar15;
          iVar33 = iVar33 + iVar16;
          uVar27 = uVar27 - 4;
        } while (uVar27 != 0);
      }
      iVar4 = _UNK_00652d8c;
      iVar3 = _UNK_00652d88;
      iVar2 = _UNK_00652d84;
      iVar17 = _DAT_00652d80;
      if (uVar24 == 0) goto joined_r0x00355b9d;
      lVar25 = 0;
      do {
        *(undefined8 *)(this + lVar25 + lVar21 * 4 + 0x544) = 0;
        *(undefined8 *)(this + lVar25 + lVar21 * 4 + 0x544 + 8) = 0;
        pGVar26 = this + lVar25 + lVar21 * 4 + 0x4544;
        *(int *)pGVar26 = iVar30;
        *(int *)(pGVar26 + 4) = iVar31;
        *(int *)(pGVar26 + 8) = iVar32;
        *(int *)(pGVar26 + 0xc) = iVar33;
        iVar30 = iVar30 + iVar17;
        iVar31 = iVar31 + iVar2;
        iVar32 = iVar32 + iVar3;
        iVar33 = iVar33 + iVar4;
        lVar25 = lVar25 + 0x10;
        if (uVar24 * 0x10 == lVar25) goto joined_r0x00355b9d;
      } while( true );
    }
    uVar23 = 0;
    do {
      *(undefined4 *)(this + uVar23 * 4 + 0x544) = 0;
      *(int *)(this + uVar23 * 4 + 0x4544) = (int)uVar23;
      uVar23 = uVar23 + 1;
joined_r0x00355b9d:
    } while (uVar23 != uVar20);
    uVar23 = uVar20 & 0xffffffff;
    if (local_65 < 0xc) goto LAB_00355bc8;
  }
LAB_00355cdd:
  *(GIFLoader **)(this + 0x10548) = this + 0x8544;
  if (-1 < (int)param_2) {
    *(undefined4 *)(this + (ulong)param_2 * 4 + 0x114) = 0;
  }
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
    local_44 = 0;
    local_40 = 0;
  }
  else {
    local_44 = (int)plVar1[2];
    local_40 = *(int *)((long)plVar1 + 0x14);
  }
  local_38 = (long *)0x0;
                    /* try { // try from 00355d2d to 00355d3e has its CatchHandler @ 00355f97 */
  (**(code **)(*plVar1 + 0x38))(plVar1,local_60,0,0,1);
  if (*(long *)this == 0) {
    bVar29 = true;
    if (param_1 != 0) goto LAB_00355df7;
  }
  else {
    iVar17 = *(int *)(*(long *)this + 0xc);
    bVar29 = iVar17 != 1;
    if (param_1 != 0) {
LAB_00355df7:
      lVar21 = 0;
      local_64 = 8;
      uVar18 = 0;
      pGVar26 = local_60[0];
      do {
        iVar17 = 0;
        do {
                    /* try { // try from 00355e47 to 00355e4e has its CatchHandler @ 00355fb9 */
          uVar19 = readLZWByte(this);
          if ((int)uVar19 < 0) goto LAB_00355f78;
          uVar20 = (ulong)uVar19;
          if (bVar29) {
            *(undefined4 *)pGVar26 = *(undefined4 *)(this + uVar20 * 4 + 0x114);
          }
          else {
            *pGVar26 = this[uVar20 * 4 + 0x114];
            pGVar26[1] = this[uVar20 * 4 + 0x115];
            pGVar26[2] = this[uVar20 * 4 + 0x116];
          }
          pGVar26 = pGVar26 + local_48;
          iVar17 = iVar17 + 1;
        } while (iVar17 != local_44);
        iVar17 = (int)lVar21 + local_64;
        if (local_40 <= iVar17) {
          if (2 < uVar18) goto LAB_00355f78;
          uVar19 = uVar18 + 1;
          iVar17 = (&DAT_005efeb0)[(int)uVar18];
          if (iVar17 < local_40) {
            piVar22 = &DAT_005efea4 + (int)uVar18;
            uVar18 = uVar19;
          }
          else {
            if (2 < uVar19) goto LAB_00355f78;
            iVar17 = (&DAT_005efeb0)[(int)uVar19];
            if (iVar17 < local_40) {
              piVar22 = &DAT_005efea4 + (int)uVar19;
              uVar18 = uVar18 + 2;
            }
            else {
              if ((2 < uVar18 + 2) || (local_40 < 2)) goto LAB_00355f78;
              uVar18 = uVar18 + 3;
              iVar17 = 1;
              piVar22 = &DAT_005efeac;
            }
          }
          local_64 = *piVar22;
        }
        lVar21 = (long)iVar17;
        pGVar26 = local_60[0] + local_4c * lVar21;
      } while( true );
    }
    if (iVar17 == 1) {
      lVar21 = 0;
      pGVar26 = local_60[0];
      while( true ) {
        iVar17 = 0;
        do {
                    /* try { // try from 00355d80 to 00355d87 has its CatchHandler @ 00355fb5 */
          uVar18 = readLZWByte(this);
          if ((int)uVar18 < 0) goto LAB_00355f78;
          uVar20 = (ulong)uVar18;
          *pGVar26 = this[uVar20 * 4 + 0x114];
          pGVar26[1] = this[uVar20 * 4 + 0x115];
          pGVar26[2] = this[uVar20 * 4 + 0x116];
          pGVar26 = pGVar26 + local_48;
          iVar17 = iVar17 + 1;
        } while (iVar17 != local_44);
        lVar21 = lVar21 + 1;
        if (local_40 <= lVar21) break;
        pGVar26 = local_60[0] + local_4c * lVar21;
      }
      goto LAB_00355f78;
    }
  }
  lVar21 = 0;
  pGVar26 = local_60[0];
  while( true ) {
    iVar17 = 0;
    do {
                    /* try { // try from 00355f30 to 00355f37 has its CatchHandler @ 00355fb7 */
      uVar18 = readLZWByte(this);
      if ((int)uVar18 < 0) goto LAB_00355f78;
      *(undefined4 *)pGVar26 = *(undefined4 *)(this + (ulong)uVar18 * 4 + 0x114);
      pGVar26 = pGVar26 + local_48;
      iVar17 = iVar17 + 1;
    } while (iVar17 != local_44);
    lVar21 = lVar21 + 1;
    if (local_40 <= lVar21) break;
    pGVar26 = local_60[0] + local_4c * lVar21;
  }
LAB_00355f78:
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 8))();
  }
  return;
}


