// Function : canvas_getdollarzero
// Namespace: 
// Entry    : 004fdb00
// Prototype: undefined4 canvas_getdollarzero(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 004fdb00 - 004fdb80


undefined4
canvas_getdollarzero
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 in_RAX;
  long *plVar2;
  undefined8 in_RCX;
  undefined8 extraout_RDX;
  undefined8 uVar3;
  undefined8 extraout_RDX_00;
  long lVar4;
  char *in_R8;
  undefined8 in_R9;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar5;
  
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar4 = *(long *)PTR_canvas_class_00715918;
  plVar2 = pd_findbyclass(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          *plVar2 + 0x120,lVar4);
  if (plVar2 == (long *)0x0) {
    return 0;
  }
  lVar1 = plVar2[0x1c];
  uVar3 = extraout_RDX;
  uVar5 = extraout_XMM0_Qa_00;
  while (lVar1 == 0) {
    plVar2 = (long *)plVar2[9];
    if (plVar2 == (long *)0x0) {
      uVar5 = bug(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  "t_canvasenvironment",lVar4,uVar3,in_RCX,in_R8,in_R9,(char)in_RAX);
      uVar3 = extraout_RDX_00;
    }
    lVar1 = plVar2[0x1c];
  }
  return *(undefined4 *)(lVar1 + 0x18);
}


