// Function : vu_float
// Namespace: 
// Entry    : 005b08c0
// Prototype: undefined vu_float(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005b08c0 - 005b09ac


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void vu_float(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  
  iVar1 = *(int *)(param_9 + 0x498);
  if ((param_1 == 0.0) ||
     (((uint)param_1 & 0x7f800000) != 0 && ((uint)param_1 & 0x7f800000) != 0x7f800000)) {
    dVar4 = (double)param_1;
    uVar2 = 0;
    if ((_DAT_0065efb0 < dVar4) && (uVar2 = 0x28, param_1 < DAT_005d9074)) {
      uVar2 = *(undefined4 *)
               (PTR_iemgui_vu_db2i_00715f70 + (long)(int)(dVar4 + dVar4 + DAT_00651f78) * 4);
    }
    dVar5 = dVar4 * DAT_005d90a0 + _DAT_0065efb8;
    *(undefined4 *)(param_9 + 0x498) = uVar2;
    dVar4 = (double)((int)dVar5 + -10000) * DAT_00651f48;
    fVar3 = (float)dVar4;
    *(float *)(param_9 + 0x4a0) = fVar3;
    outlet_float(CONCAT44((int)((ulong)dVar4 >> 0x20),fVar3),dVar5,param_3,param_4,param_5,param_6,
                 param_7,param_8,*(long **)(param_9 + 0x4a8));
    *(byte *)(param_9 + 0x4b8) = *(byte *)(param_9 + 0x4b8) | 1;
    if (*(int *)(param_9 + 0x498) != iVar1) {
      sys_queuegui(param_9,*(long *)(param_9 + 0x30),0x5b1ee0);
      return;
    }
  }
  return;
}


