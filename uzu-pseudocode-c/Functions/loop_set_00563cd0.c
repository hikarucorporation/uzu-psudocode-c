// Function : loop_set
// Namespace: 
// Entry    : 00563cd0
// Prototype: undefined loop_set(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, int param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 00563cd0 - 00563dab


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void loop_set(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,undefined8 param_10,int param_11,int *param_12,char *param_13,
             undefined8 param_14)

{
  undefined8 uVar1;
  int *piVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float fVar3;
  int iVar4;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  
  if (param_11 != 0) {
    if (param_11 != 1) {
      piVar2 = param_12;
      iVar4 = atom_getfloat(param_12);
      *(int *)(param_9 + 0x30) = iVar4;
      iVar4 = atom_getfloat(param_12 + 4);
      *(int *)(param_9 + 0x34) = iVar4;
      if (param_11 == 3) {
        fVar3 = (float)atom_getfloat(param_12 + 8);
        if (fVar3 <= 0.0) {
          pd_error(CONCAT44(extraout_XMM0_Db_00,fVar3),0,param_3,param_4,param_5,param_6,param_7,
                   param_8,param_9,"[loop]: step needs to be > 0",
                   CONCAT44(extraout_var_00,extraout_EDX_00),piVar2,param_13,param_14);
        }
        else {
          *(float *)(param_9 + 0x48) = fVar3;
        }
      }
      *(ulong *)(param_9 + 0x58) = (ulong)(*(float *)(param_9 + 0x30) < *(float *)(param_9 + 0x34));
      *(undefined8 *)(param_9 + 0x50) = 0;
      return;
    }
    fVar3 = (float)atom_getfloat(param_12);
    if (fVar3 < DAT_005d9038) {
      pd_error(CONCAT44(extraout_XMM0_Db,fVar3),param_2,param_3,param_4,param_5,param_6,param_7,
               param_8,param_9,"[loop]: number of iterations need to be >= 1",
               CONCAT44(extraout_var,extraout_EDX),param_12,param_13,param_14);
      return;
    }
    *(undefined4 *)(param_9 + 0x30) = 0;
    *(float *)(param_9 + 0x34) = (float)((int)fVar3 + -1);
    uVar1 = _UNK_0065ada8;
    *(undefined8 *)(param_9 + 0x50) = _DAT_0065ada0;
    *(undefined8 *)(param_9 + 0x58) = uVar1;
  }
  return;
}


