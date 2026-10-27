// Function : template_conform
// Namespace: 
// Entry    : 00520cf0
// Prototype: undefined template_conform(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, undefined8 param_11, undefined8 param_12, long * param_13, long param_14)
// Body     : 00520cf0 - 00520fa6


void template_conform(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9,long *param_10,undefined8 param_11,undefined8 param_12,
                     long *param_13,long param_14)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  long *__s;
  void *__s_00;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar12;
  
  uVar2 = *(uint *)(param_10 + 3);
  uVar3 = *(uint *)(param_9 + 0x18);
  __s = getbytes((long)(int)uVar2 * 4);
  __s_00 = getbytes((long)(int)uVar3 * 4);
  uVar7 = (ulong)uVar2;
  uVar10 = (ulong)uVar3;
  if ((long)(int)uVar2 < 1) {
    if (0 < (int)uVar3) {
      memset(__s_00,0,uVar10 * 4);
    }
  }
  else {
    memset(__s,0xff,uVar7 * 4);
    if (0 < (int)uVar3) {
      uVar11 = 0;
      memset(__s_00,0,uVar10 * 4);
      param_14 = param_10[4];
      param_13 = (long *)(*(long *)(param_9 + 0x20) + 0x10);
      do {
        piVar1 = (int *)(param_14 + uVar11 * 0x18);
        lVar8 = *(long *)(param_14 + 8 + uVar11 * 0x18);
        uVar6 = 0;
        plVar9 = param_13;
        do {
          if (((lVar8 == plVar9[-1]) && (iVar4 = *piVar1, iVar4 == (int)plVar9[-2])) &&
             ((iVar4 != 3 || (*(long *)(piVar1 + 4) == *plVar9)))) {
            *(int *)((long)__s + uVar11 * 4) = (int)uVar6;
            *(undefined4 *)((long)__s_00 + uVar6 * 4) = 1;
          }
          uVar6 = uVar6 + 1;
          plVar9 = plVar9 + 3;
        } while (uVar10 != uVar6);
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar7);
      if (0 < (int)uVar2) {
        uVar11 = 0;
        do {
          if (*(int *)((long)__s + uVar11 * 4) < 0) {
            piVar1 = (int *)(param_10[4] + uVar11 * 0x18);
            lVar8 = 0x10;
            uVar6 = 0;
            do {
              if (*(int *)((long)__s_00 + uVar6 * 4) == 0) {
                iVar4 = *piVar1;
                if ((iVar4 == *(int *)(*(long *)(param_9 + 0x20) + -0x10 + lVar8)) &&
                   ((iVar4 != 3 ||
                    (*(long *)(piVar1 + 4) == *(long *)(*(long *)(param_9 + 0x20) + lVar8))))) {
                  *(int *)((long)__s + uVar11 * 4) = (int)uVar6;
                  *(undefined4 *)((long)__s_00 + uVar6 * 4) = 1;
                }
              }
              uVar6 = uVar6 + 1;
              lVar8 = lVar8 + 0x18;
            } while (uVar10 != uVar6);
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar7);
      }
    }
  }
  if (uVar2 == uVar3) {
    if ((int)uVar2 < 1) goto LAB_00520f7f;
    uVar10 = (ulong)(uVar2 & 3);
    if (uVar7 - 1 < 3) {
      uVar7 = 0;
      bVar5 = false;
    }
    else {
      uVar7 = 0;
      param_13 = (long *)0x1;
      bVar5 = false;
      do {
        if ((uVar7 + 3 != (ulong)*(uint *)((long)__s + uVar7 * 4 + 0xc) ||
            uVar7 + 2 != (ulong)*(uint *)((long)__s + uVar7 * 4 + 8)) ||
            (uVar7 + 1 != (ulong)*(uint *)((long)__s + uVar7 * 4 + 4) ||
            *(uint *)((long)__s + uVar7 * 4) != uVar7)) {
          bVar5 = true;
        }
        uVar7 = uVar7 + 4;
      } while (uVar7 != (uVar2 & 0xfffffffc));
    }
    for (; uVar10 != 0; uVar10 = uVar10 - 1) {
      if (uVar7 != *(uint *)((long)__s + uVar7 * 4)) {
        bVar5 = true;
      }
      uVar7 = uVar7 + 1;
    }
    param_14 = 0;
    if (!bVar5) goto LAB_00520f7f;
  }
  lVar8 = pd_getcanvaslist();
  if (lVar8 != 0) {
    uVar12 = extraout_XMM0_Qa;
    do {
      uVar12 = template_conformglist
                         (uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                          param_10,lVar8,__s,(char *)param_13,param_14);
      lVar8 = *(long *)(lVar8 + 0xd8);
    } while (lVar8 != 0);
  }
LAB_00520f7f:
  freebytes(__s);
  freebytes(__s_00);
  return;
}


