// Function : gfxstub_data
// Namespace: 
// Entry    : 0054f770
// Prototype: undefined gfxstub_data(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, uint param_11, undefined8 * param_12, char * param_13, undefined8 param_14)
// Body     : 0054f770 - 0054f7ae


void gfxstub_data(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,uint param_11,undefined8 *param_12,
                 char *param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 extraout_RDX;
  ulong uVar2;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar3;
  
  puVar1 = param_12;
  if (gfxstub_binbuf == (int *)0x0) {
    gfxstub_binbuf = binbuf_new();
    param_1 = extraout_XMM0_Qa;
  }
  uVar2 = (ulong)param_11;
  uVar3 = binbuf_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,gfxstub_binbuf,
                     param_11,param_12,puVar1,param_13,param_14);
  binbuf_addsemi(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,gfxstub_binbuf,uVar2,
                 extraout_RDX,puVar1,param_13,param_14);
  return;
}


