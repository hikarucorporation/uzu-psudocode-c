// Function : hb_buffer_reverse
// Namespace: 
// Entry    : 003f7570
// Prototype: undefined hb_buffer_reverse(long param_1)
// Body     : 003f7570 - 003f7651


void hb_buffer_reverse(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulong uVar9;
  
  uVar8 = *(uint *)(param_1 + 0x60);
  if (1 < uVar8) {
    puVar6 = *(undefined8 **)(param_1 + 0x70);
    uVar9 = (ulong)(uVar8 - 1);
    puVar7 = (undefined8 *)((long)puVar6 + uVar9 * 0x14);
    uVar5 = 0;
    do {
      uVar9 = uVar9 - 1;
      uVar1 = *(undefined4 *)(puVar7 + 2);
      uVar2 = *puVar7;
      uVar3 = puVar7[1];
      *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar6 + 2);
      uVar4 = puVar6[1];
      *puVar7 = *puVar6;
      puVar7[1] = uVar4;
      *(undefined4 *)(puVar6 + 2) = uVar1;
      *puVar6 = uVar2;
      puVar6[1] = uVar3;
      uVar5 = uVar5 + 1;
      puVar6 = (undefined8 *)((long)puVar6 + 0x14);
      puVar7 = (undefined8 *)((long)puVar7 + -0x14);
    } while (uVar5 < (uVar9 & 0xffffffff));
  }
  if (*(char *)(param_1 + 0x5b) != '\0') {
    if (*(uint *)(param_1 + 0x60) < uVar8) {
      uVar8 = *(uint *)(param_1 + 0x60);
    }
    if (1 < uVar8) {
      puVar6 = *(undefined8 **)(param_1 + 0x80);
      uVar9 = (ulong)(uVar8 - 1);
      puVar7 = (undefined8 *)((long)puVar6 + uVar9 * 0x14);
      uVar5 = 0;
      do {
        uVar9 = uVar9 - 1;
        uVar1 = *(undefined4 *)(puVar7 + 2);
        uVar2 = *puVar7;
        uVar3 = puVar7[1];
        *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar6 + 2);
        uVar4 = puVar6[1];
        *puVar7 = *puVar6;
        puVar7[1] = uVar4;
        *(undefined4 *)(puVar6 + 2) = uVar1;
        *puVar6 = uVar2;
        puVar6[1] = uVar3;
        uVar5 = uVar5 + 1;
        puVar6 = (undefined8 *)((long)puVar6 + 0x14);
        puVar7 = (undefined8 *)((long)puVar7 + -0x14);
      } while (uVar5 < (uVar9 & 0xffffffff));
    }
  }
  return;
}


