// Function : loop_list
// Namespace: 
// Entry    : 00563b60
// Prototype: undefined loop_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, int param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 00563b60 - 00563c7c


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void loop_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9,undefined8 param_10,int param_11,int *param_12,char *param_13,
              undefined8 param_14)

{
  double dVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  int iVar4;
  float fVar5;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_11 < 2) {
    if (param_11 == 1) {
      fVar5 = (float)atom_getfloat(param_12);
      if (fVar5 < DAT_005d9038) {
        pd_error(CONCAT44(extraout_XMM0_Db_00,fVar5),param_2,param_3,param_4,param_5,param_6,param_7
                 ,param_8,param_9,"[loop]: number of iterations need to be >= 1",
                 CONCAT44(extraout_var_00,extraout_EDX_00),param_12,param_13,param_14);
        return;
      }
      *(undefined4 *)(param_9 + 0x30) = 0;
      *(float *)(param_9 + 0x34) = (float)((int)fVar5 + -1);
      uVar2 = _UNK_0065ada8;
      dVar1 = _DAT_0065ada0;
      *(double *)(param_9 + 0x50) = _DAT_0065ada0;
      *(undefined8 *)(param_9 + 0x58) = uVar2;
      if (*(long *)(param_9 + 0x60) == 1) {
        return;
      }
      *(undefined8 *)(param_9 + 0x40) = 0;
      goto LAB_00563c38;
    }
    if ((param_11 != 0) || (*(long *)(param_9 + 0x60) == 1)) {
      return;
    }
    fVar5 = *(float *)(param_9 + 0x30);
  }
  else {
    piVar3 = param_12;
    iVar4 = atom_getfloat(param_12);
    *(int *)(param_9 + 0x30) = iVar4;
    iVar4 = atom_getfloat(param_12 + 4);
    *(int *)(param_9 + 0x34) = iVar4;
    if (param_11 == 3) {
      fVar5 = (float)atom_getfloat(param_12 + 8);
      uVar6 = 0;
      uVar7 = 0;
      param_2 = 0;
      if (fVar5 <= 0.0) {
        pd_error(CONCAT44(extraout_XMM0_Db,fVar5),0,param_3,param_4,param_5,param_6,param_7,param_8,
                 param_9,"[loop]: step needs to be > 0",CONCAT44(extraout_var,extraout_EDX),piVar3,
                 param_13,param_14);
        param_2 = CONCAT44(uVar7,uVar6);
      }
      else {
        *(float *)(param_9 + 0x48) = fVar5;
      }
    }
    fVar5 = *(float *)(param_9 + 0x30);
    *(ulong *)(param_9 + 0x58) = (ulong)(fVar5 < *(float *)(param_9 + 0x34));
    *(undefined8 *)(param_9 + 0x50) = 0;
    if (*(long *)(param_9 + 0x60) == 1) {
      return;
    }
  }
  dVar1 = (double)fVar5;
  *(double *)(param_9 + 0x40) = dVar1;
LAB_00563c38:
  loop_do_loop(dVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}


