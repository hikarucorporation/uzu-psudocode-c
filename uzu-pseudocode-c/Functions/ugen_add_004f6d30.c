// Function : ugen_add
// Namespace: 
// Entry    : 004f6d30
// Prototype: undefined ugen_add(undefined8 * param_1, long * param_2)
// Body     : 004f6d30 - 004f6efa


void ugen_add(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  
  puVar3 = getbytes(0x38);
  puVar3[4] = *param_1;
  *param_1 = puVar3;
  puVar3[5] = param_2;
  iVar2 = obj_nsiginlets(param_2);
  *(int *)(puVar3 + 1) = iVar2;
  puVar4 = getbytes((long)iVar2 << 4);
  *puVar3 = puVar4;
  uVar5 = *(uint *)(puVar3 + 1);
  if (uVar5 != 0) {
    uVar1 = uVar5 - 1;
    if ((uVar5 & 7) != 0) {
      uVar6 = 0;
      do {
        *puVar4 = 0;
        puVar4 = puVar4 + 4;
        uVar6 = uVar6 + 1;
      } while ((uVar5 & 7) != uVar6);
      uVar5 = uVar5 - uVar6;
    }
    if (6 < uVar1) {
      do {
        *puVar4 = 0;
        puVar4[4] = 0;
        puVar4[8] = 0;
        puVar4[0xc] = 0;
        puVar4[0x10] = 0;
        puVar4[0x14] = 0;
        puVar4[0x18] = 0;
        puVar4[0x1c] = 0;
        puVar4 = puVar4 + 0x20;
        uVar5 = uVar5 - 8;
      } while (uVar5 != 0);
    }
  }
  iVar2 = obj_nsigoutlets((long)param_2);
  *(int *)(puVar3 + 3) = iVar2;
  puVar4 = getbytes((long)iVar2 * 0x18);
  puVar3[2] = puVar4;
  uVar5 = *(uint *)(puVar3 + 3);
  if (uVar5 != 0) {
    uVar1 = uVar5 - 1;
    if ((uVar5 & 7) != 0) {
      uVar6 = 0;
      do {
        *(undefined8 *)(puVar4 + 4) = 0;
        *puVar4 = 0;
        puVar4 = puVar4 + 6;
        uVar6 = uVar6 + 1;
      } while ((uVar5 & 7) != uVar6);
      uVar5 = uVar5 - uVar6;
    }
    if (6 < uVar1) {
      puVar3 = (undefined8 *)(puVar4 + 0x2e);
      do {
        puVar3[-0x15] = 0;
        *(undefined4 *)(puVar3 + -0x17) = 0;
        puVar3[-0x12] = 0;
        *(undefined4 *)(puVar3 + -0x14) = 0;
        puVar3[-0xf] = 0;
        *(undefined4 *)(puVar3 + -0x11) = 0;
        puVar3[-0xc] = 0;
        *(undefined4 *)(puVar3 + -0xe) = 0;
        puVar3[-9] = 0;
        *(undefined4 *)(puVar3 + -0xb) = 0;
        puVar3[-6] = 0;
        *(undefined4 *)(puVar3 + -8) = 0;
        puVar3[-3] = 0;
        *(undefined4 *)(puVar3 + -5) = 0;
        *puVar3 = 0;
        *(undefined4 *)(puVar3 + -2) = 0;
        puVar3 = puVar3 + 0x18;
        uVar5 = uVar5 - 8;
      } while (uVar5 != 0);
    }
  }
  return;
}


