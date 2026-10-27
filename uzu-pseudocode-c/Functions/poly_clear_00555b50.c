// Function : poly_clear
// Namespace: 
// Entry    : 00555b50
// Prototype: undefined poly_clear(long param_1)
// Body     : 00555b50 - 00555c27


void poly_clear(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x30);
  if (uVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x38);
    uVar1 = uVar2 - 1;
    if ((uVar2 & 7) != 0) {
      uVar5 = 0;
      do {
        *(undefined8 *)(lVar3 + 8) = 0;
        *(undefined4 *)(lVar3 + 4) = 0;
        lVar3 = lVar3 + 0x10;
        uVar5 = uVar5 + 1;
      } while ((uVar2 & 7) != uVar5);
      uVar2 = uVar2 - uVar5;
    }
    if (6 < uVar1) {
      puVar4 = (undefined8 *)(lVar3 + 0x78);
      do {
        puVar4[-0xe] = 0;
        *(undefined4 *)((long)puVar4 + -0x74) = 0;
        puVar4[-0xc] = 0;
        *(undefined4 *)((long)puVar4 + -100) = 0;
        puVar4[-10] = 0;
        *(undefined4 *)((long)puVar4 + -0x54) = 0;
        puVar4[-8] = 0;
        *(undefined4 *)((long)puVar4 + -0x44) = 0;
        puVar4[-6] = 0;
        *(undefined4 *)((long)puVar4 + -0x34) = 0;
        puVar4[-4] = 0;
        *(undefined4 *)((long)puVar4 + -0x24) = 0;
        puVar4[-2] = 0;
        *(undefined4 *)((long)puVar4 + -0x14) = 0;
        *puVar4 = 0;
        *(undefined4 *)((long)puVar4 + -4) = 0;
        puVar4 = puVar4 + 0x10;
        uVar2 = uVar2 - 8;
      } while (uVar2 != 0);
    }
  }
  return;
}


