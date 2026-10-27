// Function : plot_float
// Namespace: 
// Entry    : 00522680
// Prototype: undefined plot_float(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00522680 - 0052273e


void plot_float(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               char *param_13,undefined8 param_14)

{
  undefined1 uVar1;
  undefined7 uVar2;
  undefined8 extraout_RDX;
  float fVar3;
  uint uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uStack_14;
  
  fVar3 = (float)param_1;
  uVar2 = (undefined7)((ulong)param_12 >> 8);
  if ((*(char *)(param_9 + 0x1c8) != '\x01') || (*(char *)(param_9 + 0x1c9) != '\0')) {
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "global vis/invis for a template with variable visibility",param_11,param_12,param_13,
             param_14);
    return;
  }
  fVar5 = *(float *)(param_9 + 0x1d0);
  uVar6 = 0;
  if (((fVar3 == 0.0) || (fVar5 == 0.0)) &&
     (uVar1 = fVar5 != 0.0 || fVar3 != 0.0, fVar5 != 0.0 || fVar3 != 0.0)) {
    canvas_redrawallfortemplatecanvas
              (param_1,0,(ulong)(uint)fVar5,param_4,param_5,param_6,param_7,param_8,
               *(long *)(param_9 + 0x30),2,param_11,CONCAT71(uVar2,uVar1),param_13,param_14);
    uStack_14 = (undefined4)((ulong)param_1 >> 0x20);
    uVar4 = DAT_005d9038 & -(uint)(fVar3 != 0.0);
    *(undefined2 *)(param_9 + 0x1c8) = 1;
    *(uint *)(param_9 + 0x1d0) = uVar4;
    *(undefined8 *)(param_9 + 0x1d8) = 0;
    *(undefined8 *)(param_9 + 0x1e0) = 0;
    *(undefined4 *)(param_9 + 0x1e8) = 0;
    canvas_redrawallfortemplatecanvas
              (0,CONCAT44(uStack_14,-(uint)(fVar3 != 0.0)),CONCAT44(uVar6,fVar5),param_4,param_5,
               param_6,param_7,param_8,*(long *)(param_9 + 0x30),1,extraout_RDX,
               CONCAT71(uVar2,uVar1),param_13,param_14);
    return;
  }
  return;
}


