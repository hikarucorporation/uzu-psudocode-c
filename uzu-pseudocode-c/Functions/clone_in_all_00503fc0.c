// Function : clone_in_all
// Namespace: 
// Entry    : 00503fc0
// Prototype: undefined clone_in_all(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 param_10, ulong param_11, int * param_12, undefined8 param_13, undefined8 param_14)
// Body     : 00503fc0 - 00504118


void clone_in_all(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                 undefined8 param_10,ulong param_11,int *param_12,undefined8 param_13,
                 undefined8 param_14)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  undefined8 extraout_XMM0_Qa;
  undefined4 uVar13;
  
  lVar2 = *(long *)(param_9 + 8);
  uVar6 = *(uint *)(lVar2 + 0x38);
  uVar13 = *(undefined4 *)(lVar2 + 0x80);
  if (0 < (int)uVar6) {
    if ((int)param_11 < 1) {
      *(undefined4 *)(lVar2 + 0x80) = 0;
      if (1 < uVar6) {
        uVar3 = uVar6 - 1 & 7;
        if (uVar6 - 2 < 7) {
          iVar9 = 1;
        }
        else {
          param_11 = 0;
          do {
            iVar9 = (int)param_11;
            uVar5 = iVar9 + 8;
            param_11 = (ulong)uVar5;
          } while ((uVar6 - 1 & 0xfffffff8) != uVar5);
          iVar9 = iVar9 + 9;
        }
        iVar7 = (int)param_11;
        if (uVar3 != 0) {
          uVar6 = 0;
          do {
            uVar6 = uVar6 - 1;
          } while (-uVar3 != uVar6);
          iVar7 = ~uVar6 + iVar9;
        }
        *(int *)(lVar2 + 0x80) = iVar7;
      }
    }
    else {
      lVar11 = 0;
      lVar12 = 0;
      do {
        *(int *)(lVar2 + 0x80) = (int)lVar12;
        if (*(int *)(lVar2 + 0x48) != 0) {
          lVar2 = *(long *)(*(long *)(lVar2 + 0x40) + lVar11);
          uVar6 = *(uint *)(param_9 + 0x14);
          if (*param_12 == 2) {
            puVar8 = *(undefined8 **)(param_12 + 2);
            uVar4 = (ulong)((int)param_11 - 1);
            piVar10 = param_12 + 4;
          }
          else {
            plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
            puVar8 = (undefined8 *)(*plVar1 + 0xc0);
            uVar4 = param_11;
            piVar10 = param_12;
            param_1 = extraout_XMM0_Qa;
          }
          param_1 = obj_sendinlet(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                  lVar2,(ulong)uVar6,puVar8,uVar4,piVar10,param_14,(char)uVar13);
        }
        lVar12 = lVar12 + 1;
        lVar2 = *(long *)(param_9 + 8);
        lVar11 = lVar11 + 0x10;
      } while (lVar12 < *(int *)(lVar2 + 0x38));
    }
  }
  *(undefined4 *)(lVar2 + 0x80) = uVar13;
  return;
}


