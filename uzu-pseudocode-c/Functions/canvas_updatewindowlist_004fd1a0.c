// Function : canvas_updatewindowlist
// Namespace: 
// Entry    : 004fd1a0
// Prototype: undefined8 canvas_updatewindowlist(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 004fd1a0 - 004fd1d1


undefined8
canvas_updatewindowlist
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 in_RAX;
  long *plVar1;
  undefined8 uVar2;
  undefined8 extraout_RDX;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 extraout_XMM0_Qa;
  undefined1 in_stack_00000008;
  
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  if (*(long *)(*(long *)(*plVar1 + 0x48) + 0x30) == 0) {
    uVar2 = pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        0x653f58,(char *)0x0,extraout_RDX,in_RAX,in_R8,in_R9,in_stack_00000008);
    return uVar2;
  }
  return in_RAX;
}


