// Function : hb_buffer_append
// Namespace: 
// Entry    : 003f5af0
// Prototype: undefined hb_buffer_append(hb_buffer_t * param_1, long param_2, uint param_3, uint param_4)
// Body     : 003f5af0 - 003f5e7a


void hb_buffer_append(hb_buffer_t *param_1,long param_2,uint param_3,uint param_4)

{
  hb_buffer_t hVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  undefined4 *puVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  
  if (*(uint *)(param_2 + 0x60) < param_4) {
    param_4 = *(uint *)(param_2 + 0x60);
  }
  uVar13 = param_3;
  if (param_4 < param_3) {
    uVar13 = param_4;
  }
  if (param_4 <= param_3) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x60);
  uVar12 = param_4 - uVar13;
  uVar10 = uVar2 + uVar12;
  if (CARRY4(uVar2,uVar12)) {
    param_1[0x58] = (hb_buffer_t)0x0;
    return;
  }
  if (*(int *)(param_1 + 4) == 0) goto LAB_003f5bd9;
  if ((uVar10 == 0) || (uVar10 < *(uint *)(param_1 + 0x68))) {
    iVar7 = uVar10 - uVar2;
    uVar4 = uVar2;
    if (uVar2 <= uVar10 && iVar7 != 0) {
LAB_003f5b5f:
      if (iVar7 * 0x14 != 0) {
        memset((void *)((ulong)uVar4 * 0x14 + *(long *)(param_1 + 0x70)),0,
               (ulong)(uint)(iVar7 * 0x14));
      }
      if (param_1[0x5b] != (hb_buffer_t)0x0) {
        uVar4 = (uVar10 - *(uint *)(param_1 + 0x60)) * 0x14;
        if (uVar4 != 0) {
          memset((void *)((ulong)*(uint *)(param_1 + 0x60) * 0x14 + *(long *)(param_1 + 0x80)),0,
                 (ulong)uVar4);
        }
      }
    }
  }
  else {
    uVar6 = hb_buffer_t::enlarge(param_1,uVar10);
    if ((char)uVar6 == '\0') goto LAB_003f5bd9;
    uVar4 = *(uint *)(param_1 + 0x60);
    iVar7 = uVar10 - uVar4;
    if (uVar4 <= uVar10 && iVar7 != 0) goto LAB_003f5b5f;
  }
  *(uint *)(param_1 + 0x60) = uVar10;
  if (uVar10 == 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  *(undefined4 *)(param_1 + 0xb4) = 0;
LAB_003f5bd9:
  if (param_1[0x58] != (hb_buffer_t)0x0) {
    if (uVar2 == 0) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
      hVar1 = param_1[0x5b];
    }
    else {
      hVar1 = param_1[0x5b];
    }
    if ((hVar1 == (hb_buffer_t)0x0) && (*(char *)(param_2 + 0x5b) != '\0')) {
      *(undefined2 *)(param_1 + 0x5a) = 0x100;
      *(undefined4 *)(param_1 + 100) = 0;
      *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
      if (*(int *)(param_1 + 0x60) * 0x14 != 0) {
        memset(*(void **)(param_1 + 0x80),0,(ulong)(uint)(*(int *)(param_1 + 0x60) * 0x14));
      }
    }
    iVar7 = *(int *)(param_1 + 0x38);
    if (iVar7 == 0) {
      iVar7 = *(int *)(param_2 + 0x38);
      *(int *)(param_1 + 0x38) = iVar7;
    }
    if (iVar7 == *(int *)(param_2 + 0x38)) {
      iVar7 = *(int *)(param_1 + 0x3c);
      if (iVar7 == 0) {
        iVar7 = *(int *)(param_2 + 0x3c);
        *(int *)(param_1 + 0x3c) = iVar7;
      }
      if ((iVar7 == *(int *)(param_2 + 0x3c)) && (*(long *)(param_1 + 0x40) == 0)) {
        *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
      }
    }
    if (uVar12 != 0) {
      lVar11 = (ulong)uVar13 * 0x14;
      memcpy((void *)(*(long *)(param_1 + 0x70) + (ulong)uVar2 * 0x14),
             (void *)(*(long *)(param_2 + 0x70) + lVar11),(ulong)uVar12 * 0x14);
      if (param_1[0x5b] != (hb_buffer_t)0x0) {
        memcpy((void *)((ulong)uVar2 * 0x14 + *(long *)(param_1 + 0x80)),
               (void *)(lVar11 + *(long *)(param_2 + 0x80)),(ulong)uVar12 * 0x14);
      }
    }
    if (*(int *)(param_2 + 0x30) == 1) {
      if ((uVar2 == 0) && (*(int *)(param_2 + 0xb0) + uVar13 != 0)) {
        *(undefined4 *)(param_1 + 0xb0) = 0;
        if (uVar13 != 0) {
          lVar11 = *(long *)(param_2 + 0x70);
          lVar8 = (ulong)uVar13 * 0x14;
          uVar5 = 0;
          do {
            uVar3 = *(undefined4 *)(lVar11 + -0x14 + lVar8);
            *(int *)(param_1 + 0xb0) = (int)uVar5 + 1;
            *(undefined4 *)(param_1 + uVar5 * 4 + 0x88) = uVar3;
            lVar8 = lVar8 + -0x14;
            if (lVar8 == 0) break;
            uVar5 = (ulong)*(uint *)(param_1 + 0xb0);
          } while (*(uint *)(param_1 + 0xb0) < 5);
        }
        if (*(int *)(param_2 + 0xb0) != 0) {
          uVar5 = 0;
          do {
            uVar13 = *(uint *)(param_1 + 0xb0);
            if (4 < (ulong)uVar13) break;
            uVar3 = *(undefined4 *)(param_2 + 0x88 + uVar5 * 4);
            *(uint *)(param_1 + 0xb0) = uVar13 + 1;
            *(undefined4 *)(param_1 + (ulong)uVar13 * 4 + 0x88) = uVar3;
            uVar5 = uVar5 + 1;
          } while (uVar5 < *(uint *)(param_2 + 0xb0));
        }
      }
      *(undefined4 *)(param_1 + 0xb4) = 0;
      if (param_4 < *(uint *)(param_2 + 0x60)) {
        uVar5 = (ulong)param_4;
        puVar9 = (undefined4 *)(uVar5 * 0x14 + *(long *)(param_2 + 0x70));
        uVar13 = 0;
        do {
          uVar5 = uVar5 + 1;
          uVar3 = *puVar9;
          *(uint *)(param_1 + 0xb4) = uVar13 + 1;
          *(undefined4 *)(param_1 + (ulong)uVar13 * 4 + 0x9c) = uVar3;
          if (*(uint *)(param_2 + 0x60) <= uVar5) break;
          puVar9 = puVar9 + 5;
          uVar13 = *(uint *)(param_1 + 0xb4);
        } while (uVar13 < 5);
      }
      if (*(int *)(param_2 + 0xb4) != 0) {
        uVar5 = 0;
        do {
          uVar13 = *(uint *)(param_1 + 0xb4);
          if (4 < (ulong)uVar13) {
            return;
          }
          uVar3 = *(undefined4 *)(param_2 + 0x9c + uVar5 * 4);
          *(uint *)(param_1 + 0xb4) = uVar13 + 1;
          *(undefined4 *)(param_1 + (ulong)uVar13 * 4 + 0x9c) = uVar3;
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)(param_2 + 0xb4));
      }
    }
  }
  return;
}


