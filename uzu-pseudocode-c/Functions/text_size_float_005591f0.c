// Function : text_size_float
// Namespace: 
// Entry    : 005591f0
// Prototype: undefined text_size_float(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 005591f0 - 005592b8


void text_size_float(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,undefined8 param_10,undefined8 param_11,int *param_12,
                    char *param_13,undefined8 param_14)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  ulong uVar4;
  int iVar5;
  long *plVar6;
  float fVar7;
  
  puVar2 = (undefined4 *)
           text_client_getbuf(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              param_9,param_10,param_11,param_12,param_13,param_14);
  if (puVar2 == (undefined4 *)0x0) {
    return;
  }
  puVar3 = (uint *)binbuf_getvec((long)puVar2);
  uVar1 = binbuf_getnatom(puVar2);
  if (0 < (int)uVar1) {
    uVar4 = 0;
    iVar5 = 0;
    do {
      if (iVar5 == (int)(float)param_1) {
        iVar5 = (int)uVar4;
        if (iVar5 < (int)uVar1) goto LAB_00559280;
        uVar4 = uVar4 & 0xffffffff;
        goto LAB_0055929e;
      }
      iVar5 = iVar5 + (uint)((*puVar3 & 0xfffffffe) == 4);
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 4;
    } while (uVar1 != uVar4);
  }
  plVar6 = *(long **)(param_9 + 0x60);
  fVar7 = DAT_005d9054;
  goto LAB_005592ab;
  while( true ) {
    uVar4 = uVar4 + 1;
    puVar3 = puVar3 + 4;
    if (uVar1 == uVar4) break;
LAB_00559280:
    if ((*puVar3 & 0xfffffffe) == 4) goto LAB_0055929e;
  }
  uVar4 = (ulong)uVar1;
LAB_0055929e:
  plVar6 = *(long **)(param_9 + 0x60);
  fVar7 = (float)((int)uVar4 - iVar5);
LAB_005592ab:
  outlet_float((ulong)(uint)fVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar6);
  return;
}


