// Function : canvas_setcursor
// Namespace: 
// Entry    : 0050b140
// Prototype: undefined canvas_setcursor(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, ulong param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 0050b140 - 0050b1e6


void canvas_setcursor(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9,ulong param_10,undefined8 param_11,undefined8 param_12,
                     char *param_13,undefined8 param_14,undefined1 param_15)

{
  long lVar1;
  undefined1 in_AL;
  long *plVar2;
  uint uVar3;
  undefined8 extraout_XMM0_Qa;
  
  uVar3 = (uint)param_10;
  if (7 < uVar3) {
    bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"canvas_setcursor",param_10,
        param_11,param_12,param_13,param_14,param_15);
    return;
  }
  plVar2 = (long *)__tls_get_addr();
  if ((*(long *)(**(long **)(*plVar2 + 0x48) + 0x88) != param_9) ||
     (*(uint *)(**(long **)(*plVar2 + 0x48) + 0x90) != uVar3)) {
    pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"^r rr",
                param_9,"configure","-cursor",
                reltable_canvas_setcursor +
                *(int *)(reltable_canvas_setcursor + (param_10 & 0xffffffff) * 4),in_AL);
    plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar1 = **(long **)(*plVar2 + 0x48);
    *(long *)(lVar1 + 0x88) = param_9;
    *(uint *)(lVar1 + 0x90) = uVar3;
  }
  return;
}


