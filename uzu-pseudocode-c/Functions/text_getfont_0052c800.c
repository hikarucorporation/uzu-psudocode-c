// Function : text_getfont
// Namespace: 
// Entry    : 0052c800
// Prototype: undefined text_getfont(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, long * param_10, int * param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 0052c800 - 0052c8a2


void text_getfont(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long *param_9,long *param_10,int *param_11,int *param_12,char *param_13,
                 undefined8 param_14)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  
  if ((*param_9 != *(long *)PTR_canvas_class_00715918) ||
     (plVar5 = param_9, (~*(uint *)(param_9 + 0x1d) & 0x180) != 0)) {
    plVar5 = param_10;
  }
  uVar1 = glist_getfont(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar5
                        ,param_10,param_11,PTR_canvas_class_00715918,param_13,param_14);
  iVar2 = glist_getzoom((long)plVar5);
  if (((~*(byte *)((long)param_9 + 0x2e) & 3) == 0) && (0 < (int)*(uint *)((long)param_9 + 0x74))) {
    uVar1 = *(uint *)((long)param_9 + 0x74);
  }
  iVar3 = sys_zoomfontwidth(uVar1,iVar2,0);
  *param_11 = iVar3;
  iVar3 = sys_zoomfontheight(uVar1,iVar2,0);
  *param_12 = iVar3;
  uVar4 = sys_hostfontsize(uVar1,iVar2);
  *(undefined4 *)param_13 = uVar4;
  return;
}


