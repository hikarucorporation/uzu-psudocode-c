// Function : line_tick
// Namespace: 
// Entry    : 0055c7b0
// Prototype: undefined line_tick(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0055c7b0 - 0055c869


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void line_tick(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  undefined4 extraout_XMM0_Da;
  uint extraout_XMM0_Da_00;
  float fVar4;
  undefined4 extraout_XMM0_Db;
  uint extraout_XMM0_Db_00;
  double dVar5;
  
  clock_getlogicaltime();
  clock_gettimesince(*(undefined8 *)(param_9 + 0x38));
  if (_DAT_0065a960 <= (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) &&
      (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) != _DAT_0065a960) {
    outlet_float((ulong)*(uint *)(param_9 + 0x40),param_2,param_3,param_4,param_5,param_6,param_7,
                 param_8,*(long **)(param_9 + 0x18));
    return;
  }
  uVar2 = extraout_XMM0_Da_00 ^ _DAT_00652d10;
  uVar3 = extraout_XMM0_Db_00 ^ _UNK_00652d14;
  fVar4 = *(float *)(param_9 + 0x50);
  dVar5 = ((double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) - *(double *)(param_9 + 0x48)) *
          *(double *)(param_9 + 0x60);
  dVar1 = (double)(*(float *)(param_9 + 0x40) - fVar4) * dVar5 + (double)fVar4;
  outlet_float(CONCAT44((int)((ulong)dVar1 >> 0x20),(float)dVar1),(ulong)(uint)fVar4,(double)fVar4,
               dVar5,param_5,param_6,param_7,param_8,*(long **)(param_9 + 0x18));
  fVar4 = *(float *)(param_9 + 0x58);
  if (*(float *)(param_9 + 0x58) <= 0.0) {
    *(undefined4 *)(param_9 + 0x58) = 0x41a00000;
    fVar4 = DAT_005d98f4;
  }
  dVar1 = (double)CONCAT44(uVar3,uVar2);
  if ((double)fVar4 <= dVar1) {
    dVar1 = (double)fVar4;
  }
  clock_delay(dVar1,*(double **)(param_9 + 0x30));
  return;
}


