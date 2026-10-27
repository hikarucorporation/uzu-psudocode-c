// Function : text_ypix
// Namespace: 
// Entry    : 00517360
// Prototype: int text_ypix(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00517360 - 00517407


int text_ypix(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,long param_10,undefined8 param_11,undefined8 param_12,char *param_13,
             undefined8 param_14)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  uVar2 = (undefined4)((ulong)param_2 >> 0x20);
  if ((*(ushort *)(param_10 + 0xe8) & 0x101) != 0x100) {
    return (int)*(short *)(param_9 + 0x2a) * *(int *)(param_10 + 0xec);
  }
  fVar1 = *(float *)(param_10 + 0x5c);
  if ((*(ushort *)(param_10 + 0xe8) & 0x80) == 0) {
    fVar4 = (float)(*(int *)(param_10 + 0x74) - *(int *)(param_10 + 0x6c));
    fVar3 = *(float *)(param_10 + 100) - fVar1;
    fVar1 = ((float)(int)*(short *)(param_9 + 0x2a) * fVar3) / fVar4 + fVar1;
    fVar1 = glist_ytopixels(CONCAT44(uVar2,fVar1),CONCAT44(uVar2,fVar1),(ulong)(uint)fVar3,
                            CONCAT44((int)((ulong)param_4 >> 0x20),fVar4),param_5,param_6,param_7,
                            param_8,param_10,param_10,param_11,0x100,param_13,param_14);
    return (int)fVar1;
  }
  fVar1 = glist_ytopixels((ulong)(uint)fVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                          ,param_10,param_10,param_11,0x100,param_13,param_14);
  return (int)((float)(((int)*(short *)(param_9 + 0x2a) - *(int *)(param_10 + 0x7c)) *
                      *(int *)(param_10 + 0xec)) + fVar1);
}


