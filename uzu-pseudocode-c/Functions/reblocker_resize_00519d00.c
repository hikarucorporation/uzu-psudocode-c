// Function : reblocker_resize
// Namespace: 
// Entry    : 00519d00
// Prototype: undefined reblocker_resize(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, uint param_10, int param_11, int param_12)
// Body     : 00519d00 - 00519e33


void reblocker_resize(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long *param_9,uint param_10,int param_11,int param_12)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  long lVar5;
  
  iVar4 = param_10 - param_11;
  if (iVar4 != 0) {
    if (param_11 <= (int)param_10) {
      lVar5 = (long)param_11 * 0x48 + 8;
      do {
        freebytes(*(void **)(*param_9 + -8 + lVar5));
        param_1 = resample_free(*param_9 + lVar5);
        lVar5 = lVar5 + 0x48;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    lVar5 = (long)(int)param_10;
    pvVar2 = resizebytes(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         (void *)*param_9,lVar5 * 0x48,(long)param_11 * 0x48);
    *param_9 = (long)pvVar2;
    if ((int)param_10 < param_11) {
      pvVar3 = getbytes((long)param_12 << 2);
      *(void **)((long)pvVar2 + lVar5 * 0x48) = pvVar3;
      resample_init(lVar5 * 0x48 + 8 + (long)pvVar2);
      if (param_10 + 1 != param_11) {
        iVar4 = ~param_10 + param_11;
        lVar5 = lVar5 * 0x48 + 0x50;
        do {
          lVar1 = *param_9;
          pvVar2 = getbytes((long)param_12 << 2);
          *(void **)(lVar1 + -8 + lVar5) = pvVar2;
          resample_init(lVar1 + lVar5);
          lVar5 = lVar5 + 0x48;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
  }
  return;
}


