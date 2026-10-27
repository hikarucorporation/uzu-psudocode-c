// Function : glist_ytopixels
// Namespace: 
// Entry    : 00517120
// Prototype: float glist_ytopixels(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00517120 - 00517207


float glist_ytopixels(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
    return ((float)*(int *)(param_9 + 0xec) * (fVar2 - *(float *)(param_9 + 0x5c))) /
           (*(float *)(param_9 + 100) - *(float *)(param_9 + 0x5c));
  }
  if ((*(ushort *)(param_9 + 0xe8) & 1) != 0) {
    return ((fVar2 - *(float *)(param_9 + 0x5c)) *
           (float)(*(int *)(param_9 + 0x74) - *(int *)(param_9 + 0x6c))) /
           (*(float *)(param_9 + 100) - *(float *)(param_9 + 0x5c));
  }
  lVar1 = *(long *)(param_9 + 0x48);
  if (lVar1 == 0) {
    param_1 = bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"glist_pixelstox",
                  0,param_11,param_12,param_13,param_14,in_stack_ffffffffffffffd8);
    lVar1 = *(long *)(param_9 + 0x48);
  }
  graph_graphrect(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,lVar1,
                  &local_c,&local_14,&local_10,&local_18);
  return ((fVar2 - *(float *)(param_9 + 0x5c)) * (float)(local_18 - local_14)) /
         (*(float *)(param_9 + 100) - *(float *)(param_9 + 0x5c)) + (float)local_14;
}


