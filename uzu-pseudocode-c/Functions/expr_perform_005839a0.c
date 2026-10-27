// Function : expr_perform
// Namespace: 
// Entry    : 005839a0
// Prototype: long expr_perform(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005839a0 - 00583d3e


long expr_perform(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 char *param_13,undefined8 param_14)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  size_t __n;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined4 extraout_XMM0_Da;
  float fVar10;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar11;
  undefined4 extraout_XMM0_Db_00;
  long local_58;
  long lStack_50;
  long local_38;
  
  lVar2 = *(long *)(param_9 + 8);
  uVar1 = *(uint *)(lVar2 + 0x30);
  if ((uVar1 & 6) == 0) {
    post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
         "expr_perform: bad x->exp_flags = %d");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((uVar1 & 8) == 0) {
    if ((uVar1 & 5) == 0) {
      if (*(int *)(lVar2 + 0x38) == 1) {
        *(undefined8 *)(lVar2 + 0x1320) = 0xf;
        ex_eval(param_1,param_2,param_5,param_6,param_7,param_8,lVar2,*(ulong **)(lVar2 + 0x378),
                (float *)(lVar2 + 0x1318),(undefined *)0x0,param_13,param_14);
      }
      else {
        lStack_50 = 0xf;
        if (0 < *(int *)(lVar2 + 0x38)) {
          lVar9 = 0;
          do {
            local_58 = *(undefined8 *)(lVar2 + 0x25d8 + lVar9 * 8);
            ex_eval(param_1,param_2,param_5,param_6,param_7,param_8,lVar2,
                    *(ulong **)(lVar2 + 0x378 + lVar9 * 8),(float *)&local_58,(undefined *)0x0,
                    param_13,param_14);
            param_1 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
            lVar9 = lVar9 + 1;
          } while (lVar9 < *(int *)(lVar2 + 0x38));
          if (0 < *(int *)(lVar2 + 0x38)) {
            iVar4 = *(int *)(lVar2 + 0x28f8);
            puVar7 = (undefined8 *)(lVar2 + 0x1318);
            lVar9 = 0;
            do {
              memcpy((void *)*puVar7,*(void **)(lVar2 + 0x25d8 + lVar9 * 8),(long)(iVar4 << 2));
              lVar9 = lVar9 + 1;
              puVar7 = puVar7 + 4;
            } while (lVar9 < *(int *)(lVar2 + 0x38));
          }
        }
      }
    }
    else if ((uVar1 & 3) == 0) {
      iVar4 = *(int *)(lVar2 + 0x28f8);
      local_38 = param_9;
      if ((0 < iVar4) && (uVar5 = (ulong)*(uint *)(lVar2 + 0x38), 0 < (int)*(uint *)(lVar2 + 0x38)))
      {
        uVar8 = 0;
        do {
          if (0 < (int)uVar5) {
            lVar9 = 0;
            do {
              local_58 = 0;
              lStack_50 = 0;
              puVar6 = (undefined *)(uVar8 & 0xffffffff);
              ex_eval(0,param_2,param_5,param_6,param_7,param_8,lVar2,
                      *(ulong **)(lVar2 + 0x378 + lVar9 * 8),(float *)&local_58,puVar6,param_13,
                      param_14);
              if (lStack_50 == 7) {
                if ((*(uint *)(lVar2 + 0x34) & 0x20) == 0) {
                  *(uint *)(lVar2 + 0x34) = *(uint *)(lVar2 + 0x34) | 0x20;
                  uVar11 = pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,
                                    param_4,param_5,param_6,param_7,param_8,lVar2,
                                    "fexpr~: \'%s\': cannot convert string to sample value\n",
                                    *(undefined8 *)(lVar2 + 0x40),puVar6,param_13,param_14);
                  uVar11 = pd_error(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                    lVar2,"fexpr~: No more such errors will be reported",
                                    extraout_RDX,puVar6,param_13,param_14);
                  pd_error(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar2,
                           "fexpr~: till the next reset",extraout_RDX_00,puVar6,param_13,param_14);
                }
                *(undefined4 *)(*(long *)(lVar2 + 0x25d8 + lVar9 * 8) + uVar8 * 4) = 0;
              }
              else {
                if (lStack_50 == 2) {
                  fVar10 = (float)local_58;
                }
                else {
                  if (lStack_50 != 1) {
                    post(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5
                         ,param_6,param_7,param_8,"expr_perform: bad result type %d");
                    goto LAB_00583aca;
                  }
                  fVar10 = (float)local_58;
                }
                *(float *)(*(long *)(lVar2 + 0x25d8 + lVar9 * 8) + uVar8 * 4) = fVar10;
              }
LAB_00583aca:
              lVar9 = lVar9 + 1;
              uVar5 = (ulong)*(int *)(lVar2 + 0x38);
            } while (lVar9 < (long)uVar5);
            iVar4 = *(int *)(lVar2 + 0x28f8);
          }
          uVar8 = uVar8 + 1;
        } while ((long)uVar8 < (long)iVar4);
      }
      param_9 = local_38;
      __n = (size_t)(iVar4 << 2);
      lVar9 = 0;
      do {
        if (*(long *)(lVar2 + 0x6a0 + lVar9 * 4) == 0x12) {
          memcpy(*(void **)(lVar2 + 0x1f98 + lVar9),*(void **)(lVar2 + 0x698 + lVar9 * 4),__n);
          lVar3 = *(long *)(lVar2 + 0x6c0 + lVar9 * 4);
        }
        else {
          lVar3 = *(long *)(lVar2 + 0x6c0 + lVar9 * 4);
        }
        if (lVar3 == 0x12) {
          memcpy(*(void **)(lVar2 + 0x1fa0 + lVar9),*(void **)(lVar2 + 0x6b8 + lVar9 * 4),__n);
        }
        lVar9 = lVar9 + 0x10;
      } while (lVar9 != 800);
      if (0 < *(int *)(lVar2 + 0x38)) {
        puVar7 = (undefined8 *)(lVar2 + 0x1318);
        lVar9 = 0;
        do {
          memcpy(*(void **)(lVar2 + 0x22b8 + lVar9 * 8),*(void **)(lVar2 + 0x25d8 + lVar9 * 8),__n);
          memcpy((void *)*puVar7,*(void **)(lVar2 + 0x25d8 + lVar9 * 8),__n);
          lVar9 = lVar9 + 1;
          puVar7 = puVar7 + 4;
        } while (lVar9 < *(int *)(lVar2 + 0x38));
      }
    }
    else {
      pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar2,
               "expr_perform: bad x->exp_flags = %d - expecting fexpr",(ulong)uVar1,param_12,
               param_13,param_14);
    }
  }
  else if (0 < *(int *)(lVar2 + 0x38)) {
    puVar7 = (undefined8 *)(lVar2 + 0x1318);
    lVar9 = 0;
    do {
      memset((void *)*puVar7,0,(long)*(int *)(lVar2 + 0x28f8) << 2);
      lVar9 = lVar9 + 1;
      puVar7 = puVar7 + 4;
    } while (lVar9 < *(int *)(lVar2 + 0x38));
  }
  return param_9 + 0x10;
}


