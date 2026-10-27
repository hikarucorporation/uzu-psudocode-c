// Function : canvas_menufont
// Namespace: 
// Entry    : 00512070
// Prototype: undefined canvas_menufont(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 * param_12, undefined8 param_13, undefined8 param_14, undefined1 param_15)
// Body     : 00512070 - 005120a3


void canvas_menufont(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,undefined8 param_10,undefined8 param_11,undefined8 *param_12,
                    undefined8 param_13,undefined8 param_14,undefined1 param_15)

{
  long lVar1;
  undefined8 extraout_RDX;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar2;
  
  lVar1 = canvas_getrootfor(param_9);
  uVar2 = pdgui_stub_deleteforkey
                    (extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar1,
                     param_10,extraout_RDX,param_12,param_13,param_14);
  pdgui_stub_vnew(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar1,
                  "pdtk_canvas_dofont",(char *)lVar1,"i",(char *)(ulong)*(uint *)(lVar1 + 0xd0),
                  param_14,param_15);
  return;
}


