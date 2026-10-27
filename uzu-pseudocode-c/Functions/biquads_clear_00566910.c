// Function : biquads_clear
// Namespace: 
// Entry    : 00566910
// Prototype: undefined biquads_clear(long param_1)
// Body     : 00566910 - 00566a74


/* WARNING: Removing unreachable block (ram,0x00566a73) */

void biquads_clear(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = *(uint *)(param_1 + 0x688);
  if ((int)uVar2 < 1) {
    return;
  }
  if (uVar2 < 4) {
    uVar3 = 0;
    goto LAB_00566a30;
  }
  uVar3 = (ulong)(uVar2 & 0xfffffffc);
  uVar6 = (uVar3 - 4 >> 2) + 1;
  if (uVar3 - 4 == 0) {
    lVar4 = 0;
LAB_005669e4:
    puVar1 = (undefined8 *)(param_1 + 0x4f0 + lVar4 * 8);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(param_1 + 0x500 + lVar4 * 8);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(param_1 + 0x360 + lVar4 * 8);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(param_1 + 0x370 + lVar4 * 8);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(param_1 + 0x1d0 + lVar4 * 8);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(param_1 + 0x1e0 + lVar4 * 8);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(param_1 + 0x40 + lVar4 * 8);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(param_1 + 0x50 + lVar4 * 8);
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  else {
    uVar5 = uVar6 & 0xfffffffffffffffe;
    lVar4 = 0;
    do {
      puVar1 = (undefined8 *)(param_1 + 0x4f0 + lVar4 * 8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(param_1 + 0x500 + lVar4 * 8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(param_1 + 0x360 + lVar4 * 8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(param_1 + 0x370 + lVar4 * 8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(param_1 + 0x1d0 + lVar4 * 8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(param_1 + 0x1e0 + lVar4 * 8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(param_1 + 0x40 + lVar4 * 8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(param_1 + 0x50 + lVar4 * 8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(param_1 + 0x510 + lVar4 * 8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(param_1 + 0x520 + lVar4 * 8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(param_1 + 0x380 + lVar4 * 8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(param_1 + 0x390 + lVar4 * 8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(param_1 + 0x1f0 + lVar4 * 8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(param_1 + 0x200 + lVar4 * 8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(param_1 + 0x60 + lVar4 * 8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(param_1 + 0x70 + lVar4 * 8);
      *puVar1 = 0;
      puVar1[1] = 0;
      lVar4 = lVar4 + 8;
      uVar5 = uVar5 - 2;
    } while (uVar5 != 0);
    if ((uVar6 & 1) != 0) goto LAB_005669e4;
  }
  if (uVar3 == uVar2) {
    return;
  }
LAB_00566a30:
  do {
    *(undefined8 *)(param_1 + 0x4f0 + uVar3 * 8) = 0;
    *(undefined8 *)(param_1 + 0x360 + uVar3 * 8) = 0;
    *(undefined8 *)(param_1 + 0x1d0 + uVar3 * 8) = 0;
    *(undefined8 *)(param_1 + 0x40 + uVar3 * 8) = 0;
    uVar3 = uVar3 + 1;
  } while (uVar2 != uVar3);
  return;
}


