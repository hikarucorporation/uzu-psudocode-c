// Function : makewt
// Namespace: 
// Entry    : 004ecb70
// Prototype: undefined makewt(uint param_1, uint * param_2, undefined8 * param_3)
// Body     : 004ecb70 - 004ecfd8


/* WARNING: Removing unreachable block (ram,0x004eccb7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void makewt(uint param_1,uint *param_2,undefined8 *param_3)

{
  long lVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  uint *puVar23;
  int iVar24;
  ulong uVar25;
  ulong uVar26;
  uint uVar27;
  uint uVar28;
  double dVar29;
  double dVar30;
  double dVar32;
  undefined1 auVar31 [16];
  double dVar33;
  undefined1 auVar34 [16];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  
  *param_2 = param_1;
  param_2[1] = 1;
  if (2 < (int)param_1) {
    uVar27 = param_1 >> 1;
    dVar33 = DAT_00653330 / (double)uVar27;
    dVar29 = cos((double)uVar27 * dVar33);
    *param_3 = 0x3ff0000000000000;
    param_3[1] = dVar29;
    if (uVar27 == 4) {
      sincos(dVar33 + dVar33,&local_58,&local_60);
      param_3[2] = local_60;
      param_3[3] = local_58;
    }
    else if (9 < param_1) {
      param_2[2] = 0;
      param_2[3] = 0x10;
      if (0x20 < param_1) {
        uVar28 = param_1;
        iVar24 = 2;
        do {
          iVar6 = iVar24 * 2;
          if (iVar24 < iVar6) {
            uVar20 = (ulong)iVar24;
            iVar24 = iVar24 * 0x10;
            uVar25 = (ulong)iVar6;
            uVar18 = uVar25 - uVar20;
            uVar19 = uVar20;
            if (7 < uVar18) {
              lVar1 = uVar20 + uVar25;
              if ((param_2 + uVar25 <= param_2 + uVar20 * 2 || param_2 + lVar1 <= param_2 + uVar20)
                 && (param_2 + uVar25 <= param_2 + lVar1 || param_2 + uVar25 * 2 <= param_2 + uVar20
                    )) {
                uVar21 = uVar18 & 0xfffffffffffffff8;
                uVar19 = uVar21 + uVar20;
                puVar23 = param_2 + 4;
                uVar26 = uVar21;
                do {
                  puVar2 = puVar23 + (uVar20 - 4);
                  uVar4 = *puVar2;
                  uVar7 = puVar2[1];
                  uVar8 = puVar2[2];
                  uVar9 = puVar2[3];
                  puVar2 = puVar23 + uVar20;
                  uVar10 = *puVar2;
                  uVar11 = puVar2[1];
                  uVar12 = puVar2[2];
                  uVar13 = puVar2[3];
                  puVar2 = puVar23 + uVar20 * 2 + -4;
                  *puVar2 = uVar4 * 4;
                  puVar2[1] = uVar7 * 4;
                  puVar2[2] = uVar8 * 4;
                  puVar2[3] = uVar9 * 4;
                  puVar2 = puVar23 + uVar20 * 2;
                  *puVar2 = uVar10 * 4;
                  puVar2[1] = uVar11 * 4;
                  puVar2[2] = uVar12 * 4;
                  puVar2[3] = uVar13 * 4;
                  auVar31._0_4_ = uVar4 * 4 + iVar24;
                  auVar31._4_4_ = uVar7 * 4 + iVar24;
                  auVar31._8_4_ = uVar8 * 4 + iVar24;
                  auVar31._12_4_ = uVar9 * 4 + iVar24;
                  *(undefined1 (*) [16])(puVar23 + lVar1 + -4) = auVar31;
                  puVar2 = puVar23 + lVar1;
                  *puVar2 = uVar10 * 4 + iVar24;
                  puVar2[1] = uVar11 * 4 + iVar24;
                  puVar2[2] = uVar12 * 4 + iVar24;
                  puVar2[3] = uVar13 * 4 + iVar24;
                  puVar23 = puVar23 + 8;
                  uVar26 = uVar26 - 8;
                } while (uVar26 != 0);
                if (uVar18 == uVar21) goto LAB_004ecc70;
              }
            }
            if (~uVar19 + uVar25 != 0) {
              do {
                uVar4 = param_2[uVar19];
                param_2[uVar20 + uVar19] = uVar4 * 4;
                param_2[uVar25 + uVar19] = iVar24 + uVar4 * 4;
                uVar4 = param_2[uVar19 + 1];
                param_2[uVar20 + uVar19 + 1] = uVar4 * 4;
                param_2[uVar25 + uVar19 + 1] = iVar24 + uVar4 * 4;
                uVar19 = uVar19 + 2;
              } while (uVar25 != uVar19);
            }
          }
LAB_004ecc70:
          bVar5 = 0x83 < (int)uVar28;
          uVar28 = (int)uVar28 >> 2;
          iVar24 = iVar6;
        } while (bVar5);
      }
      dVar32 = dVar33 * _UNK_00653348;
      dVar30 = cos(dVar33 * _DAT_00653340);
      dVar32 = cos(dVar32);
      auVar34._8_8_ = dVar32;
      auVar34._0_8_ = dVar30;
      auVar31 = divpd(_DAT_00651fc0,auVar34);
      *(undefined1 (*) [16])(param_3 + 2) = auVar31;
      uVar19 = 4;
      do {
        dVar30 = (double)(int)uVar19 * dVar33;
        sincos(dVar30,&local_38,&local_40);
        param_3[uVar19] = local_40;
        param_3[uVar19 + 1] = local_38;
        sincos(dVar30 * _DAT_00653338,&local_48,&local_50);
        param_3[uVar19 + 2] = local_50;
        param_3[uVar19 + 3] = (ulong)local_48 ^ _DAT_00652d10;
        uVar19 = uVar19 + 4;
      } while (uVar19 < uVar27);
    }
    dVar33 = DAT_005db338;
    if (5 < param_1) {
      uVar19 = 0;
      do {
        uVar18 = (ulong)(uVar27 + (int)uVar19);
        uVar28 = uVar27 >> 1;
        param_3[uVar18] = 0x3ff0000000000000;
        param_3[uVar18 + 1] = dVar29;
        if (uVar28 == 4) {
          *(undefined1 (*) [16])(param_3 + uVar18 + 2) =
               *(undefined1 (*) [16])(param_3 + uVar19 + 4);
        }
        else if (9 < uVar27) {
          dVar30 = (double)param_3[uVar19 + 6];
          param_3[uVar18 + 2] = dVar33 / (double)param_3[uVar19 + 4];
          param_3[uVar18 + 3] = dVar33 / dVar30;
          puVar22 = param_3 + uVar19 + 10;
          uVar19 = 4;
          do {
            uVar14 = *(undefined4 *)puVar22;
            uVar15 = *(undefined4 *)((long)puVar22 + 4);
            uVar16 = *(undefined4 *)(puVar22 + 1);
            uVar17 = *(undefined4 *)((long)puVar22 + 0xc);
            *(undefined1 (*) [16])(param_3 + uVar18 + uVar19) = *(undefined1 (*) [16])(puVar22 + -2)
            ;
            puVar3 = param_3 + uVar18 + uVar19 + 2;
            *(undefined4 *)puVar3 = uVar14;
            *(undefined4 *)((long)puVar3 + 4) = uVar15;
            *(undefined4 *)(puVar3 + 1) = uVar16;
            *(undefined4 *)((long)puVar3 + 0xc) = uVar17;
            uVar19 = uVar19 + 4;
            puVar22 = puVar22 + 8;
          } while (uVar19 < uVar28);
        }
        bVar5 = 5 < uVar27;
        uVar19 = uVar18;
        uVar27 = uVar28;
      } while (bVar5);
    }
  }
  return;
}


