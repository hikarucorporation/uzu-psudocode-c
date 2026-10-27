// Function : readLZWByte
// Namespace: juce:GIFLoader
// Entry    : 00355fe0
// Prototype: uint readLZWByte(GIFLoader * this)
// Body     : 00355fe0 - 00356485


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::GIFLoader::readLZWByte() */

uint __thiscall juce::GIFLoader::readLZWByte(GIFLoader *this)

{
  GIFLoader *pGVar1;
  uint uVar2;
  int iVar3;
  GIFLoader *pGVar4;
  undefined4 *puVar5;
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
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint *puVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  bool bVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  byte local_139;
  undefined1 local_138 [264];
  
  if (this[0x515] == (GIFLoader)0x0) {
    pGVar4 = *(GIFLoader **)(this + 0x10548);
    pGVar1 = this + 0x8544;
    if (pGVar1 < pGVar4) {
      *(GIFLoader **)(this + 0x10548) = pGVar4 + -4;
      uVar20 = *(uint *)(pGVar4 + -4);
    }
    else {
      do {
        uVar20 = getCode((long)this,*(uint *)(this + 0x524));
        iVar19 = _UNK_0065d59c;
        iVar18 = _UNK_0065d598;
        iVar17 = _UNK_0065d594;
        iVar16 = _DAT_0065d590;
        iVar15 = _UNK_0065d58c;
        iVar14 = _UNK_0065d588;
        iVar13 = _UNK_0065d584;
        iVar12 = _DAT_0065d580;
        iVar11 = _UNK_00652d8c;
        iVar10 = _UNK_00652d88;
        iVar9 = _UNK_00652d84;
        iVar8 = _DAT_00652d80;
        iVar7 = _UNK_005dd41c;
        iVar6 = _UNK_005dd418;
        iVar3 = _UNK_005dd414;
        iVar21 = _DAT_005dd410;
        if ((int)uVar20 < 0) {
          return uVar20;
        }
        if (uVar20 == *(uint *)(this + 0x53c)) {
          uVar24 = (ulong)uVar20;
          if (uVar20 == 0) goto LAB_00356352;
          if (uVar20 < 4) {
            uVar25 = 0;
            goto LAB_0035632a;
          }
          uVar25 = (ulong)(uVar20 & 0xfffffffc);
          uVar28 = (uVar25 - 4 >> 2) + 1;
          uVar27 = (ulong)((uint)uVar28 & 3);
          iVar32 = jpeglibNamespace::jpeg_zigzag_order2._0_4_;
          iVar33 = jpeglibNamespace::jpeg_zigzag_order2._4_4_;
          iVar34 = jpeglibNamespace::jpeg_zigzag_order2._8_4_;
          iVar35 = jpeglibNamespace::jpeg_zigzag_order2._12_4_;
          if (uVar25 - 4 < 0xc) {
            lVar26 = 0;
          }
          else {
            uVar28 = uVar28 & 0xfffffffffffffffc;
            lVar26 = 0;
            do {
              *(undefined8 *)(this + lVar26 * 4 + 0x544) = 0;
              *(undefined8 *)(this + lVar26 * 4 + 0x544 + 8) = 0;
              pGVar4 = this + lVar26 * 4 + 0x4544;
              *(int *)pGVar4 = iVar32;
              *(int *)(pGVar4 + 4) = iVar33;
              *(int *)(pGVar4 + 8) = iVar34;
              *(int *)(pGVar4 + 0xc) = iVar35;
              *(undefined8 *)(this + lVar26 * 4 + 0x554) = 0;
              *(undefined8 *)(this + lVar26 * 4 + 0x554 + 8) = 0;
              pGVar4 = this + lVar26 * 4 + 0x4554;
              *(int *)pGVar4 = iVar32 + iVar8;
              *(int *)(pGVar4 + 4) = iVar33 + iVar9;
              *(int *)(pGVar4 + 8) = iVar34 + iVar10;
              *(int *)(pGVar4 + 0xc) = iVar35 + iVar11;
              *(undefined8 *)(this + lVar26 * 4 + 0x564) = 0;
              *(undefined8 *)(this + lVar26 * 4 + 0x564 + 8) = 0;
              pGVar4 = this + lVar26 * 4 + 0x4564;
              *(int *)pGVar4 = iVar32 + iVar12;
              *(int *)(pGVar4 + 4) = iVar33 + iVar13;
              *(int *)(pGVar4 + 8) = iVar34 + iVar14;
              *(int *)(pGVar4 + 0xc) = iVar35 + iVar15;
              *(undefined8 *)(this + lVar26 * 4 + 0x574) = 0;
              *(undefined8 *)(this + lVar26 * 4 + 0x574 + 8) = 0;
              pGVar4 = this + lVar26 * 4 + 0x4574;
              *(int *)pGVar4 = iVar32 + iVar21;
              *(int *)(pGVar4 + 4) = iVar33 + iVar3;
              *(int *)(pGVar4 + 8) = iVar34 + iVar6;
              *(int *)(pGVar4 + 0xc) = iVar35 + iVar7;
              lVar26 = lVar26 + 0x10;
              iVar32 = iVar32 + iVar16;
              iVar33 = iVar33 + iVar17;
              iVar34 = iVar34 + iVar18;
              iVar35 = iVar35 + iVar19;
              uVar28 = uVar28 - 4;
            } while (uVar28 != 0);
          }
          iVar7 = _UNK_00652d8c;
          iVar6 = _UNK_00652d88;
          iVar3 = _UNK_00652d84;
          iVar21 = _DAT_00652d80;
          if (uVar27 != 0) {
            lVar29 = 0;
            do {
              *(undefined8 *)(this + lVar29 + lVar26 * 4 + 0x544) = 0;
              *(undefined8 *)(this + lVar29 + lVar26 * 4 + 0x544 + 8) = 0;
              pGVar4 = this + lVar29 + lVar26 * 4 + 0x4544;
              *(int *)pGVar4 = iVar32;
              *(int *)(pGVar4 + 4) = iVar33;
              *(int *)(pGVar4 + 8) = iVar34;
              *(int *)(pGVar4 + 0xc) = iVar35;
              iVar32 = iVar32 + iVar21;
              iVar33 = iVar33 + iVar3;
              iVar34 = iVar34 + iVar6;
              iVar35 = iVar35 + iVar7;
              lVar29 = lVar29 + 0x10;
            } while (uVar27 * 0x10 != lVar29);
          }
          for (; uVar25 != uVar24; uVar25 = uVar25 + 1) {
LAB_0035632a:
            *(undefined4 *)(this + uVar25 * 4 + 0x544) = 0;
            *(int *)(this + uVar25 * 4 + 0x4544) = (int)uVar25;
          }
          if (uVar20 < 0x1000) {
LAB_00356352:
            uVar25 = 0x1000 - uVar24;
            if (3 < uVar25) {
              uVar30 = uVar25 & 0xfffffffffffffffc;
              uVar28 = (uVar30 - 4 >> 2) + 1;
              uVar27 = (ulong)((uint)uVar28 & 3);
              if (uVar30 - 4 < 0xc) {
                lVar26 = 0;
              }
              else {
                uVar28 = uVar28 & 0xfffffffffffffffc;
                lVar26 = 0;
                do {
                  *(undefined1 (*) [16])(this + lVar26 * 4 + uVar24 * 4 + 0x544) =
                       (undefined1  [16])0x0;
                  *(undefined1 (*) [16])(this + lVar26 * 4 + uVar24 * 4 + 0x4544) =
                       (undefined1  [16])0x0;
                  *(undefined1 (*) [16])(this + lVar26 * 4 + uVar24 * 4 + 0x554) =
                       (undefined1  [16])0x0;
                  *(undefined1 (*) [16])(this + lVar26 * 4 + uVar24 * 4 + 0x4554) =
                       (undefined1  [16])0x0;
                  *(undefined1 (*) [16])(this + lVar26 * 4 + uVar24 * 4 + 0x564) =
                       (undefined1  [16])0x0;
                  *(undefined1 (*) [16])(this + lVar26 * 4 + uVar24 * 4 + 0x4564) =
                       (undefined1  [16])0x0;
                  *(undefined1 (*) [16])(this + lVar26 * 4 + uVar24 * 4 + 0x574) =
                       (undefined1  [16])0x0;
                  *(undefined1 (*) [16])(this + lVar26 * 4 + uVar24 * 4 + 0x4574) =
                       (undefined1  [16])0x0;
                  lVar26 = lVar26 + 0x10;
                  uVar28 = uVar28 - 4;
                } while (uVar28 != 0);
              }
              if (uVar27 != 0) {
                lVar29 = 0;
                do {
                  *(undefined1 (*) [16])(this + lVar29 + (lVar26 + uVar24) * 4 + 0x544) =
                       (undefined1  [16])0x0;
                  *(undefined1 (*) [16])(this + lVar29 + (lVar26 + uVar24) * 4 + 0x4544) =
                       (undefined1  [16])0x0;
                  lVar29 = lVar29 + 0x10;
                } while (uVar27 * 0x10 != lVar29);
              }
              if (uVar25 == uVar30) goto LAB_00356440;
              uVar24 = uVar24 + uVar30;
            }
            lVar26 = uVar24 - 0x1000;
            do {
              *(undefined4 *)(this + lVar26 * 4 + 0x4544) = 0;
              *(undefined4 *)(this + lVar26 * 4 + 0x8544) = 0;
              lVar26 = lVar26 + 1;
            } while (lVar26 != 0);
          }
LAB_00356440:
          *(uint *)(this + 0x524) = *(int *)(this + 0x528) + 1U;
          *(uint *)(this + 0x530) = uVar20 * 2;
          *(uint *)(this + 0x52c) = uVar20 + 2;
          *(GIFLoader **)(this + 0x10548) = pGVar1;
          uVar20 = getCode((long)this,*(int *)(this + 0x528) + 1U);
          *(uint *)(this + 0x538) = uVar20;
          *(uint *)(this + 0x534) = uVar20;
          return uVar20;
        }
        if (uVar20 == *(uint *)(this + 0x540)) {
          if (this[0x514] != (GIFLoader)0x0) {
            return 0xfffffffe;
          }
          do {
            iVar21 = (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),&local_139,1);
            if (iVar21 != 1) {
              return 0xfffffffe;
            }
            this[0x514] = (GIFLoader)(local_139 == 0);
            if (local_139 == 0) break;
            uVar22 = (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),local_138);
            if (uVar22 != local_139) {
              return 0xfffffffe;
            }
          } while (local_139 != 0);
        }
        if ((int)uVar20 < *(int *)(this + 0x52c)) {
          puVar23 = *(uint **)(this + 0x10548);
          uVar22 = uVar20;
        }
        else {
          puVar5 = *(undefined4 **)(this + 0x10548);
          *puVar5 = *(undefined4 *)(this + 0x534);
          puVar23 = puVar5 + 1;
          uVar22 = *(uint *)(this + 0x538);
        }
        while( true ) {
          uVar2 = *(uint *)(this + (long)(int)uVar22 * 4 + 0x4544);
          if ((int)uVar22 < *(int *)(this + 0x53c)) break;
          *(uint **)(this + 0x10548) = puVar23 + 1;
          *puVar23 = uVar2;
          bVar31 = uVar22 == *(uint *)(this + (long)(int)uVar22 * 4 + 0x544);
          puVar23 = puVar23 + 1;
          uVar22 = *(uint *)(this + (long)(int)uVar22 * 4 + 0x544);
          if (bVar31) {
            return 0xfffffffe;
          }
        }
        *(uint *)(this + 0x534) = uVar2;
        *(GIFLoader **)(this + 0x10548) = (GIFLoader *)(puVar23 + 1);
        *puVar23 = uVar2;
        lVar26 = (long)*(int *)(this + 0x52c);
        if (lVar26 < 0x1000) {
          *(undefined4 *)(this + lVar26 * 4 + 0x544) = *(undefined4 *)(this + 0x538);
          *(undefined4 *)(this + lVar26 * 4 + 0x4544) = *(undefined4 *)(this + 0x534);
          iVar21 = *(int *)(this + 0x52c);
          iVar3 = *(int *)(this + 0x530);
          *(int *)(this + 0x52c) = iVar21 + 1;
          if ((iVar3 <= iVar21 + 1) && (iVar3 < 0x1000)) {
            *(int *)(this + 0x530) = iVar3 * 2;
            *(int *)(this + 0x524) = *(int *)(this + 0x524) + 1;
          }
        }
        *(uint *)(this + 0x538) = uVar20;
      } while ((GIFLoader *)(puVar23 + 1) <= pGVar1);
      *(uint **)(this + 0x10548) = puVar23;
      uVar20 = *puVar23;
    }
  }
  else {
    this[0x515] = (GIFLoader)0x0;
    do {
      uVar20 = getCode((long)this,*(uint *)(this + 0x524));
      *(uint *)(this + 0x538) = uVar20;
      *(uint *)(this + 0x534) = uVar20;
    } while (uVar20 == *(uint *)(this + 0x53c));
  }
  return uVar20;
}


