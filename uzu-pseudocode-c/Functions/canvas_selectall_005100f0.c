// Function : canvas_selectall
// Namespace: 
// Entry    : 005100f0
// Prototype: undefined canvas_selectall(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, long * param_10, ulong param_11, undefined8 param_12, long * param_13, undefined8 param_14)
// Body     : 005100f0 - 00510319


void canvas_selectall(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long *param_9,long *param_10,ulong param_11,undefined8 param_12,long *param_13,
                     undefined8 param_14)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  ulong extraout_RDX;
  long *plVar7;
  ulong extraout_RDX_00;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined8 in_stack_ffffffffffffff48;
  char local_a8 [136];
  
  if (param_9[0x18] != 0) {
    if ((*(byte *)(param_9 + 0x1d) & 0x20) == 0) {
      param_1 = canvas_editmode(DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                                ,(ulong)param_9);
      param_11 = extraout_RDX;
    }
    plVar1 = (long *)param_9[6];
    lVar4 = param_9[0x18];
    if (plVar1 != (long *)0x0) {
      if (lVar4 == 0) {
        return;
      }
      param_13 = *(long **)(lVar4 + 0x20);
      if (param_13 == (long *)0x0) {
joined_r0x005101ae:
        do {
          if (lVar4 != 0) {
            for (plVar7 = *(long **)(lVar4 + 0x20); plVar7 != (long *)0x0;
                plVar7 = (long *)plVar7[1]) {
              if ((long *)*plVar7 == plVar1) goto LAB_00510252;
            }
            puVar3 = getbytes(0x10);
            lVar4 = param_9[0x18];
            plVar5 = *(long **)(lVar4 + 0x20);
            plVar7 = plVar5;
            if (plVar5 == (long *)0x0) {
              plVar5 = (long *)0x0;
            }
            else {
              do {
                if ((long *)*plVar7 == plVar1) {
                  bug(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                      param_6,param_7,param_8,"glist_select",param_10,plVar7,plVar5,(char *)param_13
                      ,param_14,(char)in_stack_ffffffffffffff48);
                  lVar4 = param_9[0x18];
                  plVar5 = *(long **)(lVar4 + 0x20);
                  break;
                }
                plVar7 = (long *)plVar7[1];
              } while (plVar7 != (long *)0x0);
            }
            puVar3[1] = plVar5;
            *puVar3 = plVar1;
            *(undefined8 **)(lVar4 + 0x20) = puVar3;
            param_10 = param_9;
            gobj_select(plVar1,(long)param_9);
          }
LAB_00510252:
          plVar1 = (long *)plVar1[1];
          if (plVar1 == (long *)0x0) {
            return;
          }
          lVar4 = param_9[0x18];
        } while( true );
      }
      param_11 = 0;
      plVar7 = plVar1;
      do {
        plVar5 = param_13;
        do {
          plVar2 = (long *)*plVar5;
          if (plVar2 == plVar7) break;
          plVar5 = (long *)plVar5[1];
        } while (plVar5 != (long *)0x0);
        uVar6 = (int)param_11 + (uint)(plVar2 != plVar7);
        param_11 = (ulong)uVar6;
        plVar7 = (long *)plVar7[1];
      } while (plVar7 != (long *)0x0);
      if (uVar6 != 0) {
        param_10 = (long *)0x0;
        if (lVar4 == 0) {
          return;
        }
        goto joined_r0x005101ae;
      }
    }
    if (lVar4 != 0) {
      puVar3 = *(undefined8 **)(lVar4 + 0x20);
      while (puVar3 != (undefined8 *)0x0) {
        param_1 = glist_deselect(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 param_9,(long *)*puVar3,param_11,puVar3,(char *)param_13,param_14);
        lVar4 = param_9[0x18];
        param_11 = extraout_RDX_00;
        puVar3 = *(undefined8 **)(lVar4 + 0x20);
      }
      if ((*(byte *)(lVar4 + 0x88) & 0x20) != 0) {
        *(byte *)(lVar4 + 0x88) = *(byte *)(lVar4 + 0x88) & 0xdf;
        sprintf(local_a8,"l%p",*(undefined8 *)(param_9[0x18] + 0x80));
        pdgui_vmess(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8,0,"crs rs",param_9,"itemconfigure",local_a8,
                    "-fill",0x51);
      }
    }
  }
  return;
}


