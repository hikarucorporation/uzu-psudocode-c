// Function : hb_buffer_diff
// Namespace: 
// Entry    : 003f7460
// Prototype: byte hb_buffer_diff(long param_1, long param_2)
// Body     : 003f7460 - 003f756f


byte hb_buffer_diff(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  byte bVar7;
  byte bVar8;
  
  uVar1 = *(uint *)(param_1 + 0x60);
  if (*(int *)(param_1 + 0x30) == *(int *)(param_2 + 0x30)) {
    bVar4 = 2;
    if (uVar1 == *(uint *)(param_2 + 0x60)) {
      if (uVar1 == 0) {
        return 0;
      }
      lVar2 = *(long *)(param_1 + 0x70);
      lVar3 = *(long *)(param_2 + 0x70);
      lVar6 = 0;
      bVar4 = 0;
      uVar5 = uVar1;
      do {
        bVar7 = bVar4 | 0x10;
        if (*(int *)(lVar2 + lVar6) == *(int *)(lVar3 + lVar6)) {
          bVar7 = bVar4;
        }
        bVar8 = bVar7 | 0x20;
        if (*(int *)(lVar2 + 8 + lVar6) == *(int *)(lVar3 + 8 + lVar6)) {
          bVar8 = bVar7;
        }
        bVar4 = bVar8 | 0x40;
        if (((*(uint *)(lVar3 + 4 + lVar6) ^ *(uint *)(lVar2 + 4 + lVar6)) & 7) == 0) {
          bVar4 = bVar8;
        }
        lVar6 = lVar6 + 0x14;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      if (*(int *)(param_1 + 0x30) == 2) {
        lVar2 = *(long *)(param_2 + 0x80);
        lVar3 = *(long *)(param_1 + 0x80);
        uVar5 = 1;
        if (1 < uVar1) {
          uVar5 = uVar1;
        }
        lVar6 = 0;
        do {
          if ((((*(int *)(lVar3 + lVar6) != *(int *)(lVar2 + lVar6)) ||
               (*(int *)(lVar3 + 4 + lVar6) != *(int *)(lVar2 + 4 + lVar6))) ||
              (*(int *)(lVar3 + 8 + lVar6) != *(int *)(lVar2 + 8 + lVar6))) ||
             (*(int *)(lVar3 + 0xc + lVar6) != *(int *)(lVar2 + 0xc + lVar6))) {
            return bVar4 | 0x80;
          }
          lVar6 = lVar6 + 0x14;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
  }
  else {
    if (uVar1 == 0) {
      return (*(int *)(param_2 + 0x60) != 0) * '\x02';
    }
    bVar4 = (*(int *)(param_2 + 0x60) == 0) + 1;
  }
  return bVar4;
}


