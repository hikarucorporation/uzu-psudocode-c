// Function : graph_select
// Namespace: 
// Entry    : 005189e0
// Prototype: undefined graph_select(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, long * param_10, ulong param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005189e0 - 00518b00


void graph_select(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long *param_9,long *param_10,ulong param_11,undefined8 param_12,char *param_13,
                 undefined8 param_14)

{
  bool bVar1;
  long lVar2;
  undefined7 extraout_var;
  long *plVar3;
  undefined1 uVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  char local_78 [88];
  
  if ((*(byte *)((long)param_9 + 0xe9) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00518a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(PTR_text_widgetbehavior_00715630 + 0x10))(param_9,param_10,param_11 & 0xffffffff);
    return;
  }
  lVar2 = glist_findrtext(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          (long)param_10,(long)param_9,param_11,param_12,param_13,param_14);
  bVar1 = canvas_showtext((long)param_9);
  if ((int)CONCAT71(extraout_var,bVar1) != 0) {
    rtext_select(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar2,
                 (int)param_11);
  }
  lVar2 = rtext_gettag(lVar2);
  sprintf(local_78,"%sR",lVar2);
  uVar4 = 0x4c;
  if ((int)param_11 == 0) {
    uVar4 = 0x51;
  }
  pdgui_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs rr"
              ,param_10,"itemconfigure",local_78,"-fill",uVar4);
  sprintf(local_78,"graph%lx",(ulong)param_9);
  do {
    plVar3 = param_10;
    if ((long *)plVar3[9] == (long *)0x0) break;
    param_10 = (long *)plVar3[9];
  } while ((*(ushort *)(plVar3 + 0x1d) & 0x901) == 0x100);
  pdgui_vmess(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs rr"
              ,plVar3,"itemconfigure",local_78,"-fill",uVar4);
  return;
}


