// Function : glist_redraw
// Namespace: 
// Entry    : 00517410
// Prototype: undefined glist_redraw(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long * param_9, undefined8 param_10, undefined8 param_11, char * param_12, char * param_13, ulong param_14)
// Body     : 00517410 - 005175a8


void glist_redraw(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 double param_5,double param_6,double param_7,undefined8 param_8,long *param_9,
                 undefined8 param_10,undefined8 param_11,char *param_12,char *param_13,
                 ulong param_14)

{
  long *plVar1;
  bool bVar2;
  uint uVar3;
  undefined7 extraout_var;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  long local_130 [11];
  uint local_d8;
  undefined4 local_d4;
  char local_b8 [136];
  
  uVar3 = glist_isvisible((long)param_9);
  if (uVar3 != 0) {
    bVar2 = glist_istoplevel((long)param_9);
    if ((int)CONCAT71(extraout_var,bVar2) != 0) {
      for (plVar1 = (long *)param_9[6]; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
        gobj_vis(plVar1,param_9,0);
        gobj_vis(plVar1,param_9,1);
      }
      uVar6 = linetraverser_start(local_130,param_9);
      puVar4 = linetraverser_next(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                  local_130);
      uVar6 = extraout_XMM0_Qa;
      if (puVar4 != (undefined8 *)0x0) {
        do {
          sprintf(local_b8,"l%p",puVar4);
          plVar1 = param_9;
          do {
            plVar5 = plVar1;
            if ((long *)plVar5[9] == (long *)0x0) break;
            plVar1 = (long *)plVar5[9];
          } while ((*(ushort *)(plVar5 + 0x1d) & 0x901) == 0x100);
          param_14 = (ulong)local_d8;
          param_12 = "coords";
          param_13 = local_b8;
          uVar6 = pdgui_vmess(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,0,"crs iiii",plVar5,"coords",local_b8,param_14,(char)local_d4)
          ;
          puVar4 = linetraverser_next(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                      local_130);
          uVar6 = extraout_XMM0_Qa_00;
        } while (puVar4 != (undefined8 *)0x0);
      }
      uVar6 = canvas_drawredrect(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 (long)param_9,0);
      if ((*(byte *)(param_9 + 0x1d) & 0x80) != 0) {
        canvas_drawredrect(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           (long)param_9,1);
      }
    }
    if (((param_9[9] != 0) && ((*(byte *)((long)param_9 + 0xe9) & 8) == 0)) &&
       (uVar3 = glist_isvisible(param_9[9]), uVar3 != 0)) {
      uVar6 = graph_vis(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        param_9,(long *)param_9[9],0,param_12,param_13,param_14);
      graph_vis(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                (long *)param_9[9],1,param_12,param_13,param_14);
    }
  }
  return;
}


