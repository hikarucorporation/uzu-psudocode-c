// Function : text_sequence_line
// Namespace: 
// Entry    : 0055a380
// Prototype: undefined text_sequence_line(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 0055a380 - 0055a41b


void text_sequence_line(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9,undefined8 param_10,undefined8 param_11,int *param_12,
                       char *param_13,undefined8 param_14)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  char *pcVar4;
  bool bVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  
  puVar2 = (undefined4 *)
           text_client_getbuf(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              param_9,param_10,param_11,param_12,param_13,param_14);
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined8 *)(param_9 + 0xa8) = 0;
    puVar3 = (uint *)binbuf_getvec((long)puVar2);
    uVar1 = binbuf_getnatom(puVar2);
    if (0 < (int)uVar1) {
      param_13 = (char *)(ulong)uVar1;
      pcVar4 = (char *)0x0;
      uVar1 = 0;
      do {
        if (uVar1 == (int)(float)param_1) goto LAB_0055a406;
        bVar5 = (*puVar3 & 0xfffffffe) == 4;
        param_12 = (int *)(ulong)bVar5;
        uVar1 = uVar1 + bVar5;
        pcVar4 = pcVar4 + 1;
        puVar3 = puVar3 + 4;
      } while (param_13 != pcVar4);
    }
    pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,param_9,"text sequence: line number %d out of range",
             (ulong)(uint)(int)(float)param_1,param_12,param_13,param_14);
    pcVar4 = (char *)0x7fffffff;
LAB_0055a406:
    *(int *)(param_9 + 0x78) = (int)pcVar4;
    *(undefined1 *)(param_9 + 0xb0) = 0;
  }
  return;
}


