// Function : binbuf_text
// Namespace: 
// Entry    : 0052f200
// Prototype: undefined binbuf_text(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, uint * param_9, byte * param_10, long param_11)
// Body     : 0052f200 - 0052f8a6


void binbuf_text(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                uint *param_9,byte *param_10,long param_11)

{
  byte bVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  byte *pbVar8;
  long lVar9;
  byte bVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  bool bVar16;
  bool bVar17;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  double dVar18;
  undefined8 uVar19;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  byte local_428 [1000];
  byte local_40 [16];
  
  pvVar3 = resizebytes(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       *(void **)(param_9 + 2),(long)(int)*param_9 << 4,0);
  *(void **)(param_9 + 2) = pvVar3;
  *param_9 = 0;
  puVar4 = resizebytes(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       pvVar3,0,0x100);
  if (puVar4 != (undefined4 *)0x0) {
    pbVar15 = param_10 + param_11;
    *(undefined4 **)(param_9 + 2) = puVar4;
    *param_9 = 0x10;
    uVar12 = 0x10;
    lVar9 = 0;
    uVar19 = extraout_XMM0_Qa_00;
    do {
      while( true ) {
        if (param_10 == pbVar15) goto LAB_0052f872;
        uVar11 = (ulong)*param_10;
        if (0x3b < uVar11) break;
        if ((0x100002600U >> (uVar11 & 0x3f) & 1) == 0) {
          if (uVar11 == 0x2c) {
            *puVar4 = 5;
          }
          else {
            if (uVar11 != 0x3b) break;
            *puVar4 = 4;
          }
          puVar4[2] = 0;
          param_10 = param_10 + 1;
          if (lVar9 + 1U != uVar12) goto LAB_0052f738;
LAB_0052f2fb:
          lVar9 = lVar9 + 1;
          uVar7 = (int)uVar12 * 2;
          pvVar3 = resizebytes(uVar19,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               *(void **)(param_9 + 2),(long)(int)*param_9 << 4,
                               (long)(int)uVar7 << 4);
          uVar19 = extraout_XMM0_Qa_01;
          if (pvVar3 == (void *)0x0) goto LAB_0052f872;
          *(void **)(param_9 + 2) = pvVar3;
          *param_9 = uVar7;
          puVar4 = (undefined4 *)(lVar9 * 0x10 + (long)pvVar3);
          uVar12 = (ulong)uVar7;
          if (param_10 == pbVar15) goto LAB_0052f872;
        }
        else {
          param_10 = param_10 + 1;
        }
      }
      uVar7 = 0;
      bVar17 = false;
      pbVar8 = param_10;
      pbVar13 = local_428;
      do {
        param_10 = pbVar8 + 1;
        bVar10 = (byte)uVar11;
        *pbVar13 = bVar10;
        if ((int)uVar7 < 0) goto joined_r0x0052f4ca;
        bVar1 = bVar10 - 0x30;
        if (7 < uVar7) {
          uVar2 = 0xffffffff;
          if (bVar1 < 10) {
            uVar2 = uVar7;
          }
          bVar16 = uVar7 == 8;
LAB_0052f47e:
          if (bVar16) {
            uVar7 = uVar2;
          }
          goto joined_r0x0052f4ca;
        }
        switch(uVar7) {
        case 0:
          uVar7 = 1;
          if (bVar10 != 0x2d) goto switchD_0052f3a9_caseD_1;
LAB_0052f4a0:
          bVar16 = param_10 == pbVar15;
          goto LAB_0052f4e7;
        case 1:
switchD_0052f3a9_caseD_1:
          uVar7 = (uint)(bVar10 == 0x2e) * 4 - 1;
          if (bVar1 < 10) {
            uVar7 = 2;
          }
          goto joined_r0x0052f4ca;
        case 2:
          uVar7 = (int)uVar11 - 0x2e;
          if (((byte)uVar7 < 0x38) &&
             ((0x80000000800001U >> ((ulong)(uVar7 & 0xff) & 0x3f) & 1) != 0)) {
            uVar7 = (uint)(bVar10 != 0x2e) * 2 + 4;
            goto LAB_0052f4a0;
          }
          uVar7 = (uint)(bVar1 < 10) * 3 - 1;
          bVar16 = param_10 == pbVar15;
          if (bVar10 != 0x24) goto LAB_0052f4e7;
          goto LAB_0052f4cc;
        case 3:
          uVar7 = 0xffffffff;
          break;
        case 4:
          uVar7 = 0xffffffff;
          if ((bVar10 & 0xdf) == 0x45) {
            uVar7 = 6;
          }
          break;
        case 5:
          uVar7 = 0xffffffff;
          if (bVar1 < 10) {
            uVar7 = 5;
          }
          bVar16 = (bVar10 & 0xdf) == 0x45;
          uVar2 = 6;
          goto LAB_0052f47e;
        case 6:
          uVar7 = 7;
          if ((bVar10 == 0x2b) || (bVar10 == 0x2d)) goto LAB_0052f4a0;
        case 7:
          uVar7 = (uint)(bVar1 < 10) * 9 - 1;
          goto joined_r0x0052f4ca;
        }
        if (bVar1 < 10) {
          uVar7 = 5;
        }
joined_r0x0052f4ca:
        bVar16 = param_10 == pbVar15;
        if (bVar10 == 0x24) {
LAB_0052f4cc:
          bVar16 = param_10 == pbVar15;
          if (param_10 != pbVar15) {
            if ((byte)(*param_10 - 0x30) < 10) {
              bVar17 = true;
            }
            bVar16 = false;
          }
        }
LAB_0052f4e7:
        if (bVar10 == 0x5c) {
          if (bVar16 || pbVar13 == local_40) {
            pbVar14 = pbVar13;
            break;
          }
          bVar10 = pbVar8[1];
          param_10 = pbVar8 + 2;
          *pbVar13 = bVar10;
          if ((int)uVar7 < 0) goto LAB_0052f630;
          bVar1 = bVar10 - 0x30;
          if (uVar7 < 8) {
            switch(uVar7) {
            case 0:
              uVar7 = 1;
              if (bVar10 != 0x2d) goto switchD_0052f533_caseD_1;
              break;
            case 1:
switchD_0052f533_caseD_1:
              uVar7 = (uint)(bVar10 == 0x2e) * 4 - 1;
              if (bVar1 < 10) {
                uVar7 = 2;
              }
              break;
            case 2:
              if (((byte)(bVar10 - 0x2e) < 0x38) &&
                 ((0x80000000800001U >> ((ulong)(bVar10 - 0x2e & 0xff) & 0x3f) & 1) != 0)) {
                uVar7 = (uint)(bVar10 != 0x2e) * 2 + 4;
              }
              else {
                uVar7 = (uint)(bVar1 < 10) * 3 - 1;
              }
              break;
            case 3:
              uVar7 = 0xffffffff;
              if (bVar1 < 10) {
                uVar7 = 5;
              }
              break;
            case 4:
              uVar7 = 0xffffffff;
              if ((bVar10 & 0xdf) == 0x45) {
                uVar7 = 6;
              }
              if (bVar1 < 10) {
                uVar7 = 5;
              }
              break;
            case 5:
              uVar7 = 0xffffffff;
              if (bVar1 < 10) {
                uVar7 = 5;
              }
              bVar16 = (bVar10 & 0xdf) == 0x45;
              uVar2 = 6;
              goto LAB_0052f606;
            case 6:
              uVar7 = 7;
              if ((bVar10 != 0x2b) && (bVar10 != 0x2d)) goto switchD_0052f533_caseD_7;
              break;
            case 7:
switchD_0052f533_caseD_7:
              uVar7 = (uint)(bVar1 < 10) * 9 - 1;
            }
          }
          else {
            uVar2 = 0xffffffff;
            if (bVar1 < 10) {
              uVar2 = uVar7;
            }
            bVar16 = uVar7 == 8;
LAB_0052f606:
            if (bVar16) {
              uVar7 = uVar2;
            }
          }
LAB_0052f630:
          bVar16 = param_10 == pbVar15;
          pbVar14 = pbVar13 + 1;
          if (bVar10 != 0x5c) goto LAB_0052f650;
          if (bVar16 || pbVar14 == local_40) break;
        }
        else {
LAB_0052f650:
          pbVar14 = pbVar13 + 1;
          if ((bVar16) || (pbVar14 == local_40)) break;
        }
        pbVar14 = pbVar13 + 1;
        uVar11 = (ulong)*param_10;
        pbVar8 = param_10;
        pbVar13 = pbVar14;
      } while ((0x3b < uVar11) || ((0x800100100002600U >> (uVar11 & 0x3f) & 1) == 0));
      *pbVar14 = 0;
      if ((uVar7 < 9) && ((0x134U >> (uVar7 & 0x1f) & 1) != 0)) {
        *puVar4 = 1;
        dVar18 = strtod((char *)local_428,(char **)0x0);
        uVar19 = CONCAT44((int)((ulong)dVar18 >> 0x20),(float)dVar18);
        puVar4[2] = (float)dVar18;
      }
      else if (bVar17) {
        bVar17 = local_428[0] == 0x24;
        if (local_428[1] != 0) {
          pbVar8 = local_428 + 2;
          bVar10 = local_428[1];
          do {
            if ((byte)(bVar10 - 0x3a) < 0xf6) {
              bVar17 = false;
            }
            bVar10 = *pbVar8;
            pbVar8 = pbVar8 + 1;
          } while (bVar10 != 0);
        }
        if (bVar17) {
          *puVar4 = 8;
          lVar5 = strtol((char *)(local_428 + 1),(char **)0x0,10);
          puVar4[2] = (int)lVar5;
          uVar19 = extraout_XMM0_Qa_03;
        }
        else {
          *puVar4 = 9;
          puVar6 = gensym((char *)local_428);
          *(undefined8 **)(puVar4 + 2) = puVar6;
          uVar19 = extraout_XMM0_Qa_04;
        }
      }
      else {
        *puVar4 = 2;
        puVar6 = gensym((char *)local_428);
        *(undefined8 **)(puVar4 + 2) = puVar6;
        uVar19 = extraout_XMM0_Qa_02;
      }
      if (lVar9 + 1U == uVar12) goto LAB_0052f2fb;
LAB_0052f738:
      lVar9 = lVar9 + 1;
      puVar4 = puVar4 + 4;
    } while (param_10 != pbVar15);
LAB_0052f872:
    pvVar3 = resizebytes(uVar19,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         *(void **)(param_9 + 2),(long)(int)*param_9 << 4,
                         (long)(int)(uint)lVar9 << 4);
    if (pvVar3 != (void *)0x0) {
      *(void **)(param_9 + 2) = pvVar3;
      *param_9 = (uint)lVar9;
    }
  }
  return;
}


