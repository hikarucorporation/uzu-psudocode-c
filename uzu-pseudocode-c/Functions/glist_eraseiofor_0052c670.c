// Function : glist_eraseiofor
// Namespace: 
// Entry    : 0052c670
// Prototype: undefined glist_eraseiofor(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 0052c670 - 0052c772


void glist_eraseiofor(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9,long *param_10,char *param_11,undefined8 param_12,
                     undefined8 param_13,undefined8 param_14)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 in_stack_fffffffffffffbd8;
  char local_418 [1000];
  
  iVar1 = obj_noutlets((long)param_10);
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      sprintf(local_418,"%so%d",param_11,iVar3);
      uVar2 = glist_getcanvas(param_9);
      pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs",
                  uVar2,"delete",local_418,param_14,in_stack_fffffffffffffbd8);
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  iVar1 = obj_ninlets(param_10);
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      sprintf(local_418,"%si%d",param_11,iVar3);
      uVar2 = glist_getcanvas(param_9);
      pdgui_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                  "crs",uVar2,"delete",local_418,param_14,in_stack_fffffffffffffbd8);
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  return;
}


