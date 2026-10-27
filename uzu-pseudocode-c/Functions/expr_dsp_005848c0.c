// Function : expr_dsp
// Namespace: 
// Entry    : 005848c0
// Prototype: undefined expr_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 005848c0 - 00584b89


void expr_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,long *param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13
             ,undefined8 param_14)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 in_RAX;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  
  *(undefined4 *)(param_9 + 0x34) = 0;
  iVar1 = *(int *)(param_9 + 0x28f8);
  iVar2 = *(int *)*param_10;
  *(int *)(param_9 + 0x28f8) = iVar2;
  uVar3 = *(uint *)(param_9 + 0x38);
  if (0 < (int)uVar3) {
    if (uVar3 == 1) {
      uVar6 = 0;
    }
    else {
      puVar8 = (undefined8 *)(param_9 + 0x1340);
      uVar6 = 0;
      do {
        puVar8[-4] = 0xf;
        puVar8[-5] = *(undefined8 *)(param_10[*(int *)(param_9 + 0x28fc) + (int)uVar6] + 8);
        *puVar8 = 0xf;
        puVar8[-1] = *(undefined8 *)(param_10[(int)uVar6 + 1 + *(int *)(param_9 + 0x28fc)] + 8);
        uVar6 = uVar6 + 2;
        puVar8 = puVar8 + 8;
      } while ((uVar3 & 0xfffffffe) != uVar6);
    }
    if ((uVar3 & 1) != 0) {
      *(undefined8 *)(param_9 + 0x1320 + uVar6 * 0x20) = 0xf;
      *(undefined8 *)(param_9 + 0x1318 + uVar6 * 0x20) =
           *(undefined8 *)(param_10[(long)(int)uVar6 + (long)*(int *)(param_9 + 0x28fc)] + 8);
    }
  }
  if (*(int *)(param_9 + 0x28fc) < 1) {
LAB_00584b60:
    post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
         "expr_dsp int. err nv = %d, x->exp_nive = %d");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(param_9 + 0x698) = *(undefined8 *)(*param_10 + 8);
  iVar4 = 1;
  lVar7 = 0x6c0;
  do {
    if ((*(long *)(param_9 + lVar7) == 0x12) || (*(long *)(param_9 + lVar7) == 0xe)) {
      if (*(int *)(param_9 + 0x28fc) <= iVar4) goto LAB_00584b60;
      *(undefined8 *)(param_9 + -8 + lVar7) = *(undefined8 *)(param_10[iVar4] + 8);
      iVar4 = iVar4 + 1;
    }
    lVar7 = lVar7 + 0x20;
    if (lVar7 == 0x1320) {
      if ((iVar4 != *(int *)(param_9 + 0x28fc)) &&
         ((iVar4 != 0 || (*(int *)(param_9 + 0x28fc) != 1)))) {
        post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             "expr_dsp internal error 2 nv = %d, x->exp_nive = %d");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      dsp_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
              PTR_expr_perform_00715440,1,param_9,0x1320,param_13,param_14,in_RAX);
      if (*(long *)(param_9 + 0x22b8) != 0) {
        if (iVar1 == iVar2) {
          return;
        }
        if (0 < *(int *)(param_9 + 0x38)) {
          lVar7 = 0;
          do {
            free(*(void **)(param_9 + 0x22b8 + lVar7 * 8));
            free(*(void **)(param_9 + 0x25d8 + lVar7 * 8));
            lVar7 = lVar7 + 1;
          } while (lVar7 < *(int *)(param_9 + 0x38));
        }
        lVar7 = 0;
        do {
          pvVar5 = *(void **)(param_9 + 0x1f98 + lVar7 * 8);
          if (pvVar5 != (void *)0x0) {
            free(pvVar5);
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 != 100);
      }
      if (0 < *(int *)(param_9 + 0x38)) {
        lVar7 = 0;
        do {
          pvVar5 = ex_calloc((long)*(int *)(param_9 + 0x28f8),4);
          *(void **)(param_9 + 0x22b8 + lVar7 * 8) = pvVar5;
          pvVar5 = ex_calloc((long)*(int *)(param_9 + 0x28f8),4);
          *(void **)(param_9 + 0x25d8 + lVar7 * 8) = pvVar5;
          lVar7 = lVar7 + 1;
        } while (lVar7 < *(int *)(param_9 + 0x38));
      }
      lVar7 = 0;
      do {
        while ((uVar6 = *(ulong *)(param_9 + 0x6a0 + lVar7 * 4), 0x12 < uVar6 ||
               ((0x54000UL >> (uVar6 & 0x3f) & 1) == 0))) {
          *(undefined8 *)(param_9 + 0x1f98 + lVar7) = 0;
          lVar7 = lVar7 + 8;
          if (lVar7 == 800) {
            return;
          }
        }
        pvVar5 = ex_calloc((long)*(int *)(param_9 + 0x28f8),4);
        *(void **)(param_9 + 0x1f98 + lVar7) = pvVar5;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 800);
      return;
    }
  } while( true );
}


