// Function : canvas_popabstraction
// Namespace: 
// Entry    : 00500160
// Prototype: undefined canvas_popabstraction(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00500160 - 005001d6


void canvas_popabstraction
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               char *param_13,undefined8 param_14)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined1 unaff_BL;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar3;
  
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  *(long **)(*plVar1 + 0x58) = param_9;
  puVar2 = gensym("#A");
  puVar2[1] = 0;
  uVar3 = *(undefined8 *)(*plVar1 + 0x58);
  puVar2 = gensym("#A");
  uVar3 = pd_bind(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar3,
                  (long)puVar2,extraout_RDX,param_12,param_13,param_14);
  uVar3 = pd_popsym(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,
                    puVar2,extraout_RDX_00,param_12,param_13,param_14,unaff_BL);
  *(byte *)(param_9 + 0x1d) = *(byte *)(param_9 + 0x1d) & 0xf7;
  uVar3 = canvas_resortinlets(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9)
  ;
  canvas_resortoutlets(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}


