// Function : pd_undo_set_objectstate
// Namespace: 
// Entry    : 0052e230
// Prototype: undefined pd_undo_set_objectstate(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long * param_9, long param_10, char * param_11, uint param_12, uint * param_13, ulong param_14, undefined8 * param_15)
// Body     : 0052e230 - 0052e3a1


void pd_undo_set_objectstate
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               double param_5,double param_6,double param_7,undefined8 param_8,long *param_9,
               long param_10,char *param_11,uint param_12,uint *param_13,ulong param_14,
               undefined8 *param_15)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined7 extraout_var;
  undefined8 extraout_RDX;
  undefined *puVar9;
  uint *puVar10;
  undefined4 *puVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar12;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  
  puVar10 = param_13;
  puVar11 = (undefined4 *)param_14;
  iVar3 = glist_getindex((long)param_9,param_10);
  lVar5 = canvas_undo_get((long)param_9);
  if ((lVar5 == 0) || (*(int *)(lVar5 + 0x18) == 0)) {
    if (param_12 == (uint)param_14) {
      if (0 < (int)param_12) {
        lVar5 = 8;
        uVar4 = param_12;
        do {
          iVar1 = *(int *)((long)param_13 + lVar5 + -8);
          if (iVar1 != *(int *)((long)param_15 + lVar5 + -8)) goto LAB_0052e2c8;
          if (iVar1 == 1) {
            if (*(float *)((long)param_13 + lVar5) != *(float *)((long)param_15 + lVar5))
            goto LAB_0052e2c8;
          }
          else if ((iVar1 != 2) ||
                  (*(long *)((long)param_13 + lVar5) != *(long *)((long)param_15 + lVar5)))
          goto LAB_0052e2c8;
          lVar5 = lVar5 + 0x10;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    else {
LAB_0052e2c8:
      piVar6 = getbytes(0x20);
      *piVar6 = iVar3;
      *(char **)(piVar6 + 2) = param_11;
      puVar7 = binbuf_new();
      *(undefined4 **)(piVar6 + 4) = puVar7;
      puVar7 = binbuf_new();
      *(undefined4 **)(piVar6 + 6) = puVar7;
      uVar12 = binbuf_add(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,*(int **)(piVar6 + 4),param_12,
                          (undefined8 *)param_13,param_11,(char *)puVar10,puVar11);
      puVar9 = (undefined *)(param_14 & 0xffffffff);
      binbuf_add(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 *(int **)(piVar6 + 6),(uint)param_14,param_15,param_11,(char *)puVar10,puVar11);
      canvas_undo_get((long)param_9);
      puVar8 = canvas_undo_init(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,
                                param_4,param_5,param_6,param_7,param_8,param_9,puVar9,extraout_RDX,
                                param_11,puVar10,puVar11);
      if (puVar8 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar8 + 1) = 0xe;
        puVar8[2] = piVar6;
        puVar8[3] = "state";
        canvas_undo_set_name("state");
        uVar12 = puVar8[3];
        uVar4 = glist_isvisible((long)param_9);
        if (uVar4 != 0) {
          bVar2 = glist_istoplevel((long)param_9);
          if ((int)CONCAT71(extraout_var,bVar2) != 0) {
            pdgui_vmess(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,0x654682,"^ ss",param_9,uVar12,&DAT_0065efc5
                        ,puVar11,param_15._0_1_);
            return;
          }
        }
      }
    }
  }
  return;
}


