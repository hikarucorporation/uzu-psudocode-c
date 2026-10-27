// Function : canvas_undo_font
// Namespace: 
// Entry    : 0050aa70
// Prototype: undefined8 canvas_undo_font(long param_1, int * param_2, int param_3, undefined8 param_4, char * param_5, undefined4 * param_6)
// Body     : 0050aa70 - 0050aaf4


undefined8
canvas_undo_font(long param_1,int *param_2,int param_3,undefined8 param_4,char *param_5,
                undefined4 *param_6)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_var;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  
  if (param_3 - 1U < 2) {
    piVar4 = param_2;
    puVar3 = (undefined *)canvas_getrootfor(param_1);
    uVar1 = param_2[2];
    fVar5 = DAT_005d9038 / (float)param_2[1];
    fVar6 = DAT_005d9038;
    if (uVar1 != 3) {
      fVar6 = fVar5;
    }
    iVar2 = *(int *)(puVar3 + 0xd0);
    fVar7 = DAT_005d9038;
    if (uVar1 != 2) {
      fVar7 = fVar5;
    }
    canvas_dofont((float)*param_2,(ulong)(uint)fVar6,(ulong)(uint)fVar7,in_XMM3_Qa,in_XMM4_Qa,
                  in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,puVar3,(undefined *)piVar4,
                  CONCAT44(extraout_var,extraout_EDX),(char *)(ulong)uVar1,param_5,param_6);
    param_2[1] = (int)fVar5;
    *param_2 = iVar2;
  }
  else if ((param_2 != (int *)0x0) && (param_3 == 0)) {
    freebytes(param_2);
  }
  return 1;
}


