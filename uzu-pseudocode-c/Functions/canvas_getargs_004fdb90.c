// Function : canvas_getargs
// Namespace: 
// Entry    : 004fdb90
// Prototype: undefined canvas_getargs(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined4 * param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 004fdb90 - 004fdc40


void canvas_getargs(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined4 *param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                   char *param_13,undefined8 param_14)

{
  long lVar1;
  undefined8 in_RAX;
  long *plVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar3;
  undefined8 extraout_RDX_01;
  long lVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar5;
  
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar4 = *(long *)PTR_canvas_class_00715918;
  plVar2 = pd_findbyclass(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          *plVar2 + 0x120,lVar4);
  if (plVar2 == (long *)0x0) {
    uVar5 = bug(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                "canvas_getenv",lVar4,extraout_RDX,param_12,param_13,param_14,(char)in_RAX);
    uVar3 = extraout_RDX_00;
    lVar1 = lRam00000000000000e0;
  }
  else {
    lVar1 = plVar2[0x1c];
    uVar3 = extraout_RDX;
    uVar5 = extraout_XMM0_Qa_00;
  }
  while (lVar1 == 0) {
    plVar2 = (long *)plVar2[9];
    if (plVar2 == (long *)0x0) {
      uVar5 = bug(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  "t_canvasenvironment",lVar4,uVar3,param_12,param_13,param_14,(char)in_RAX);
      uVar3 = extraout_RDX_01;
    }
    lVar1 = plVar2[0x1c];
  }
  *param_9 = *(undefined4 *)(lVar1 + 8);
  *param_10 = *(undefined8 *)(lVar1 + 0x10);
  return;
}


