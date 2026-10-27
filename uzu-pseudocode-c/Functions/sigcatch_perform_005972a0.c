// Function : sigcatch_perform
// Namespace: 
// Entry    : 005972a0
// Prototype: long sigcatch_perform(long param_1)
// Body     : 005972a0 - 00597482


long sigcatch_perform(long param_1)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  uint *puVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  uint *puVar19;
  uint uVar20;
  
  uVar16 = *(ulong *)(param_1 + 0x18);
  iVar14 = (int)uVar16;
  if (iVar14 != 0) {
    puVar3 = *(uint **)(param_1 + 8);
    puVar4 = *(uint **)(param_1 + 0x10);
    if ((iVar14 - 1U < 7) ||
       ((puVar3 < puVar4 + (ulong)(iVar14 - 1) + 1 && (puVar4 < puVar3 + (ulong)(iVar14 - 1) + 1))))
    {
      puVar12 = puVar3;
      puVar19 = puVar4;
    }
    else {
      uVar17 = (ulong)(iVar14 - 1U) + 1;
      uVar18 = uVar17 & 0xfffffffffffffff8;
      puVar12 = puVar3 + uVar18;
      uVar16 = (ulong)(uint)(iVar14 - (int)uVar18);
      puVar19 = puVar4 + uVar18;
      uVar11 = 0;
      do {
        puVar1 = (uint *)((long)puVar3 + uVar11);
        uVar2 = *puVar1;
        uVar20 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        puVar1 = (uint *)((long)puVar3 + uVar11 + 0x10);
        uVar7 = *puVar1;
        uVar8 = puVar1[1];
        uVar9 = puVar1[2];
        uVar10 = puVar1[3];
        *(undefined1 (*) [16])((long)puVar3 + uVar11) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])((long)puVar3 + uVar11 + 0x10) = (undefined1  [16])0x0;
        puVar1 = (uint *)((long)puVar4 + uVar11);
        *puVar1 = (int)((uVar2 >> 0x1d ^ uVar2 >> 0x1e) << 0x1f) >> 0x1f & uVar2;
        puVar1[1] = (int)((uVar20 >> 0x1d ^ uVar20 >> 0x1e) << 0x1f) >> 0x1f & uVar20;
        puVar1[2] = (int)((uVar5 >> 0x1d ^ uVar5 >> 0x1e) << 0x1f) >> 0x1f & uVar5;
        puVar1[3] = (int)((uVar6 >> 0x1d ^ uVar6 >> 0x1e) << 0x1f) >> 0x1f & uVar6;
        puVar1 = (uint *)((long)puVar4 + uVar11 + 0x10);
        *puVar1 = (int)((uVar7 >> 0x1d ^ uVar7 >> 0x1e) << 0x1f) >> 0x1f & uVar7;
        puVar1[1] = (int)((uVar8 >> 0x1d ^ uVar8 >> 0x1e) << 0x1f) >> 0x1f & uVar8;
        puVar1[2] = (int)((uVar9 >> 0x1d ^ uVar9 >> 0x1e) << 0x1f) >> 0x1f & uVar9;
        puVar1[3] = (int)((uVar10 >> 0x1d ^ uVar10 >> 0x1e) << 0x1f) >> 0x1f & uVar10;
        uVar11 = uVar11 + 0x20;
      } while ((uVar17 * 4 & 0xffffffffffffffe0) != uVar11);
      if (uVar17 == uVar18) goto LAB_0059747b;
    }
    iVar15 = (int)uVar16;
    iVar14 = iVar15;
    if ((uVar16 & 1) != 0) {
      uVar2 = *puVar12;
      *puVar12 = 0;
      uVar20 = 0;
      if (((uVar2 >> 0x1d ^ uVar2 >> 0x1e) & 1) != 0) {
        uVar20 = uVar2;
      }
      puVar12 = puVar12 + 1;
      *puVar19 = uVar20;
      puVar19 = puVar19 + 1;
      iVar14 = iVar15 + -1;
    }
    if (iVar15 != 1) {
      lVar13 = 0;
      do {
        uVar2 = puVar12[lVar13];
        puVar12[lVar13] = 0;
        uVar20 = 0;
        if (((uVar2 >> 0x1d ^ uVar2 >> 0x1e) & 1) != 0) {
          uVar20 = uVar2;
        }
        puVar19[lVar13] = uVar20;
        uVar2 = puVar12[lVar13 + 1];
        puVar12[lVar13 + 1] = 0;
        uVar20 = 0;
        if (((uVar2 >> 0x1d ^ uVar2 >> 0x1e) & 1) != 0) {
          uVar20 = uVar2;
        }
        puVar19[lVar13 + 1] = uVar20;
        lVar13 = lVar13 + 2;
      } while (iVar14 != (int)lVar13);
    }
  }
LAB_0059747b:
  return param_1 + 0x20;
}


