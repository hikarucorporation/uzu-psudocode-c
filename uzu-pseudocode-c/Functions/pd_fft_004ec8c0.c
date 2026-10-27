// Function : pd_fft
// Namespace: 
// Entry    : 004ec8c0
// Prototype: undefined pd_fft(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, uint param_10, int param_11)
// Body     : 004ec8c0 - 004ecb6e


/* WARNING: Removing unreachable block (ram,0x004ecb61) */
/* WARNING: Removing unreachable block (ram,0x004ecb6d) */

void pd_fft(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
           undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
           uint param_10,int param_11)

{
  float *pfVar1;
  double *pdVar2;
  double *pdVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  uint uVar16;
  int iVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  undefined1 (*pauVar23) [16];
  undefined8 *puVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  undefined1 (*pauVar28) [16];
  ulong uVar29;
  uint uVar30;
  undefined8 uStack_50;
  undefined8 uStack_48;
  double local_40;
  undefined8 uStack_38;
  
  uVar30 = param_10 * 2;
  lVar26 = (long)(int)uVar30;
  lVar21 = lVar26 * -8;
  pauVar23 = (undefined1 (*) [16])(&uStack_48 + -lVar26);
  uStack_38._4_4_ = uVar30;
  (&uStack_50)[-lVar26] = 0x4ec8fa;
  uVar18 = ooura_init(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar30);
  if ((int)uVar18 == 0) {
    return;
  }
  if (0 < (int)param_10) {
    uVar30 = 1;
    if (1 < (int)uStack_38._4_4_) {
      uVar30 = uStack_38._4_4_;
    }
    uVar19 = 0;
    lVar27 = param_9;
    pauVar28 = pauVar23;
    if (2 < uVar30 - 1) {
      uVar29 = (ulong)(uVar30 - 1) + 1;
      uVar19 = uVar29 & 0xfffffffffffffffc;
      uVar22 = (uVar19 - 4 >> 2) + 1;
      if (uVar19 - 4 == 0) {
        lVar27 = 0;
LAB_004ec99a:
        uVar18 = *(undefined8 *)(param_9 + lVar27 * 4);
        dVar10 = (double)(float)((ulong)uVar18 >> 0x20);
        uVar4 = *(undefined8 *)(param_9 + 8 + lVar27 * 4);
        dVar14 = (double)(float)((ulong)uVar4 >> 0x20);
        auVar9._8_4_ = SUB84(dVar10,0);
        auVar9._0_8_ = (double)(float)uVar18;
        auVar9._12_4_ = (int)((ulong)dVar10 >> 0x20);
        *(undefined1 (*) [16])(*pauVar23 + lVar27 * 8) = auVar9;
        auVar13._8_4_ = SUB84(dVar14,0);
        auVar13._0_8_ = (double)(float)uVar4;
        auVar13._12_4_ = (int)((ulong)dVar14 >> 0x20);
        *(undefined1 (*) [16])(&uStack_38 + (lVar27 - lVar26)) = auVar13;
      }
      else {
        uVar25 = uVar22 & 0xfffffffffffffffe;
        lVar27 = 0;
        do {
          uVar18 = *(undefined8 *)(param_9 + lVar27 * 4);
          dVar10 = (double)(float)((ulong)uVar18 >> 0x20);
          uVar4 = *(undefined8 *)(param_9 + 8 + lVar27 * 4);
          dVar14 = (double)(float)((ulong)uVar4 >> 0x20);
          auVar7._8_4_ = SUB84(dVar10,0);
          auVar7._0_8_ = (double)(float)uVar18;
          auVar7._12_4_ = (int)((ulong)dVar10 >> 0x20);
          *(undefined1 (*) [16])(*pauVar23 + lVar27 * 8) = auVar7;
          auVar11._8_4_ = SUB84(dVar14,0);
          auVar11._0_8_ = (double)(float)uVar4;
          auVar11._12_4_ = (int)((ulong)dVar14 >> 0x20);
          *(undefined1 (*) [16])(&uStack_38 + (lVar27 - lVar26)) = auVar11;
          uVar18 = *(undefined8 *)(param_9 + 0x10 + lVar27 * 4);
          dVar10 = (double)(float)((ulong)uVar18 >> 0x20);
          uVar4 = *(undefined8 *)(param_9 + 0x18 + lVar27 * 4);
          dVar14 = (double)(float)((ulong)uVar4 >> 0x20);
          auVar8._8_4_ = SUB84(dVar10,0);
          auVar8._0_8_ = (double)(float)uVar18;
          auVar8._12_4_ = (int)((ulong)dVar10 >> 0x20);
          *(undefined1 (*) [16])((long)register_RSP + lVar27 * 8 + lVar21 + -0x28) = auVar8;
          auVar12._8_4_ = SUB84(dVar14,0);
          auVar12._0_8_ = (double)(float)uVar4;
          auVar12._12_4_ = (int)((ulong)dVar14 >> 0x20);
          *(undefined1 (*) [16])((long)register_RSP + lVar27 * 8 + lVar21 + -0x18) = auVar12;
          lVar27 = lVar27 + 8;
          uVar25 = uVar25 - 2;
        } while (uVar25 != 0);
        if ((uVar22 & 1) != 0) goto LAB_004ec99a;
      }
      if (uVar29 == uVar19) goto LAB_004ec9d6;
      lVar27 = param_9 + uVar19 * 4;
      pauVar28 = (undefined1 (*) [16])(*pauVar23 + uVar19 * 8);
    }
    lVar20 = 0;
    do {
      *(double *)(*pauVar28 + lVar20 * 8) = (double)*(float *)(lVar27 + lVar20 * 4);
      lVar20 = lVar20 + 1;
    } while (uVar30 - (int)uVar19 != (int)lVar20);
  }
LAB_004ec9d6:
  uStack_48._4_4_ = param_11;
  local_40 = (double)(ulong)param_10;
  (&uStack_50)[-lVar26] = 0x4ec9ea;
  lVar27 = __tls_get_addr(&PTR_007153d8);
  puVar24 = &uStack_48 + -lVar26;
  puVar5 = *(uint **)(lVar27 + 0xd0);
  puVar6 = *(undefined8 **)(lVar27 + 0xd8);
  uVar30 = *puVar5;
  if ((int)(uVar30 * 4) < (int)uStack_38._4_4_) {
    uVar30 = SUB84(local_40,0) >> 1;
    (&uStack_50)[-lVar26] = 0x4eca21;
    makewt(uVar30,puVar5,puVar6);
    puVar24 = &uStack_48 + -lVar26;
  }
  uVar16 = uStack_38._4_4_;
  if (uStack_48._4_4_ == 0) {
    uVar19 = (ulong)uStack_38._4_4_;
    *(undefined8 *)((long)puVar24 + -8) = 0x4eca5c;
    cftbsub(uVar19,(double *)pauVar23,(long)puVar5,uVar30,(long)puVar6);
    iVar17 = SUB84(local_40,0);
  }
  else {
    *(undefined8 *)((long)puVar24 + -8) = 0x4eca3b;
    cftfsub(uVar16,pauVar23,(long)puVar5,uVar30,(long)puVar6);
    iVar17 = SUB84(local_40,0);
  }
  if (iVar17 < 1) {
    return;
  }
  uVar30 = 1;
  if (1 < (int)uStack_38._4_4_) {
    uVar30 = uStack_38._4_4_;
  }
  uVar19 = 0;
  if (uVar30 - 1 < 3) goto LAB_004ecb1d;
  uVar29 = (ulong)(uVar30 - 1) + 1;
  uVar19 = uVar29 & 0xfffffffffffffffc;
  uVar22 = (uVar19 - 4 >> 2) + 1;
  if (uVar19 - 4 == 0) {
    lVar27 = 0;
LAB_004ecafb:
    dVar10 = *(double *)((long)(*pauVar23 + lVar27 * 8) + 8);
    dVar14 = (double)(&uStack_38)[lVar27 - lVar26];
    dVar15 = (double)(&uStack_38 + (lVar27 - lVar26))[1];
    pfVar1 = (float *)(param_9 + lVar27 * 4);
    *pfVar1 = (float)*(double *)(*pauVar23 + lVar27 * 8);
    pfVar1[1] = (float)dVar10;
    pfVar1[2] = (float)dVar14;
    pfVar1[3] = (float)dVar15;
  }
  else {
    uVar25 = uVar22 & 0xfffffffffffffffe;
    lVar27 = 0;
    do {
      dVar10 = *(double *)((long)(*pauVar23 + lVar27 * 8) + 8);
      dVar14 = (double)(&uStack_38)[lVar27 - lVar26];
      dVar15 = (double)(&uStack_38 + (lVar27 - lVar26))[1];
      pfVar1 = (float *)(param_9 + lVar27 * 4);
      *pfVar1 = (float)*(double *)(*pauVar23 + lVar27 * 8);
      pfVar1[1] = (float)dVar10;
      pfVar1[2] = (float)dVar14;
      pfVar1[3] = (float)dVar15;
      pdVar2 = (double *)((long)register_RSP + lVar27 * 8 + lVar21 + -0x28);
      dVar10 = pdVar2[1];
      pdVar3 = (double *)((long)register_RSP + lVar27 * 8 + lVar21 + -0x18);
      dVar14 = *pdVar3;
      dVar15 = pdVar3[1];
      pfVar1 = (float *)(param_9 + 0x10 + lVar27 * 4);
      *pfVar1 = (float)*pdVar2;
      pfVar1[1] = (float)dVar10;
      pfVar1[2] = (float)dVar14;
      pfVar1[3] = (float)dVar15;
      lVar27 = lVar27 + 8;
      uVar25 = uVar25 - 2;
    } while (uVar25 != 0);
    if ((uVar22 & 1) != 0) goto LAB_004ecafb;
  }
  if (uVar29 == uVar19) {
    return;
  }
  param_9 = param_9 + uVar19 * 4;
  pauVar23 = (undefined1 (*) [16])(*pauVar23 + uVar19 * 8);
LAB_004ecb1d:
  lVar21 = 0;
  do {
    *(float *)(param_9 + lVar21 * 4) = (float)*(double *)(*pauVar23 + lVar21 * 8);
    lVar21 = lVar21 + 1;
  } while (uVar30 - (int)uVar19 != (int)lVar21);
  return;
}


