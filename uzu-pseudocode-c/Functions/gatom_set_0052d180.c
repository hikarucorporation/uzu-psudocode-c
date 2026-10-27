// Function : gatom_set
// Namespace: 
// Entry    : 0052d180
// Prototype: undefined gatom_set(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, uint param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 0052d180 - 0052d34c


void gatom_set(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long *param_9,undefined8 param_10,uint param_11,int *param_12,char *param_13,
              undefined8 param_14)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined7 extraout_var;
  int *piVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  float extraout_XMM0_Da;
  float fVar11;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar13;
  undefined8 uVar12;
  uint uStack_30;
  
  piVar7 = param_12;
  lVar3 = gatom_getatom(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        (long)param_9);
  iVar10 = (int)param_9[6];
  if (param_11 == 0) {
    if (iVar10 != 0) {
      return;
    }
  }
  else if (iVar10 != 0) {
    if (iVar10 == 2) {
      lVar9 = *(long *)(lVar3 + 8);
      lVar5 = atom_getsymbol(param_12);
      *(long *)(lVar3 + 8) = lVar5;
      if (lVar5 == lVar9) {
        return;
      }
    }
    else {
      if (iVar10 != 1) {
        return;
      }
      uVar12 = *(undefined8 *)(lVar3 + 8);
      iVar10 = atom_getfloat(param_12);
      *(int *)(lVar3 + 8) = iVar10;
      uVar2 = *(uint *)(lVar3 + 8);
      uStack_30 = (uint)uVar12;
      uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      uVar8 = uStack_30 >> 0x18 | (uStack_30 & 0xff0000) >> 8 | (uStack_30 & 0xff00) << 8 |
              uStack_30 << 0x18;
      if (uVar8 < uVar2 == uVar2 < uVar8) {
        return;
      }
    }
    goto LAB_0052d307;
  }
  lVar3 = binbuf_getvec(param_9[2]);
  uVar2 = binbuf_getnatom((undefined4 *)param_9[2]);
  fVar11 = extraout_XMM0_Da;
  uVar13 = extraout_XMM0_Db;
  if (uVar2 == param_11) {
    if ((int)param_11 < 1) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar7 = (int *)(ulong)param_11;
      lVar9 = 8;
      piVar4 = (int *)0x0;
      while (iVar10 = *(int *)((long)param_12 + lVar9 + -8), iVar10 == *(int *)(lVar3 + -8 + lVar9))
      {
        if (iVar10 == 2) {
          if (*(long *)((long)param_12 + lVar9) != *(long *)(lVar3 + lVar9)) break;
        }
        else if (iVar10 == 1) {
          fVar11 = *(float *)((long)param_12 + lVar9);
          uVar13 = 0;
          if (fVar11 != *(float *)(lVar3 + lVar9)) break;
        }
        piVar4 = (int *)((long)piVar4 + 1);
        lVar9 = lVar9 + 0x10;
        if (piVar7 == piVar4) {
          return;
        }
      }
    }
    if ((uint)piVar4 == param_11) {
      return;
    }
  }
  uVar12 = binbuf_clear(CONCAT44(uVar13,fVar11),param_2,param_3,param_4,param_5,param_6,param_7,
                        param_8,(int *)param_9[2]);
  binbuf_add(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(int *)param_9[2],
             param_11,(undefined8 *)param_12,piVar7,param_13,param_14);
  binbuf_getvec(param_9[2]);
  if (0 < (int)param_11) {
    lVar3 = 0;
    do {
      if (*(int *)((long)param_12 + lVar3) == 3) {
        *(undefined4 *)((long)param_12 + lVar3) = 2;
        puVar6 = gensym("(pointer)");
        *(undefined8 **)((long)param_12 + lVar3 + 8) = puVar6;
      }
      lVar3 = lVar3 + 0x10;
    } while ((ulong)param_11 * 0x10 != lVar3);
  }
LAB_0052d307:
  if ((((long *)param_9[7])[0x18] == 0) ||
     (bVar1 = gobj_shouldvis(param_9,(long *)param_9[7]), (int)CONCAT71(extraout_var,bVar1) == 0)) {
    return;
  }
  sys_queuegui((long)param_9,param_9[7],0x52a8a0);
  return;
}


