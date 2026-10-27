// Function : sigfft_swap
// Namespace: 
// Entry    : 005924b0
// Prototype: long sigfft_swap(long param_1)
// Body     : 005924b0 - 005926a1


/* WARNING: Removing unreachable block (ram,0x005926a0) */

long sigfft_swap(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  
  uVar18 = (uint)*(ulong *)(param_1 + 0x18);
  if (uVar18 == 0) goto LAB_00592675;
  puVar9 = *(undefined4 **)(param_1 + 8);
  puVar10 = *(undefined4 **)(param_1 + 0x10);
  if ((uVar18 - 1 < 7) ||
     ((puVar9 < puVar10 + (ulong)(uVar18 - 1) + 1 && (puVar10 < puVar9 + (ulong)(uVar18 - 1) + 1))))
  {
    uVar14 = uVar18 - 1;
    if ((*(ulong *)(param_1 + 0x18) & 3) != 0) {
LAB_00592508:
      uVar11 = 0;
      do {
        uVar1 = *puVar9;
        *puVar9 = *puVar10;
        *puVar10 = uVar1;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
        uVar11 = uVar11 + 1;
      } while ((uVar18 & 3) != uVar11);
      uVar18 = uVar18 - uVar11;
    }
  }
  else {
    uVar16 = (ulong)(uVar18 - 1) + 1;
    uVar15 = uVar16 & 0xfffffffffffffff8;
    uVar17 = (uVar15 - 8 >> 3) + 1;
    if (uVar15 - 8 == 0) {
      lVar13 = 0;
LAB_0059264c:
      uVar2 = *(undefined8 *)(puVar9 + lVar13);
      uVar3 = *(undefined8 *)((long)(puVar9 + lVar13) + 8);
      uVar4 = *(undefined8 *)(puVar9 + lVar13 + 4);
      uVar5 = *(undefined8 *)((long)(puVar9 + lVar13 + 4) + 8);
      uVar6 = *(undefined8 *)((long)(puVar10 + lVar13) + 8);
      uVar7 = *(undefined8 *)(puVar10 + lVar13 + 4);
      uVar8 = *(undefined8 *)((long)(puVar10 + lVar13 + 4) + 8);
      *(undefined8 *)(puVar9 + lVar13) = *(undefined8 *)(puVar10 + lVar13);
      *(undefined8 *)((long)(puVar9 + lVar13) + 8) = uVar6;
      *(undefined8 *)(puVar9 + lVar13 + 4) = uVar7;
      *(undefined8 *)((long)(puVar9 + lVar13 + 4) + 8) = uVar8;
      *(undefined8 *)(puVar10 + lVar13) = uVar2;
      *(undefined8 *)((long)(puVar10 + lVar13) + 8) = uVar3;
      *(undefined8 *)(puVar10 + lVar13 + 4) = uVar4;
      *(undefined8 *)((long)(puVar10 + lVar13 + 4) + 8) = uVar5;
    }
    else {
      uVar12 = uVar17 & 0xfffffffffffffffe;
      lVar13 = 0;
      do {
        uVar2 = *(undefined8 *)(puVar9 + lVar13);
        uVar3 = *(undefined8 *)((long)(puVar9 + lVar13) + 8);
        uVar4 = *(undefined8 *)(puVar9 + lVar13 + 4);
        uVar5 = *(undefined8 *)((long)(puVar9 + lVar13 + 4) + 8);
        uVar6 = *(undefined8 *)((long)(puVar10 + lVar13) + 8);
        uVar7 = *(undefined8 *)(puVar10 + lVar13 + 4);
        uVar8 = *(undefined8 *)((long)(puVar10 + lVar13 + 4) + 8);
        *(undefined8 *)(puVar9 + lVar13) = *(undefined8 *)(puVar10 + lVar13);
        *(undefined8 *)((long)(puVar9 + lVar13) + 8) = uVar6;
        *(undefined8 *)(puVar9 + lVar13 + 4) = uVar7;
        *(undefined8 *)((long)(puVar9 + lVar13 + 4) + 8) = uVar8;
        *(undefined8 *)(puVar10 + lVar13) = uVar2;
        *(undefined8 *)((long)(puVar10 + lVar13) + 8) = uVar3;
        *(undefined8 *)(puVar10 + lVar13 + 4) = uVar4;
        *(undefined8 *)((long)(puVar10 + lVar13 + 4) + 8) = uVar5;
        uVar2 = *(undefined8 *)(puVar9 + lVar13 + 8);
        uVar3 = *(undefined8 *)((long)(puVar9 + lVar13 + 8) + 8);
        uVar4 = *(undefined8 *)(puVar9 + lVar13 + 0xc);
        uVar5 = *(undefined8 *)((long)(puVar9 + lVar13 + 0xc) + 8);
        uVar6 = *(undefined8 *)((long)(puVar10 + lVar13 + 8) + 8);
        uVar7 = *(undefined8 *)(puVar10 + lVar13 + 0xc);
        uVar8 = *(undefined8 *)((long)(puVar10 + lVar13 + 0xc) + 8);
        *(undefined8 *)(puVar9 + lVar13 + 8) = *(undefined8 *)(puVar10 + lVar13 + 8);
        *(undefined8 *)((long)(puVar9 + lVar13 + 8) + 8) = uVar6;
        *(undefined8 *)(puVar9 + lVar13 + 0xc) = uVar7;
        *(undefined8 *)((long)(puVar9 + lVar13 + 0xc) + 8) = uVar8;
        *(undefined8 *)(puVar10 + lVar13 + 8) = uVar2;
        *(undefined8 *)((long)(puVar10 + lVar13 + 8) + 8) = uVar3;
        *(undefined8 *)(puVar10 + lVar13 + 0xc) = uVar4;
        *(undefined8 *)((long)(puVar10 + lVar13 + 0xc) + 8) = uVar5;
        lVar13 = lVar13 + 0x10;
        uVar12 = uVar12 - 2;
      } while (uVar12 != 0);
      if ((uVar17 & 1) != 0) goto LAB_0059264c;
    }
    if (uVar16 == uVar15) goto LAB_00592675;
    puVar9 = puVar9 + uVar15;
    uVar18 = uVar18 - (int)uVar15;
    puVar10 = puVar10 + uVar15;
    uVar14 = uVar18 - 1;
    if ((uVar18 & 3) != 0) goto LAB_00592508;
  }
  if (2 < uVar14) {
    lVar13 = 0;
    do {
      uVar1 = puVar9[lVar13];
      puVar9[lVar13] = puVar10[lVar13];
      puVar10[lVar13] = uVar1;
      uVar1 = puVar9[lVar13 + 1];
      puVar9[lVar13 + 1] = puVar10[lVar13 + 1];
      puVar10[lVar13 + 1] = uVar1;
      uVar1 = puVar9[lVar13 + 2];
      puVar9[lVar13 + 2] = puVar10[lVar13 + 2];
      puVar10[lVar13 + 2] = uVar1;
      uVar1 = puVar9[lVar13 + 3];
      puVar9[lVar13 + 3] = puVar10[lVar13 + 3];
      puVar10[lVar13 + 3] = uVar1;
      lVar13 = lVar13 + 4;
    } while (uVar18 != (uint)lVar13);
  }
LAB_00592675:
  return param_1 + 0x20;
}


