// Function : glist_pixelstoy
// Namespace: 
// Entry    : 00516f50
// Prototype: float glist_pixelstoy(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00516f50 - 00517029


float glist_pixelstoy(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                     char *param_13,undefined8 param_14)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 in_stack_ffffffffffffffd8;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  fVar3 = (float)param_1;
  if ((*(ushort *)(param_9 + 0xe8) & 0x100) == 0) {
    fVar5 = *(float *)(param_9 + 0x5c);
    fVar4 = *(float *)(param_9 + 100);
    iVar1 = *(int *)(param_9 + 0xec);
  }
  else {
    if ((*(ushort *)(param_9 + 0xe8) & 1) == 0) {
      lVar2 = *(long *)(param_9 + 0x48);
      if (lVar2 == 0) {
        param_1 = bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      "glist_pixelstox",0,param_11,param_12,param_13,param_14,
                      in_stack_ffffffffffffffd8);
        lVar2 = *(long *)(param_9 + 0x48);
      }
      graph_graphrect(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,lVar2,
                      &local_c,&local_14,&local_10,&local_18);
      return ((fVar3 - (float)local_14) * (*(float *)(param_9 + 100) - *(float *)(param_9 + 0x5c)))
             / (float)(local_18 - local_14) + *(float *)(param_9 + 0x5c);
    }
    fVar5 = *(float *)(param_9 + 0x5c);
    iVar1 = *(int *)(param_9 + 0x74) - *(int *)(param_9 + 0x6c);
    fVar4 = *(float *)(param_9 + 100);
  }
  return ((fVar4 - fVar5) * fVar3) / (float)iVar1 + fVar5;
}


