// Function : default_proxy_anything
// Namespace: 
// Entry    : 00570460
// Prototype: undefined default_proxy_anything(long param_1, undefined8 param_2, uint param_3, undefined8 * param_4)
// Body     : 00570460 - 00570569


void default_proxy_anything(long param_1,undefined8 param_2,uint param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  
  lVar2 = *(long *)(param_1 + 8);
  *(undefined8 *)(lVar2 + 0x60) = param_2;
  if (param_3 == 0) {
    *(undefined8 *)(lVar2 + 0x40) = 0;
    *(undefined8 *)(lVar2 + 0x50) = 0;
    return;
  }
  *(long *)(lVar2 + 0x40) = (long)(int)param_3;
  puVar5 = getbytes((long)(int)param_3 << 4);
  *(undefined8 **)(lVar2 + 0x48) = puVar5;
  *(undefined8 **)(lVar2 + 0x50) = puVar5;
  if (0 < (int)param_3) {
    uVar4 = param_4[1];
    *puVar5 = *param_4;
    puVar5[1] = uVar4;
    uVar4 = param_4[1];
    *puVar5 = *param_4;
    puVar5[1] = uVar4;
    if (param_3 != 1) {
      lVar6 = 1;
      if (param_3 != 2) {
        lVar6 = 1;
        lVar7 = 0;
        do {
          lVar3 = *(long *)(lVar2 + 0x50);
          puVar5 = (undefined8 *)((long)param_4 + lVar7 + 0x10);
          uVar4 = puVar5[1];
          puVar1 = (undefined8 *)(*(long *)(lVar2 + 0x48) + 0x10 + lVar7);
          *puVar1 = *puVar5;
          puVar1[1] = uVar4;
          puVar5 = (undefined8 *)((long)param_4 + lVar7 + 0x10);
          uVar4 = puVar5[1];
          puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar7);
          *puVar1 = *puVar5;
          puVar1[1] = uVar4;
          lVar3 = *(long *)(lVar2 + 0x50);
          puVar5 = (undefined8 *)((long)param_4 + lVar7 + 0x20);
          uVar4 = puVar5[1];
          puVar1 = (undefined8 *)(*(long *)(lVar2 + 0x48) + 0x20 + lVar7);
          *puVar1 = *puVar5;
          puVar1[1] = uVar4;
          puVar5 = (undefined8 *)((long)param_4 + lVar7 + 0x20);
          uVar4 = puVar5[1];
          puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar7);
          *puVar1 = *puVar5;
          puVar1[1] = uVar4;
          lVar7 = lVar7 + 0x20;
          lVar3 = lVar6 - ((ulong)param_3 - 1 & 0xfffffffffffffffe);
          lVar6 = lVar6 + 2;
        } while (lVar3 != -1);
      }
      if (((ulong)param_3 - 1 & 1) != 0) {
        lVar7 = *(long *)(lVar2 + 0x50);
        uVar4 = (param_4 + lVar6 * 2)[1];
        puVar5 = (undefined8 *)(*(long *)(lVar2 + 0x48) + lVar6 * 0x10);
        *puVar5 = param_4[lVar6 * 2];
        puVar5[1] = uVar4;
        uVar4 = (param_4 + lVar6 * 2)[1];
        puVar5 = (undefined8 *)(lVar7 + lVar6 * 0x10);
        *puVar5 = param_4[lVar6 * 2];
        puVar5[1] = uVar4;
      }
    }
  }
  return;
}


