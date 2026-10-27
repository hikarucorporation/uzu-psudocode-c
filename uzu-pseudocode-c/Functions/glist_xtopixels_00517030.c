// Function : glist_xtopixels
// Namespace: 
// Entry    : 00517030
// Prototype: float glist_xtopixels(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00517030 - 00517117


float glist_xtopixels(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                     char *param_13,undefined8 param_14)

{
  long lVar1;
  float fVar2;
  undefined1 in_stack_ffffffffffffffd8;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  fVar2 = (float)param_1;
  if ((*(ushort *)(param_9 + 0xe8) & 0x100) == 0) {
    return ((float)*(int *)(param_9 + 0xec) * (fVar2 - *(float *)(param_9 + 0x58))) /
           (*(float *)(param_9 + 0x60) - *(float *)(param_9 + 0x58));
  }
  if ((*(ushort *)(param_9 + 0xe8) & 1) != 0) {
    return ((fVar2 - *(float *)(param_9 + 0x58)) *
           (float)(*(int *)(param_9 + 0x70) - *(int *)(param_9 + 0x68))) /
           (*(float *)(param_9 + 0x60) - *(float *)(param_9 + 0x58));
  }
  lVar1 = *(long *)(param_9 + 0x48);
  if (lVar1 == 0) {
    param_1 = bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"glist_pixelstox",
                  0,param_11,param_12,param_13,param_14,in_stack_ffffffffffffffd8);
    lVar1 = *(long *)(param_9 + 0x48);
  }
  graph_graphrect(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,lVar1,
                  &local_14,&local_c,&local_18,&local_10);
  return ((fVar2 - *(float *)(param_9 + 0x58)) * (float)(local_18 - local_14)) /
         (*(float *)(param_9 + 0x60) - *(float *)(param_9 + 0x58)) + (float)local_14;
}


